#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int max(int *arr)
{
    if(arr[0]>arr[1] && arr[0]>arr[2])
    return arr[0];
    else if (arr[1]>arr[0] && arr[1]>arr[2])
    return arr[1];
    else
    return arr[2];
}
int and(int i,int j){
    // int arr[3];
    // for(int k=0;k<3;k++){
    //     arr[k]=(i&j);
    // }
    return (i&j);
}
int or(int i,int j){
    // int arr[3];
    // for(int l=0;l<3;l++){
    //     arr[l]=(i|j);
    // }
    return (i|j);
}
int xor(int i,int j){
    // int arr[3];
    // for(int m=0;m<3;m++){
    //     arr[m]=(i^j);
    // }
    return (i^j);
}


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  int i,j;
  int arr1[3];int arr2[3];int arr3[3];
  
  for( i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          arr1[i-1]=and(i,j);
          arr2[i-1]=or(i,j);
          arr3[i-1]=xor(i,j);
      }
  }
  printf("%d\n",max(arr1));
  printf("%d\n",max(arr2));
  printf("%d\n",max(arr3));
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
