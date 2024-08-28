#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int maxSubArray(vector<int>& nums) {
        int max_current = nums[0];
        int max_global = nums[0];
        
        for (size_t i = 1; i < nums.size(); ++i) {
            max_current = max(nums[i], max_current + nums[i]);
            if (max_current > max_global) {
                max_global = max_current;
            }
        }
        
        return max_global;
    }
int main() {
    vector<int> x;
    x.push_back(100);
    x.push_back(80);
    x.push_back(60);
    x.push_back(-70);
    x.push_back(-60);
    x.push_back(-75);
    x.push_back(85);

    cout<< maxSubArray(x);
}
