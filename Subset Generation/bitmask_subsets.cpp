#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

void generate_subsets(vector<int> &nums){
    int n = nums.size();
    for(int mask = 0; mask < (1 << n); mask++){
        vector<int> subset;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                subset.push_back(nums[i]);
            }
        }
        if(subset.size() == 0){
            cout << "{empty}\n";
            continue;
        }
        for(auto x: subset){
            cout << x << " ";
        }
        cout << '\n';
    }
}    

int main(){
    // example
    vector<int> nums = {1, 2, 3, 4};
    generate_subsets(nums);
}