#include <stdio.h>

int gcd(int u, int v) {
    int t;
    int loopCounter = 0;
    while (u > 0) {
        printf("Loop %d\n", loopCounter);
        printf("Starting: u = %d v = %d\n", u, v);
        if (u < v) {
            t = u; u = v; v = t;
            printf("A swap occured.\n");
        }
        printf("Ending: u = %d v = %d\n", u - v, v);
        u = u - v;
        loopCounter++;
    }
    return v;
}

int main() {
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF) {
        if (x > 0 && y > 0) {
            printf("%d %d %d\n", x, y, gcd(x, y));
        }
    }
    return 0;
}