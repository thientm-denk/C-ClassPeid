#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int s1, s2, s3;
    double sum;
    printf("Plz, input s1: ");
    scanf("%d", &s1);
    printf("Plz, input s2: ");
    scanf("%d", &s2);
    printf("Plz, input s3: ");
    scanf("%d", &s3);
    sum = sqrt((s1+s2)/s3) + (s1/sqrt((s1+s2)/s3)) + (s2/sqrt((s1+s2)/s3));
    printf("Sum = %.1lf", sum);
    return 0;
}
