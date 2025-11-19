#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if(N % 3 == 0 && N % 2 == 1){
        printf("true");
    }
    else if(N % 5 == 0 && N % 2 == 0){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}