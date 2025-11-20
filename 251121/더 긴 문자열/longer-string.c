#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    char B[100];

    scanf("%s", &A);
    scanf("%s", &B);

    if(strlen(A) > strlen(B))
    printf("%s %d", A,strlen(A));
    else if(strlen(A) < strlen(B))
    printf("%s %d", B,strlen(B));
    else
    printf("same");

    return 0;
}