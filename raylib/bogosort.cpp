#include <iostream>
#include <random>
#include <bits/stdc++.h>

using namespace std;
int e=0;
void bogoSort(int *a, int n) {
  bool sorted = false;
    unsigned seed = 0;
  while (!sorted) {
    random_shuffle(a, a + n);
    sorted = true;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] > a[i + 1]) {
        cout <<e<< "\n";
        e++;
        sorted = false;
        break;
      }
    }
  }
}

int main() {
  int a[] = {1,2,3,4,5,6,7,8,10,9};
  int n = sizeof(a) / sizeof(a[0]);
srand(time(0));
  bogoSort(a, n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << ",";
  }
  cout << endl;
  return 0;
}
