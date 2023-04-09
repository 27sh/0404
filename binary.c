#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t data;
    printf("16진수를 입력하세요 : ");
    scanf("%hx", &data);

    uint16_t mask = 0x8000;
    int i;
    for (i = 0; i < 16; i++) {
        if (i == 4 || i == 7) {
            printf(":");
        }
        if ((data & mask) == 0) {
            printf("0");
        } else {
            printf("1");
        }
        mask >>= 1;
    }
    printf("\n");

    return 0;
}