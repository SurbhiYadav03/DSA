#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &v,int k){
    vector<int> temp(v.size());
   for(int i=0;i<v.size();i++){
      temp[(i+k)%v.size()]=v[i];
   }

   v=temp;

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }
}
int main()
{
    vector<int> arr ={1,4,5,6,7};
    int k=2; //o/p --> 6,7,1,4,5
    rotate(arr,k);
    return 0;
}