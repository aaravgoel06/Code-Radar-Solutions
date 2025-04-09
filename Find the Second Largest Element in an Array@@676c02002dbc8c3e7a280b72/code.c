// Your code here...
#include <stdio.h>
int main (){
    int n,equal=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      for(int i=0;i<n;i++){
        if(arr[i]!=arr[0]){
            break;
            equal=1;

        }
      }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
           
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
           }
            

        }
        
    }
    if(equal==1){printf("%d",arr[n-2]);}

    else{
       printf("-1");

    }
    return 0;
}