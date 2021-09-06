#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int fac=1;
    printf("Plz, input n: ");
    scanf("%d", &n);
    for(int i= 1; i<= n; i++){
        fac *= i;
    }
    printf("%d! = %d",n ,fac);
    return 0;
}
