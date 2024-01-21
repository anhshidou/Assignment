#include <stdio.h>

double makedo(int ipart, int fraction) {
    double d_f = fraction;

    while (d_f >= 1) {
        d_f = d_f / 10;
    }

    if (ipart < 0) {
        return ipart - d_f;
    } else {
        return ipart + d_f;
    }
}

int main() {
    int ipart, fraction;
    double value;

    printf("Enter integer part: ");
    scanf("%d", &ipart);

    printf("Enter fraction part: ");
    do {
        scanf("%d", &fraction);
    } while (fraction < 0);

    value = makedo(ipart, fraction);

    printf("Value: %lf\n", value);

    return 0;
}

