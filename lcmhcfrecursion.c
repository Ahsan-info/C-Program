// find lcm and hcf using recursion
#include<stdio.h>
long gcd(long, long);
int main(){
    long x,y, hcf,lcm;
    printf("Enter two number:\n");
    scanf("%ld %ld",&x,&y);
    hcf = gcd(x,y);
    lcm = (x*y)/hcf;
    printf("GCD= %ld\n", hcf);
    printf("LCM= %ld", lcm);

return 0;
}
long gcd(long a, long b){
if(b==0){
    return a;
}else{
return gcd(b,a%b);
}
}
