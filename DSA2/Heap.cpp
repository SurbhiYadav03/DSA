#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int data)
    {
        size++;
        int i = size;
        arr[i] = data;

        while (i > 1)
        {

            int pindex = i / 2;
            if (arr[i] > arr[pindex])
            {
                swap(arr[i], arr[pindex]);
            }
            else{
                return;
            }
        }
    }
    void print()
    {
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deleteFromHeap()
    {
        if(size==0){
            return ;
        }

        arr[1] = arr[size];
        arr[size]=0;
        size--;

        int i=1;
        while(i<size){
            int left = 2*i;
            int right = 2*i+1;
            if(left < size && arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i = left;
            }
            else if(right<size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }

    void heapify(int *arr,int n,int i){
        //n=no. of nodes (n/2+1 to nth nodes are leaf { they are already heap on themselves (no need to heapify)})
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;
        if(left<n && arr[largest]<arr[left]){
            largest = left;
            
        }
        if(right<n && arr[largest]<arr[right]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
    return 0;
}
