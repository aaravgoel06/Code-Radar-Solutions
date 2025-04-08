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
        if(arr[0]>arr[1]){
            printf("%d",arr[0]);
            break;
        }else if(arr[0+i]<arr[1+i] && arr[1+i]>arr[2+i]){
            printf("%d",arr[1+i]);
            break;
        }else{
            printf(arr[n-1]);
            break;
        }
    }
    return 0;
}