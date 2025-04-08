// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[0+i]>arr[1+i]){
             printf("Not sorted");
             break;
        } else{
           printf("Sorted");
           break;
        }
        

    }
    
    return 0;
}