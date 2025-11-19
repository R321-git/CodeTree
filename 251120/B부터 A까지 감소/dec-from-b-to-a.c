#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    for(; A <= B; B--){
        printf("%d ", B);
    }
    return 0;
}