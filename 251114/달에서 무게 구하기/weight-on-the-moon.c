#include <stdio.h>

int main() {
    int weight;
    float moon_ratio;

    weight = 13;
    moon_ratio = 0.165;

    printf("%d * %lf = %.6lf",weight, moon_ratio, weight*moon_ratio);

    return 0;
}