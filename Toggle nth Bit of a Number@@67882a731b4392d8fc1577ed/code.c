// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int check=a^(1<<b);
    
    printf("%d",check);
    
    return 0;
}