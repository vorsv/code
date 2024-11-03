#include<iostream>

using namespace std;

class Solution {
public:
    Solution(){
        string a = "Leetcode eisc cool";
        cout << isCircularSentence(a);
    }
    bool isCircularSentence(string a) {
        int i=0;
        if(a[0] != a[(a.length()-1)]) return false;
        else while(i < a.length()-1){
            if(a[i] != ' ') i++;
            else {
                if(a[i-1] != a[i+1]) return false;
                else i++;
            }
        }
        return true;
    }
};

int main(){
    Solution a;
    return 0;
}