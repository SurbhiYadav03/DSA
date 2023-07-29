//if col = even --> top to bottom printing
//if col = odd  --> bottom to top printing

#include<iostream>
#include<climits>
using namespace std;

void print(int arr[3][4],int row,int col)
{
    for(int col=0;col<4;col++){
        if(col&1)  //odd column -->  bottom to top print
    {
        for(int row=2;row>=0;row--){
            cout<<arr[row][col]<<" ";
        } 
             
    }
    else //odd col-->t to b print
    {
        for(int row=0;row<3;row++){
            cout<<arr[row][col]<<" ";
        } 
    }
    }

}
int main()
{
    int arr[3][4]={{1,2,36,4},{5,6,787,8},{9,10,11,12}};
    print(arr,3,4);
    return 0;
}