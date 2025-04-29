#include <bits/stdc++.h>
using namespace std;
// Function to check Palindrome
bool checkPalindrome(int n)
{
	int reverse = 0;
	int temp = n;
	while (temp != 0) {
		reverse = (reverse * 10) + (temp % 10);
		temp = temp / 10;
	}
	return (reverse == n);
}
bool pali(int a){
    string f = to_string(a);
    int i=0,j=f.size()-1;
    while( i<j){
        if(f[i]!=f[j]) return false;
        i++,j--;
    }
    return true;
}
int main()
{
	int n = 7007;
	if (pali(n) == 1) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}