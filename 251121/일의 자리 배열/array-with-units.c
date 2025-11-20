#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    printf("%d %d ", A, B);

    for(int i = 1; i < 9; i++){
        printf("%d ", (A+B) % 10 );
        if(i % 2 == 1){
            A = (A+B) % 10;
        }
        else if(i % 2 == 0){
            B = (A+B) % 10;
        }
    }


    return 0;
}