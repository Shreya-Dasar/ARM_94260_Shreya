#include<stdio.h>

int countOnes(unsigned int n){
int count =0;
while(n){
    count += n&1;
}
return count;
}
int main()
{
    unsigned int num =29;
    printf("Number of 1 bits =%d\n",countOnes(num));
    return 0;
}
