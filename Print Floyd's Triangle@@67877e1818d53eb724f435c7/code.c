// Your code here...
// #include <stdio.h>
// int main(){
//     int n;
//     int v=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j=2;j<=i;j++){ 
//             v++;
//           for(int k=1;k<=j;k++){
           
//         }
//         printf("%d ",v);
//             }
        
//         printf("\n");
//     }
// return 0;
// }



#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}














