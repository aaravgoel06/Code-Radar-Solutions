// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        for(int k=1;k<=n;k++){
                printf((n-1)*" ");
            }
        for(int j=1;j<=i;j++){
           
        printf("*");
    }
    printf("\n");
    }
    return 0;
}