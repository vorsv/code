#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    Solution(){
        vector<string> words = { "abc","car","ada","racecar","cool" };

        cout << firstPalindrome(words);
    }
    string firstPalindrome(vector<string>& words) {
        for (auto i : words){
            cout << "in for\n";
            if(isPalindrome(i)) return i ;
        }
        return ""; 
    }
    bool isPalindrome(string s){
        int i = 0, j = s.size() - 1;
        while (i > j)if(s[i++] != s[j--]) return false;
        return true;
    }
};

int main(){
    Solution s;
}