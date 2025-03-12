// Your code here...
#include<stdio.h> 
int main(char *args) {
    int n;
    scanf("%d", n);

    for(int i=0;i<n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}