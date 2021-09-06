#include <stdio.h>
#include <stdlib.h>
//nhập vào 1 mảng các số nguyên
//sắp xếp mảng theo  thứ tự tăng dần
//input a array with integer number
const int MAX=100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void softArray(int array[], int size);
int main()
{
    int array[MAX];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang vua nhap la: ");
    outputArray(array, size);

    softArray(array, size);
    printf("\nMang vua sap xep la: ");
    outputArray(array, size);


    return 0;
}


void inputArray(int array[], int *size){
    printf("\nPlz, input size: ");
    scanf("%d", size);
    for (int i = 0; i < *size; i++){
        printf("\nArray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%5d", array[i]);
    }
}

void softArray(int array[], int size){
    int tmp;
    for(int i = 0; i <= size - 2; i++){
        for (int j = i+1; j <= size - 1 ; j++){
            if (array[i] > array[j]){
                //swap
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}



