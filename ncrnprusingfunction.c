// find ncr npr using function
#include<stdio.h>
long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);


int main(){
    int n, r;
    long ncr,npr;
    printf("Enter the value for n and r:\n");
    scanf("%d %d",&n,&r);
    ncr = find_ncr(n,r);
    npr = find_npr(n,r);
    printf("ncr = %d for n= %d, r= %d ", ncr, n,r);
    printf("npr = %d for n= %d, r= %d ", npr, n,r);

return 0;
}

long factorial(int n){
    if(n==0){
    return 1;
    }
    else
    return (n*factorial(n-1));
}

long find_npr(int n, int r){
    long result;
    result = factorial(n)/factorial(n-r);
    return result;
}
long find_ncr(int n, int r){
    long result;
    result = factorial(n)/ (factorial(r)*factorial(n-r));
    return result;
}
