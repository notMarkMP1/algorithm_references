#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

void generate_subsets(vector<int> &nums, vector<int> &subset, int index){
    if(index == nums.size()){
        if(subset.size() == 0){
            cout << "{empty}\n";
            return;
        }
        else{
            for(auto x: subset){
                cout << x << " ";
            }
            cout << '\n';
            return;
        }
    }
    generate_subsets(nums, subset, index+1);
    subset.push_back(nums[index]);
    generate_subsets(nums, subset, index+1);
    subset.pop_back();
}

int main(){
    // example:
    vector<int> nums = {1, 2, 3};
    vector<int> subset;
    generate_subsets(nums, subset, 0);
}