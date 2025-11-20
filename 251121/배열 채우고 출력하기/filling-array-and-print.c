#include <stdio.h>

int main() {
    char character[10];
    
    for(int i = 0; i <= 9; i++){
        scanf("%c ", &character[i]);
    }
    
    for(int i = 9; i >= 0; i--){
        printf("%c", character[i]);
    }

}