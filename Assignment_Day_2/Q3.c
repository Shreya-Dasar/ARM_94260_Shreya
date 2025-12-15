#include<stdio.h>
#include<stdint.h>

int main()
{
    int lower ;
    int upper;
   uint16_t reg = 0xABCD;
   lower =(reg & 0x0F );
   printf("Lower bits =%X\n",lower);
   upper =(reg >> 4 & 0x0F);
   printf("Upper bits =%X\n",upper);
}