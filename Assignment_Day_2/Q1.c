#include<stdio.h>
#include<stdint.h>
#define BV(n) (1U<<n)
void print_bin(void *vp,int size);

int  main()
{

unsigned int reg_set;
unsigned int reg_clear;
unsigned int reg_toggle;
uint8_t reg =0x2A;

reg = reg | BV(4);
printf("After set a 4th bit = 0x%02X\n",reg);
printf("Binary Number =");
print_bin(&reg_set, sizeof(reg_set));


reg =reg & ~ BV(1);
printf("\nAfter clear a 1st  bit = 0x%02X\n",reg);
printf("Binary Number =");
print_bin(&reg_clear,sizeof(reg_clear));


reg =reg ^ BV(5);
printf("\nAfter Toggle a 5th bit = 0x%02X\n",reg);
printf("Binary Number =");
print_bin(&reg_toggle,sizeof(reg_toggle));

return 0;
}

void print_bin(void *vp, int size)
{
    int i;

    for (i = size - 1; i >= 0; i--)
    {
        unsigned char mask= 0x80;
        while (mask)
        {
            if ( *(((unsigned char *)vp + i)) & mask )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            mask = mask >> 1;
        }
    }
}

