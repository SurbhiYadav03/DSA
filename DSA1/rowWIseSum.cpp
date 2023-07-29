//largest row sum program combined in this code 

#include<iostream>
#include<climits>
using namespace std;

void sum(int arr[3][4],int row,int col){

    int maxi=INT_MIN; int index=-1;   //to calculate largest row sum

    for(int row=0;row<3;row++){
    int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
        
        //to calculate largest row sum
        if(sum>maxi){
            maxi=sum;
            index=row;
        }
    }

    cout<<endl<<maxi<<" "<<index;

}
int main()
{
    int arr[3][4]={{1,2,36,4},{5,6,787,8},{9,10,11,12}};
    sum(arr,3,4);
    return 0;
}