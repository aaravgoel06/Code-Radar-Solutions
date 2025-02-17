// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int msb = a & (1 << 31) ;
    if(msb!=0){
        printf("Set");
    }else {
        printf("Not Set");
    }
    
    return 0;
}