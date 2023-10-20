#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
int c=0;
    int countPrimes(int n) {
        for (int i = 2; i <= n; ++i) {
            if (isPrime(i)) {
                c++;
            }
        }
        return c;
    }
    bool isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
            return false;
            }
        }
        return true;
    }
};


int main() {
Solution a;
cout << a.countPrimes(10);
}
