// Your code here...
int isPrime(int num){
    int a =1;
    if(num==1 || num==0){
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            a=0;
        }
    }
    if(a==0){
        return 0;
    }else{
        return 1;
    }
}