#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int number;
    printf("Plz, input number: ");
    scanf("%d", &number);
    //process
    if (number % 2 == 0){
        printf("\n%d la so chan", number);
    }else{
        printf("\n%d la so le", number);
    }
    //output
    return 0;
}
