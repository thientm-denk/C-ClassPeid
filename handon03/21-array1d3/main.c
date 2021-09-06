#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//21-array1d3
//mảng bài tập kỳ 3



//viết hàm copy mảng này sang mảng khác
//  copyArray

//viết hàm đảo ngược mảng bằng 2 dạng
//  reverseArray

//tỉnh tổng các số lẽ trong mảng theo chiều đảo ngược
//      bài thi hà nội
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void copyArray(int array1[], int* size1,int array2[],int size2);
void reverseArray(int array1[],int size1,int array2[],int *size2);
void reverseArrayV2(int array[],int size);
int sumElementArray(int array[], int size);
int main()
{
    int array1[MAX];
    int size1 = 0;
    int array2[MAX];
    int size2 = 0;

    printf("\nNhap mang 1:");
    inputArray(array1,&size1);
    printf("\nNhap mang 2:");
    inputArray(array2,&size2);

    //output
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);

    copyArray(array1,&size1,array2,size2);
    printf("\nMang sau khi copy la: ");
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);

    reverseArray(array1,size1,array2,&size2);
    printf("\nMang sau khi reverse la: ");
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);

    printf("\n Tong cac phan tu o vi tri le: %d", sumElementArray(array1, size1));
    return 0;
}

void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0; i<= *size - 1; i++){
        printf("\nArray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i<= size - 1; i++){
        printf("%5d", array[i]);
    }
}
void copyArray(int array1[], int* size1,int array2[],int size2){
    (*size1) = 0;
    for(int i = 0; i <= size2 - 1; i++){
        array1[*size1] = array2[i];
        (*size1)++;
    }
}
void reverseArray(int array1[],int size1,int array2[],int *size2){
    (*size2) = 0;
    for(int i = size1 - 1; i>= 0; i--){
        array2[*size2] = array1[i];
        (*size2)++;
    }
}

void reverseArrayV2(int array[],int size){
    int arrayTMP[MAX];
    int sizeTMP = 0;

    for(int i = size - 1; i>= 0 ; i--){
        arrayTMP[sizeTMP] = array[i];
        sizeTMP++;
    }
    copyArray(array,&size,arrayTMP,sizeTMP);
}

int sumElementArray(int array[], int size){
    int sum = 0;
    reverseArrayV2(array, size);
    for (int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}
