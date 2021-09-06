#include <stdio.h>
#include <stdlib.h>
// tinhs tổng các phần tử 1 số
// 1234 -> 10
// trung bình
int main()
{
    int number;
    int sum = 0;
    printf("\nPlz, input number: ");
    scanf("%d", &number);
    //chia lấy dư cho 10 sau đó chia lấy nguyên cho 10 tiếp

    while(number>0){
        sum+=number%10;
        number=number/10;
    }
    printf("= %d", sum);
    return 0;

}
