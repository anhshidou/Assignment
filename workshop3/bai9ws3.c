#include <stdio.h>

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b, d, m;

    printf("Enter a: ");
    do {
        scanf("%d", &a);
    } while (a <= 0);

    printf("Enter b: ");
    do {
        scanf("%d", &b);
    } while (b <= 0);

    d = gcd(a, b);
    m = lcm(a, b);

    printf("GCD: %d\n", d);
    printf("LCM: %d\n", m);

    return 0;
}

