class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid;
        while(s<=e){
        mid = s+(e-s)/2;
        if(nums[mid]==target){
           return mid;
        }
        else if(nums[mid]>=nums[s]){
            if(nums[mid]>=target && nums[s]<=target){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        else if(nums[mid]<=nums[s]){
            if(nums[mid]<=target&&nums[e]>=target){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        }
        return -1;
    }
};
