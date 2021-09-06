#include <stdio.h>
#include <stdlib.h>
//23-Array1D4
//mảng buổi 4
//mảng nâng cao
//nhập vào 1 mảng
//nhập vào 1 mảng nguyên, 1 số nguyên
//tìm xem số nguyên này có tồn tải trong mảng ko, nếu có thì tồn tại ở vị trí nào
                //findNumberInArray
//nhap vào 1 mảng, nhập vào vị trí trong mảng
//nhạp vào value muốn nhét
//

const int MAX=100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findNumberInArray(int array[], int size, int number);
void insertElementInArray(int array[], int *size, int number, int pos);
void deleteElementInArray(int array[], int *size, int pos);
void removeDuplicate(int array[], int *size);
int main()
{
    int array[100];
    int size;
    int number = 0;
    int pos = 0;
    inputArray(array, &size);
    printf("\nMang vua nhap la: ");
    outputArray(array, size);
    printf("\nNhap 1 so nguyen: ");
    scanf("%d", &number);

    findNumberInArray(array, size, number);
    if (findNumberInArray(array, size, number) != -1){
        printf("\nVi tri do la: %d", findNumberInArray(array, size, number));
    }else{
        printf("\nKo co vi tri ");
    }

    do{
        printf("\n\nPos = ");
        scanf("%d", &pos);
    }while(pos < 0 || pos >= size);

    printf("\nMang vua moi them la: ");
    insertElementInArray(array, &size, number, pos);
    outputArray(array, size);
    printf("\nMang vua moi xoa la: ");
    deleteElementInArray(array, &size, pos);
    outputArray(array, size);
    removeDuplicate(array,&size);
    printf("\nMang vua moi them la: ");
    outputArray(array, size);
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

int findNumberInArray(int array[], int size, int number){
    for (int i = 0; i < size; i++){
        if (number == array[i]){
            return i;
        }
    }
    return -1;
}




void insertElementInArray(int array[], int *size, int number, int pos){
    (*size)++;
    for (int i= (*size-1); i >= pos +1; i--){
        array[i] = array[i-1];
    }
    array[pos]=number;
}

void deleteElementInArray(int array[], int *size, int pos){
    for (int i= pos; i <= *size - 2 ; i++){
        array[i] = array[i+1];
    }
    (*size)--;

}

void copyArray(int array1[], int* size1,int array2[],int size2){
    (*size1) = 0;
    for(int i = 0; i <= size2 - 1; i++){
        array1[*size1] = array2[i];
        (*size1)++;
    }
}
void removeDuplicate(int array[], int *size){
    int tmp[100];
    int sizetmp=0;
    int pos  = 0;
    for (int i = 0; i < *size; i++){
        pos = findNumberInArray(tmp, sizetmp, array[i]);
        if (pos == -1){
            tmp[sizetmp] = array[i];
            sizetmp++;
        }
    }
    copyArray(array,&size,tmp,sizetmp);
}
