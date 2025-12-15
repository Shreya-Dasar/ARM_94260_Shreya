#include<stdio.h>
#include<stdint.h>
#define BV(n) (1U<<n)
int main()
{
uint8_t status = 0x08;
if (status & BV(4))
{
    printf("Bit is SET ");
}
else
{
    printf("Bit is clear ");
}

}