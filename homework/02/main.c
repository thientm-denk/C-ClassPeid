#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int result = 0;
    printf("Plz, input n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++ ){
        result += pow(i,2);
    }
    printf("Result: %d", result);
    return 0;
}
