// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    int a,b,c;
    
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral");
    } else if((a==b) && !(b==c)){
        printf("Isosceles");
    }else if(!(a==b) && !(a==c)){
        printf("Scalene");
    } 


    return 0;
}
