// Your code here...
#include <stdio.h>
int main(){
    int n;
scanf("%d",&n);
for(int i=n;i>=0;i--){
    for(int j=n-i+1;j<=1;j++){
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;
}
