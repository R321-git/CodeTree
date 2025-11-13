#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", A>=B ? 1 : 0, A>B ? 1 : 0, B>=A ? 1 : 0, B>A ? 1 : 0, A==B ? 1 : 0, A!=B ? 1 : 0);


    return 0;
}