// Your code here...// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=0;
    int total=32;
    for(count=0;total>0;total--){
        if((a&1)==0){
            
        count+=1;
         a=a>>1;
        }else if((a&1)==1){
            break;
        }
        
    }printf("%d",count);
    return 0;
}