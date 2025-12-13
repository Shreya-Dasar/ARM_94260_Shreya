#include <stdio.h>

unsigned char even(unsigned char byte);

int main() 
{
    unsigned char byte = 0x5A; 

    printf("Original byte: 0x%02X\n", byte);

    byte = even(byte);

    printf("After even parity: 0x%02X\n", byte);

    return 0;
}
unsigned char even(unsigned char byte)
{
    unsigned char temp = byte;
    int count = 0;
    while (temp)
    {
        if (temp & 1) count++;
        temp >>= 1;
    }
    if (count % 2 != 0) 
    {
        byte |= 0x80; 
    }

    return byte;
}