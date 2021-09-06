#include <stdio.h>
#include <stdlib.h>
//11-inputRightForm
// nhập chuỗi
// ứng dụng buffer
// nhập vào 1 số nguyên, nếu người dùng nhập cà chớn thì chửi

// ví dụ: nhập 1 -> được
// nhập 12 -> đc
// nhập 1.2 -> chửi
// 1a -> chửi
// a1a -> chửi
int main()
{
    int number;
    char buffer;
    do{
        printf("\nPlz, input number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin); //buffer sẽ hứng nút enter, nếu buffer khác 10 > chửi;
        if(buffer != 10){
            printf("\nNot number");
        }
    }while(buffer != 10);




    return 0;
}
