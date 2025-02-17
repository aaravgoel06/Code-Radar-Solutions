// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>c) && (c>b)){
        printf("%d",a);
    } else if(c>b){
        printf("%d",c);
    }else{
        printf("%d",b);
    }
    return 0;
}