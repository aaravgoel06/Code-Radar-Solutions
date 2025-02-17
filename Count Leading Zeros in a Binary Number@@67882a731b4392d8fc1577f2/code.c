// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=0;
    for(int i=0;a>0;i++){
        if(a&1==0){
            a>>1;
        }else(
            printf("%d",32-i)
        )
    }
    return 0;
}