#include <stdio.h>
#include <stdlib.h>
int swap(int* number1, int* number2);
int main()
{
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);
    swap(&number1, &number2);
    //*FuncNumber1= &number1
    //*FuncNumber2= &number2
    printf("%d, %d", number1, number2);
    return 0;
}
//pass value: truyen tham tri
int swap(int *number1, int *number2){
    int tmp = *number1;
    *number1= *number2;
    *number2= tmp;
}//pass by references: truyen tham chieu
