#include<stdio.h>
#include<stdint.h>
int main()
{

int left_shift;
int right_shift;
uint8_t value = 5;

left_shift=value << 2;
right_shift=value >> 1;
printf("After left shifted %X\n",left_shift);
printf("After right shifted %X\n",right_shift);
return 0;
}