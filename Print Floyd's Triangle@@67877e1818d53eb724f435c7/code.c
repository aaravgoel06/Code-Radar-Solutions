// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for (int j=1;j<=i;j++){
            for(int k=2;k<=j;k++){
                j++;
                printf("%d ",j);
            }
        }
        printf("\n");
    }
return 0;
}
