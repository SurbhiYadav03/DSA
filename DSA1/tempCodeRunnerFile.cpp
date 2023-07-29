#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // place pivot at right place
    int pivotIndex = s + count;
    cout<<pivot<<" "<<arr[s] <<endl;

    swap(arr[pivotIndex], pivot);

    // pivot condition resolve(all left should be smaller and all right should be greater)
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (arr[i] > pivot && arr[j] < pivot)
        {
            swap(arr[i++], arr[j--]);
        }
       
    }
     return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    // sort left part
    quickSort(arr, s, p - 1);
    
    
    // sort right part
    quickSort(arr, p+1, e);

}

int main()
{
    int n = 5;
    int arr[] = {16,4,5,2,11};
    quickSort(arr, 0, n - 1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}