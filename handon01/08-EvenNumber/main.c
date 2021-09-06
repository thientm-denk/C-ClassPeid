#include <stdio.h>
#include <stdlib.h>
//evenNumberInRange
//nhập vào điểm khởi đầu và điểm kết thúc, in ra các số chẵn có trong khoảng
//1    10
//2 4 6 8 10
// đếm có bao nhiêu số chẵn trong khoảng
// tổng các số chẵn trong khoảng là bao nhiêu
int main()
{
    int start, end;
    int count = 0;
    int sum = 0;
    printf("\nPlz, Input Start Number: ");
    scanf("%d", &start);
    printf("\nPlz, Input End Number: ");
    scanf("%d", &end);
    // đổi chỗ vị trí start và end: khi nhập start = 10, end = 1
    if  (start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for (int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%5d", i);
            //%5d: mỗi số cách nhau 5 ô
            count++;
            sum+=i;
        }
    }
    printf("\nSo so chan la: %d", count);
    printf("\nTong cac so chan la: %d", sum);


    return 0;
}
