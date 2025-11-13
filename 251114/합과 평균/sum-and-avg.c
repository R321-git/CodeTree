#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);
    double avg = ((double)A + (double)B) / 2;

    printf("%d %.1lf", A+B, avg);


    return 0;
}