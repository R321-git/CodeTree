#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 1000){
        printf("no");
    }
    else if(1000 <= n && n < 3000 ){
        printf("mask");
    }
    else{
        printf("book");
    }
    return 0;
}