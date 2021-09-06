#include <stdio.h>
#include <stdlib.h>
//giai phuong trinh  bac hai
//hnhap vao a b c
//sqrt(a)= can hai a
//pow(a,10)= a mu 2
//pow(a,1/10)= a mu 1/10
//equation quaratic
#include <math.h>
int main()
{
    double a, b, c;
    printf("\nPlz, input number a: ");
    scanf("%lf", &a);
    printf("\nPlz, input number b: ");
    scanf("%lf", &b);
    printf("\nPlz, input number c: ");
    scanf("%lf", &c);
    double denta = pow(b, 2) - 4*a*c;
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh vo so nghiem");
            }else{
                printf("Phuong trinh vo nghiem");
            }
        }else{
            printf("\nPhuong trinh co mot nghiem: %.1lf", (-b/(2*a)));
        }
    }else{
        double denta = pow(b, 2) - 4*a*c;
        if (denta > 0){

            printf("Phuong trinh co hai nghiem la: %.1lf, %.1lf",(-b - sqrt(denta))/(2*a) ,(-b + sqrt(denta))/(2*a) );

        }else if (denta == 0){

            printf("Phuong trinh co nghiem kep la: %.1lf", (-b/(2*a)));

        }else{
            printf("Phuong trinh vo nghiem");
        }
    }






    /*if (denta > 0){

        printf("Phuong trinh co hai nghiem la: %.1lf, %.1lf",(-b - sqrt(denta))/(2*a) ,(-b + sqrt(denta))/(2*a) );

    }else if (denta == 0){

        printf("Phuong trinh co nghiem kep la: %.1lf", (-b/(2*a)));

    }else if (denta < 0){
        printf("Phuong trinh vo nghiem");

    }else{
        printf("Phuong trinh vo so nghiem");
    }*/


    return 0;
}
