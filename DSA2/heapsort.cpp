#include <iostream>
using namespace std;

    void heapify(int *arr,int n,int i){
        //n=no. of nodes (n/2+1 to nth nodes are leaf { they are already heap on themselves (no need to heapify)})
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;
        if(left<=n && arr[largest]<arr[left]){
            largest = left;
            
        }
        if(right<=n && arr[largest]<arr[right]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    void heapsort(int* arr,int n)
    {
        int size = n;
        int i = 1;
        while(i<size)
        {
            swap(arr[1],arr[size]);  //root element at last (max heap -> 1st ele largest)
            size--;
            heapify(arr,size,1);
        }
    }

int main()
{
    //no. of nodes
    int n = 5;
    int arr[] = {-1,54,53,55,52,50};  //random

    //build heap (max heap)
    for(int i = n/2;i>0;i--){
        heapify(arr,n,i);
    }

    //printing max heap
    for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;

    //heapsort
    heapsort(arr,n);

    //printing sorted array (after heap sort )
    for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
