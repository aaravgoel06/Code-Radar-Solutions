// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         if(i==1 && i==n){
                // printf("*");
            for(int j=1;j<=n;j++){
            printf("*");
            }
            } else {for(int j=1;j<=n;j++){else if( j==1 && j==n){
             printf("*");
            }else{
                printf(" ");
            } }}
           
            
        
        
    }
  
    return 0;
}