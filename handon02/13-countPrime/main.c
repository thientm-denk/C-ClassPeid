#include <stdio.h>
#include <stdlib.h>
//13-countPrime
//nhập vào start và end, in ra số nguyên tố
int main()
{

    int start, end;
    int check = 0;
    printf("\nPlz, input Start: ");
    scanf("%d", &start);
    printf("\nPlz, input End: ");
    scanf("%d", &end);

    if (start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

   for(int i = start; i <= end; i++){
        if (i>=2){
            int check = 1;
            for (int j = 2; j <= i-1;j++){
                if (i%j==0){
                    check = 0;
                }
            }
            if (check==1){
                printf("%d ", i);
            }
        }
    }

 return 0;
    }


