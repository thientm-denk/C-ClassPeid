#include <stdio.h>
#include <stdlib.h>
//nhap vao so thuc dai dien cho ba canh khac nhau
//neu ba canh nay tao thanh tam giac
//thi in ra man hinh xem no la tam giac gi (deu, can, vuong, vuong can, tam giac thuong)
//khong tao thanh tam giac
int main()
{
    double a, b, c;
    printf("\nPlz, input a  : ");
    scanf("%lf", &a);
    printf("\nPlz, input b  : ");
    scanf("%lf", &b);
    printf("\nPlz, input c  : ");
    scanf("%lf", &c);


    if (a+b > c && a+c > b && b+c > a){
        if (a==b ||  a==c || b==c){
            if (a==b && a==c){
                printf("\nTam giac deu");
            }else if (a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b){
            printf("\nTam giac vuong can");
            }else{
            printf("\nTam giac can");
            }
        }else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
            printf("\nTam giac vuong");
        }
    }else{
    printf("\nBa canh khong tao thanh tam giac");
    }


    return 0;
}
