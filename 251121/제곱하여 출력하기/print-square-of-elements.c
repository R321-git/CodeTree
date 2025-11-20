#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int number[N];
    for(int i = 0; i < N; i ++){
        scanf("%d", &number[i]);
    }
    
    for(int i = 0; i < N; i++){
        printf("%d ", number[i] * number[i]);
    }

    return 0;
}