#include <stdio.h>
#include <stdlib.h>

// Declare a heap structure
struct Heap {
	int* arr;
	int size;
	int capacity;
};

// define the struct Heap name
typedef struct Heap heap;

// forward declarations
heap* createHeap(int capacity, int* nums);
void insertHelper(heap* h, int index);
void heapify(heap* h, int index);
int extractMin(heap* h);
void insert(heap* h, int data);

// Define a createHeap function
heap* createHeap(int capacity, int* nums)
{
	// Allocating memory to heap h
	heap* h = (heap*)malloc(sizeof(heap));

	// Checking if memory is allocated to h or not
	if (h == NULL) {
		printf("Memory error");
		return NULL;
	}
	// set the values to size and capacity
	h->size = 0;
	h->capacity = capacity;

	// Allocating memory to array
	h->arr = (int*)malloc(capacity * sizeof(int));

	// Checking if memory is allocated to h or not
	if (h->arr == NULL) {
		printf("Memory error");
		return NULL;
	}
	int i;
	for (i = 0; i < capacity; i++) {
		h->arr[i] = nums[i];
	}

	h->size = i;
	i = (h->size - 2) / 2;
	while (i >= 0) {
		heapify(h, i);
		i--;
	}
	return h;
}

// Defining insertHelper function
void insertHelper(heap* h, int index)
{

	// Store parent of element at index
	// in parent variable
	int parent = (index - 1) / 2;

	if (h->arr[parent] > h->arr[index]) {
		// Swapping when child is smaller
		// than parent element
		int temp = h->arr[parent];
		h->arr[parent] = h->arr[index];
		h->arr[index] = temp;

		// Recursively calling insertHelper
		insertHelper(h, parent);
	}
}

void heapify(heap* h, int index)
{
	int left = index * 2 + 1;
	int right = index * 2 + 2;
	int min = index;

	// Checking whether our left or child element
	// is at right index or not to avoid index error
	if (left >= h->size || left < 0)
		left = -1;
	if (right >= h->size || right < 0)
		right = -1;

	// store left or right element in min if
	// any of these is smaller that its parent
	if (left != -1 && h->arr[left] < h->arr[index])
		min = left;
	if (right != -1 && h->arr[right] < h->arr[min])
		min = right;

	// Swapping the nodes
	if (min != index) {
		int temp = h->arr[min];
		h->arr[min] = h->arr[index];
		h->arr[index] = temp;

		// recursively calling for their child elements
		// to maintain min heap
		heapify(h, min);
	}
}

int extractMin(heap* h)
{
	int deleteItem;

	// Checking if the heap is empty or not
	if (h->size == 0) {
		printf("\nHeap id empty.");
		return -999;
	}

	// Store the node in deleteItem that
	// is to be deleted.
	deleteItem = h->arr[0];

	// Replace the deleted node with the last node
	h->arr[0] = h->arr[h->size - 1];
	// Decrement the size of heap
	h->size--;

	// Call minheapify_top_down for 0th index
	// to maintain the heap property
	heapify(h, 0);
	return deleteItem;
}

// Define a insert function
void insert(heap* h, int data)
{

	// Checking if heap is full or not
	if (h->size < h->capacity) {
		// Inserting data into an array
		h->arr[h->size] = data;
		// Calling insertHelper function
		insertHelper(h, h->size);
		// Incrementing size of array
		h->size++;
	}
}

void printHeap(heap* h)
{

	for (int i = 0; i < h->size; i++) {
		printf("%d ", h->arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[9] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	heap* hp = createHeap(9, arr);

	printHeap(hp);
	extractMin(hp);
	printHeap(hp);

	return 0;
}
