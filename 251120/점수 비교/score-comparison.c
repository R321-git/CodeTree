#include <stdio.h>

int main() {
    int A_m, A_e;
    int B_m, B_e;
    scanf("%d%d%d%d", &A_m,&A_e,&B_m,&B_e);

    if(A_m > B_m && A_e > B_e)
    printf("1");
    else
    printf("0");


    return 0;
}