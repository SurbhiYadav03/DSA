#include<iostream>
using namespace std;
void push(int &top,int &size,int arr[])
    {
       int ele;
       cout<<"Enter ele";
       cin>>ele;

       if(top<size){
          top++;
          arr[top]=ele;
       }
       else{
        cout<<"Overflow"<<endl;
       }
    }
    // void pop()
    // {

    // }
    void display(int &size,int arr[])
    {
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
int main()
{
    int top=-1;
    int size;
    cout<<"enter size";
    cin>>size;
    int *arr=new int[size];
    int i;
    do{
    cout<<"Enter choice"<<endl;
    cin>>i;
        switch(i){
            case 1:
            push(top,size,arr);
            break;
            // case 2:
            // pop(top,size,arr);
            // break;
            case 3:
            display(size,arr);
            break;
            case 4:
            break;
    }
    }while(i!=4);
     
    return 0;
}