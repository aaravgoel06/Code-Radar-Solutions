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
        }else if(i<1 && arr[i]<arr[1+i] && arr[i]>arr[i-1]){
            printf("%d",arr[1+i]);
            break;
        }else{
            printf("%d",arr[n-1]);
            break;
        }
    }
    return 0;
}