//monotonic array means either elements are in increasing order or in decreasing order
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
   
    bool isMonotonic(vector<int>& nums) {
      bool inc = true;
      bool dec = true;

      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]>nums[i+1])
              inc = false;
          
          else if(nums[i]<nums[i+1])
              dec = false;
          
          if(inc==false && dec==false)
          return false;
      }
      
      return true;
    }
    
};

int main()
{
    Solution s;
    vector<int> nums = {6,6,4,3,1};
    cout<<s.isMonotonic(nums);
}