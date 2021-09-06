#include <stdio.h>
#include <stdlib.h>
const int max = 100;
void inputMatrix(int matrix[][max], int *sizex, int *sizey);
void outputMatrix(int matrix[][max], int sizex, int sizey);
void swapArray(int matrix[][max], int *sizex, int *sizey);
int checkSokudo(int matrix[][max], int sizex, int sizey);
int main()
{
    char matrix[max][max];
    int sizex = 0;
    int sizey = 0;
    inputMatrix(matrix, &sizex, &sizey);
    outputMatrix(matrix, sizex, sizey);
    //printf("\nSau khi swap\n:");
    //swapArray(matrix, &sizex, &sizey);
    //outputMatrix(matrix, sizex, sizey);
    int pos =checkSokudo(matrix, sizex, sizey);
    if (pos ==0){
        printf("\nKo phai la ma phuong");
    }
    if (pos ==1){
        printf("\nLa ma phuong");
    }
    return 0;
}
void inputMatrix(int matrix[][max], int *sizex, int *sizey){
    printf("\nVui long nhap sizey: ");
    scanf("%d", sizey);
    printf("\nVui long nhap sizex: ");
    scanf("%d", sizex);

    for (int y = 0; y <= *sizey - 1; y++){
        for (int x = 0; x<= *sizex -1; x++){
            printf("\nMatrix[%d][%d] = ", y, x);
            scanf("%d", &matrix[y][x]);
        }
    }
}

void outputMatrix(int matrix[][max], int sizex, int sizey){
    for (int y = 0; y<= sizey -1; y++){
        for (int x= 0; x<= sizex -1; x++){
            printf("%5d", matrix[y][x]);

        }
        printf("\n");
    }
}

void swapArray(int matrix[][max], int *sizex, int *sizey){
    int sizeTMP = *sizex;
    if (*sizex < *sizey){
        sizeTMP = *sizey;
    }
    int matrixTMP[sizeTMP][sizeTMP];
    for (int y = 0; y < sizeTMP; y++){
        for (int x = 0; x < sizeTMP; x++){
            matrixTMP[y][x]=matrix[x][y];
        }
    }
    for (int y = 0; y < sizeTMP; y++){
        for (int x = 0; x < sizeTMP; x++){
            matrix[y][x]= matrixTMP[y][x];
        }
    }
    sizeTMP = *sizex;
    *sizex=*sizey;
    *sizey = sizeTMP;
}
int checkSokudo(int matrix[][max], int sizex, int sizey){
    int sum = 0;
    int check = 0;
    int check1 =0;
    int check2 = 0;
    if (sizex != sizey){
        return 0;
    }
    for (int y = 0; y <= sizey - 1; y++){
        sum += matrix[y][0];
    }
    for (int y = 0; y <= sizey - 1; y++){
        for (int x = 0; x <= sizex - 1; x++){
            check += matrix[y][x];
        }
        if (check != sum ){
            return 0;
        }
        check = 0;

    }
    for (int y = 0; y <= sizey - 1; y++){
        for (int x = 0; x <= sizex - 1; x++){
            if (x == y){
                check1 += matrix[y][x];
            }
        }
    }
    if (check1 != sum){
            return 0;
        }
    for (int y = 0; y <= sizey - 1; y++){
        for (int x = 0; x <= sizex - 1; x++){
            if (x + y == sizex - 1){
                check2 += matrix[y][x];
            }
        }
    }
        if (check2 != sum){
            return 0;
        }


    return 1;

}






