#include <stdio.h>
#include <stdlib.h>
//Compara2NNumber
/*
keu nguoi dung nhap vao hai so nguyen
sau do in ra ket qua so sanh xem so nao lon hon

*/
int main()
{
    //input: dau vao
    int number1;
    int number2;
    printf("\nPlease input number 1: ");
    scanf("%d", &number1);
    printf("\nPlease input number 2: ");
    scanf("%d", &number2);
    //tao 2 bien theo yeu cau de bai

    //Process
    if(number1 > number2){
        printf("\nNumber1 lon nhat");
    }else if ( number1 < number2){
        printf("\nNumber2 lon nhat");
    }else{
        printf("\nHai so bang nhau");
    }


    return 0;
}
