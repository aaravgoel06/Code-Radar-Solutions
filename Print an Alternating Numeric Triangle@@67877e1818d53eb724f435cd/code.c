// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int j;
        if(i==1){
            printf("1");
        }else{for(int j=0;j<i;j++){
            printf("%d ",j);
        }}
        printf("\n");
    }
}