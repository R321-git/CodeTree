#include <stdio.h>

int main() {
    int A,N;
    scanf("%d%d", &A,&N);

    for(int i = 0; i <N; i++){
        printf("%d\n", A+N);
        A = A + N;
    }

    return 0;
}