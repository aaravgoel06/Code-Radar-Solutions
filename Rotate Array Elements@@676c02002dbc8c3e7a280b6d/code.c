// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;
        for(int i=0;i<n;i++){
             printf("%d",arr[i+k]%n);
    
        }
       
    

    return 0;
}