#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    printf("\nPlz, input n: ");
    scanf("%d", &n);
    printf("\nPlz, input x: ");
    scanf("%d", &x);
    int result = 0;
    for(int i = 1; i <= n; i++){
        result += pow(x, i);
    }
    printf("Result = %d", result);
    return 0;
}
