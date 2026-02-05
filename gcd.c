#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
int y,z ;
 
 printf("ENTER THE TWO NUMBER : ");
 scanf ("%d%d" , &y,&z);
printf("GCD of %d and %d is %d\n", y, z, gcd(y,z));

return 0;
}
