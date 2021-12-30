#include <stdio.h>

int main () {
    int i1, i2;
    printf("Please enter 2 integers - either can be negative or positive:");
    scanf("%d %d", &i1, &i2);
    printf("\n%d / %d = %d; %d mod %d = %d\n", i1, i2, i1/i2, i1, i2, i1%i2);
    printf("\n%d / %d = %d; %d mod %d = %d\n", -1*i1, i2, -1*i1/i2, -1*i1, i2, -1*i1%i2);
    printf("\n%d / %d = %d; %d mod %d = %d\n", i1, -1*i2, i1/(-1*i2), i1, -1*i2, i1%(-1*i2));
    printf("\n%d / %d = %d; %d mod %d = %d\n", -1*i1, -1*i2, -1*i1/(-1*i2), -1*i1, -1*i2, -1*i1%(-1*i2));
    return 0;
}