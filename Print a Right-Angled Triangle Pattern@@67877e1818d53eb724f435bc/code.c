#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n,i<=0,i++){
        for(int j=i,j<=i,j++){
            printf("* ");
        }
        printf("\n");
    }
    // printf("%s", welcome()); i 
    
    return 0;
}