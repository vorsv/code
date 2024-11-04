#include <iostream>
using namespace std;

int fac(int a){
	int z=1;
	while(a>=1){
		z*=a;
		a--;
	}
    return z;
}

int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "answer is " << fac(num) << endl;	// Writing output to STDOUT
}