// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int i=2;i<=n;i++){
    for(int j=i;j>=1;j--){
            printf("%d",j);
        }}
        // for(int j=i;j>=1;j--){
        //     printf("%d",j);
        // }
     printf("\n");
    }
    for(int i=2;i<=n;i++){
    for(int j=i;j>=1;j--){
            printf("%d",j);
        }}
    
    return 0;
}
 