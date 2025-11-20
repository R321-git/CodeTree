#include <stdio.h>

int main() {
    int age, gender;
    scanf("%d%d", &gender, &age);

    if(gender == 0){
        if(age >= 19)
        printf("MAN");
        else
        printf("BOY");
    }
    else{
        if(age >= 19)
        printf("WOMAN");
        else
        printf("GIRL");
    }
    return 0;
}