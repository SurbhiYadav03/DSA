#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> res;
        res.push_back(nums[0]);
        for(int i = 1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                res.push_back(nums[i]);
            }
            else{
                i++;
            }
        }
        return res.size()+1;
    }
};


int main()
{
    Solution s;
    vector<int>nums{0,0,1,1,1,2,2,2,3,3,4};
    cout<<s.removeDuplicates(nums) ;
    return 0;
}