#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    Solution(){
        vector<int> f = {36,6,98,25,97,24,25,70,50,71,30,14,28,100,3,26,61,98,50,41,5,3,28,34,0};
        vector<int> g = gradingStudents(f);
        disp(g);
    }
    void disp(vector<int> a){
    for (size_t l = 0; l < a.size(); l++)
    {
        cout << a[l]<<", ";
    }
        
    }
    vector<int> gradingStudents(vector<int> grades) {
        size_t i=0;
        for(i = 0 ; i < grades.size() ; i++ ){
            if(grades[i] < 38 ) grades[i] = grades[i];
            else grades[i] = round(grades[i]);
        }
        return grades;
    }
    int round(int g){
        int k = g % 10;
        if(k == 2 || k == 7 || k == 1 || k == 6  || k==0 || k==5) return g;
        else if ( k == 3 || k == 4 ) return ((g/10)*10)+5;
        else return ((g/10)+1)*10;
    }
};
int main(){
    Solution a;
}