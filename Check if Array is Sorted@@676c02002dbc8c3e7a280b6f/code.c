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
        if(arr[0+i]<arr[1+i]){
            continue;
        } else{
            break;
            printf("Not sorted");
        }
        

    }
    printf("Sorted");
    return 0;
}