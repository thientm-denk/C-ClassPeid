#include <stdio.h>
#include <stdlib.h>
//nhap vao 3 so nguyen
//so sanh 3 so
//in ra so lon nhat
int main()
{
    int number1, number2, number3;
    //tao 3 bien in chua co gia tri cu the. Ba bien nay se chua rac
    printf("Plz, input number1: ");
    scanf("%d", &number1);
    printf("Plz, input number2: ");
    scanf("%d", &number2);
    printf("Plz, input number3: ");
    scanf("%d", &number3);
    if(number1 > number2 && number1 > number3){
        printf("\nNumber1 lon nhat");
    }else if (number1 == number2 && number1 > number3){
        printf("\nNumber1 lon nhat");
    }else if (number1 == number3 && number1 > number2){
        printf("\nNumber1 lon nhat");
    }else if (number2 > number1 && number2 > number3){
        printf("\nNumber2 lon nhat");
    }else if (number3 == number2 && number2 > number1){
        printf("\nNumber2 lon nhat");
    }else if (number3 > number2 && number1 < number3){
        printf("\nNumber3 lon nhat");
    }else{
        printf("Ba so bang nhau");}



    return 0;
}
