#include <stdio.h>
#include <stdlib.h>
int checkPrime(int number);
int main()
{
    int start, end;
    printf("\nInput Start: ");
    scanf("%d", &start);

    printf("\nInput End: ");
    scanf("%d", &end);

    if (start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for (int i = start; i <= end; i++){
        if(checkPrime(i)==1){
            printf("%5d", i);
        }
    }
    return 0;
}
int checkPrime(int number){
    if(number >= 2){
        for (int i=2; i<= number - 1; i++){
            if (number % i==0){
                return 0;
            }
        }
        return 1;
    }else {
        return 0;
    }
}
