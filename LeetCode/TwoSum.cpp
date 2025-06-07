#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hasher;
        for(int i = 0; i < nums.size(); ++i){
            if(hasher.count(nums[i])){
                return {hasher.at(nums[i]), i};
            }
            else{
                hasher[target - nums[i]] = i;
            }
        }
        return {0, 0};
    }
};

//https://leetcode.com/problems/two-sum/