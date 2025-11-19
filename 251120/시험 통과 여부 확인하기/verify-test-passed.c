#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if(number >=80)
    printf("pass");
    else
    printf("%d more score",80 - number);


    return 0;
}