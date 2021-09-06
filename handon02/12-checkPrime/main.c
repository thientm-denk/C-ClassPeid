#include <stdio.h>
#include <stdlib.h>
//12-checkPrime
// nhập n
// kiểm tra xem n có phải là số nguyên tố ko
// số nguyên tố >=2
int main()
{
    int n, check;
    char buffer;
    check = 0;
    do{
        printf("\nPlz, input number: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("Not number");
        }
    }while(buffer != 10);
    if (n==2){
        check = 0;
    }else{
        if (n<2 || n%2 == 0){
            check = 1;
        }else{
            for (int i=2; i<= n-1; i++){
                if(n%i == 0){
                    check=1;
                }
            }
            }
        }
     if (check == 0){
        printf("%d is prime", n);
    }else{
        printf("%d is not prime", n);

}
 return 0;
}



