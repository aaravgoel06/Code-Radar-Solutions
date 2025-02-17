// Your code here...  
// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    if ((a>>b)&1==1){
        printf("1");
    } else {
        printf("0");
    }

    
    
    return 0;
}