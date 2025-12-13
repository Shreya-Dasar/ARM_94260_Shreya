#include <stdio.h>
#include <stdlib.h>

void print_bin(void *vp, int size);

int main(void)
{
    int n;
    printf("Enter a number ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    unsigned char ch = (unsigned char)n;
    print_bin(&ch, sizeof(ch));

    return 0;
}

void print_bin(void *vp, int size)
{
    int i;
    for (i = size - 1; i >= 0; i--) {
        unsigned char mask = 0x80;   
        while (mask) {
            if (*((unsigned char *)vp) & mask) {
                printf("1");
            } else {
                printf("0");
            }
            mask >>= 1;
        }
    }
    printf("\n");
}