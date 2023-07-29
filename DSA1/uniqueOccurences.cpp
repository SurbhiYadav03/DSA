#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v;
        for(int i=0;i<sizeof(arr);i++)
        {
            int count=0;
            for(int j=0;j<sizeof(arr);j++){
                if(arr[j]==arr[i])
                    count++;
            }
            v.push_back(count);
        }
        int num=0;
        for(int i=0;i<sizeof(v);i++){
               if((num^v[i])==0){
                    num=num^v[i];
                   return false;
               }
               return true;
            }
        }
    
};

int main()
{
    Solution s;
    vector<int>arr {1,2};
    cout<<s.uniqueOccurrences(arr);
    return 0;
}