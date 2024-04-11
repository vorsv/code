#include <stdio.h>
#include <string.h>

void bitStuffing(int N, int arr[])
{
	int grr[30];
	int i, j, k;
	i = 0;
	j = 0;
	while (i < N) {

		if (arr[i] == 1) {
			int count = 1;
			grr[j] = arr[i];
			for (k = i + 1;
				arr[k] == 1 && k < N && count < 5; k++) {
				j++;
				grr[j] = arr[k];
				count++;
				if (count == 5) {
					j++;
					grr[j] = 0;
				}
				i = k;
			}
		}
		else {
			grr[j] = arr[i];
		}
		i++;
		j++;
	}

	for (i = 0; i < j; i++)
		printf("%d", grr[i]);
}

void debitStuffing(int N, int arr[])
{
	int grr[30];
	int i, j, k;
	i = 0;
	j = 0;
	while (i < N) {

		if (arr[i] == 1) {
			int count = 1;
			grr[j] = arr[i];
			for (k = i + 1;
				arr[k] == 1 && k < N && count < 5; k++) {
				j++;
				grr[j] = arr[k];
				count++;
				if (count == 5) k++;
				i = k;
				// printf("(%d %d %d),",i,k,count);
			}
		}
		else {
			grr[j] = arr[i];
			printf("(%d %d),",i,k);
		}
		i++;
		j++;
	}

	for (i = 0; i < j; i++)
		printf("%d", grr[i]);
}

// Driver Code
int main()
{
	int N = 6;
	int arr[] = { 1, 1, 1, 1, 1, 1 },brr[] = { 1, 1, 1, 1, 1, 0, 1 };
	printf("\nBit stuffing:\n");
	bitStuffing(N, arr);
	printf("\n\nDe-bit Stuffing:\n");
	debitStuffing(N,brr);
	printf("1");
	return 0;
}