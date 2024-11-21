#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<vector<int>> items  = {{1,2},{3,2},{2,4},{5,6},{3,5}};//[[1,2],[3,2],[2,4],[5,6],[3,5]]
            vector<int> queries ={1,2,3,4,5,6};
            vector<int> a =maximumBeauty(items ,queries);
            for(int i : a) cout << i << "\n";
        }
        vector<int> maximumBeauty(vector<vector<int>> items, vector<int> queries) {
            for(int i : queries) {
                int maax =0 ,n=items.size();
                for(int j; j<n; j++){
                    if(items[j][0] == i) maax = max(maax, items[j][1]);
                    cout << i << " " << j << " " << maax << endl;
                }
                i = maax;
            }
            return queries;
        }
};
int main(){
    Solution a;
    return 0;
}