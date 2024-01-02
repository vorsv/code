#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
  try {
    // Arithmetic exception
    int x = 5, y = 0;
    int z = x / y;
    throw;
  }
  catch (...) {
    cout<<"Arithmetic exception caught: "<<endl;
  }

  try {
    // Array index out of bounds exception
    int arr[3] = {1, 2, 3};
    int i = 5;
    int val = arr[i];
    throw;
  }
  catch (...) {
    cout<<"Array index out of bounds exception caught: \n";
  }
}