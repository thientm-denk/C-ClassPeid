#include <stdio.h>
#include <stdlib.h>
const int MAX=100;
//22-array1d3

//nhập vào 2 mảng:
//v1: nối 2 mảng thành 1 mảng thứ 3
//      array1: 1 2 3 4       array2: 7 8 9
//      array3: 1 2 3 4 7 8 9

//v2: nối , biến mảng 1 thành 1 + 2
//      array1: 1 2 3 4       array2: 7 8 9
//      array1: 1 2 3 4 7 8 9

//tách mảng:
//nhập vào 1 mảng:
//v1:       array1:     1 2 3 4 5
//          index/pos:  0 1 2 3 4
//          pos 3
//      array2:  1 2 3           array3:4 5

//v2:   array1: 1 2 3 4 5  pos: 2
//      array1: 1 2    array2: 3 4 5
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void concat2Array(int array1[], int size1, int array2[],
                  int size2, int array3[], int *size3);
void concat2ArrayV2(int array1[], int *size1, int array2[],int size2);

void divide2ArrayV1(int array1[], int size1, int array2[],
                  int *size2, int array3[], int *size3);
void divide2ArrayV2(int array1[], int *size1, int array2[],
                  int *size2);
int main()
{
    int array1[MAX];
    int size1 = 0;
    int array2[MAX];
    int size2 = 0;
    int array3[MAX];
    int size3 = 0;
    //input
    printf("\nNhap mang 1:");
    inputArray(array1,&size1);
    printf("\nNhap mang 2:");
    inputArray(array2,&size2);
    //output
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);
    //process
    /*//concatVer1
    concat2Array(array1, size1, array2, size2, array3, &size3);
    printf("\n\nCac mang sau khi concat:");
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);
    printf("\nMang3:");
    outputArray(array3, size3);
    */
    concat2ArrayV2(array1, &size1, array2, size2);
    printf("\n\nCac mang sau khi concat:");
    printf("\nMang1:");
    outputArray(array1,size1);
    /*//divide2ArrayV1
    divide2ArrayV1(array1, size1, array2, &size2, array3, &size3);
    printf("\n\nCac mang sau khi tach:");
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);
    printf("\nMang3:");
    outputArray(array3,size3);
    */

    divide2ArrayV2(array1, &size1, array2, &size2);
    printf("\n\nCac mang sau khi tach:");
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);

    return 0;
}
//ở trên là main

//ở dưới là hàm
//inputArray(array, &size);
//int* size= &size(main);
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

void concat2Array(int array1[], int size1, int array2[],
                  int size2, int array3[], int *size3){
    (*size3) = 0;
    //*size3(f) lấy giá trị của size3(main)
    //duyệt mảng 1
    for(int i = 0; i<= size1 -1; i++){
        array3[*size3]= array1[i];
        (*size3)++;
    }
    for(int i = 0; i<= size2 -1; i++){
        array3[*size3]= array2[i];
        (*size3)++;
    }
}

//hàm nối mảng 2 vào mảng 1
void concat2ArrayV2(int array1[], int *size1, int array2[],int size2){
    //duyệt mảng 2 và nhét 2 vào 1
    for(int i = 0; i<= size2 - 1; i++){
        array1[*size1]= array2[i];
        (*size1)++;
    }
}

void divide2ArrayV1(int array1[], int size1, int array2[],
                  int *size2, int array3[], int *size3){

    int pos=0;
    //lưu chỗ cần cắt
    do{
        printf("\nPos: ");
        scanf("%d", &pos);
        if (pos<0 || pos >= size1){
            printf("\nPos phai nam trong khoang tu 0 den %d", size1);
        }
    }while(pos<0 || pos >= size1);
    //duyệt từ 0 đến pos -1 của mảng cần cắt
    // và nhét vào array2
    (*size2) = 0;
    for(int i = 0; i<= pos - 1; i++){
        array2[*size2]= array1[i];
        (*size2)++;
    }
    (*size3) = 0;
    for(int i = pos; i<= size1 -1 ; i++){
        array3[*size3]= array1[i];
        (*size3)++;
    }
}
void divide2ArrayV2(int array1[], int *size1, int array2[],
                  int *size2){
    int pos = 0;
    do{
        printf("\nPos: ");
        scanf("%d", &pos);
        if (pos<0 || pos >= size1){
            printf("\nPos phai nam trong khoang tu 0 den %d", size1);
        }
    }while(pos<0 || pos >= size1);

    (*size2)=0;
    for(int i = pos; i<= *size1-1; i++){
        array2[*size2]= array1[i];
        (*size2)++;
    }
    *size1 = pos;
}


