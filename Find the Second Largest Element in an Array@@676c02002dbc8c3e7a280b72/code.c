// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp;
            arr[j]=temp;
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
          
        }
        
    }printf(arr[n-2]);
    return 0;
}