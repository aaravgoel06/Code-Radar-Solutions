// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int start%2;
        for(int j=0;j<i;j++){
            printf("%d ",start);
            start=1-start;
        }}
        printf("\n");
    }
}