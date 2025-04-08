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
        if(i==0 && arr[0]>arr[1]){
            printf("%d",arr[0]);
            break;
        }else if(i>=1 && arr[i]>arr[1+i] && arr[i]>arr[i-1]){
            printf("%d",arr[i]);
            break;
        }else if(i==(n-1) && arr[i]>arr[i-1]){
            printf("%d",arr[n-1]);
            break;
        }
        printf("-1");
    }
    printf("-1");
    return 0;
}