// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int check=~(1<<b);
    int reverse= check & a;
    printf("%d",reverse);
    
    return 0;
