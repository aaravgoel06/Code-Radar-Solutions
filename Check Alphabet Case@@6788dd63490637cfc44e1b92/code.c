// Your code here...
#include <stdio.h>
int main(){
    char name;
    scanf("%c",&name);
    if((name>=A) && (name<=Z)){
        printf("Uppercase");
    } else if((name>=a) && (name<=z)) {
        ptf("Lowercase");
    } else {
        printf("Not an alphabet");
    }
    return 0;
}