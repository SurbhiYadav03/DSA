#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[1000];
    scanf("%s",&str);
        int count=0;  
              
    for(int j=0;j<strlen(str);j++){
        for(int i=0;i<strlen(str);i++){
        if((str[i]-'0')==j){
            count++;
        }    
    }
    printf("%d ",count);   
    }
    return 0;
}
