#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//libString
//tìm ký tự trong chuỗi
//tìm chuỗi trong chuỗi//vị trí đầu tiên phát hiện ra chuỗi
//nhập vào 1 chuỗi, >= 7 và phải có độ dài lẻ, in ra 5 phần tử ở giữa của chuỗi đó
const int max = 100;
void validString(char str[]);
void delChar(char str[], int pos);
int stringinstring(char str[], char strF[]);
void stringPrint(char str[]);
void findWord(char str[]);
int main()
{

    char str[max];
    char strF[max];
    printf("\nNhap chuoi str: ");
    gets(str);
    printf("\nNhap chuoi strF: ");
    gets(strF);
    //stringPrint(str);
    //delChar(str,2);
    //validString(str);
    printf("\nChuoi vua nhap la: %s ", str);

    int n = stringinstring(str, strF);
    if (n == -1){
        printf("\nNo");
    }else{
        printf("\nVi tri no xuat hien la: %d", n);
    }

    //findWord(str);

    //strcpy();
    //strcat(); concat
    //strchr(); tìm ký tự trong chuỗi
    //strstr(); tìm chuỗi trong chuỗi
    //strlwr() / strupr()
    //strrsv() đảo ngược
    //strdup() anti duplicate
    //strcmp(); compare so sánh

    return 0;
}
void delChar(char str[], int pos){
    for (int i = pos; i<=strlen(str) - 1; i++){
        str[i] = str[i+1];
    }
}
void validString(char str[]){
    //loại khoảng cách bị thừa
    int pos = 0;
    while(str[pos]!= 0){
        for (int i = pos; i <= strlen(str) -1; i++){
            if (str[0] == 32){
                delChar(str, 0);
                break;
            }
            if (str[i] == 32 && str[i+1] == 32){
                delChar(str, i+1);
                break;
            }
            if (str[i] == 32 && str[i+1] == 0){
                delChar(str, i);
                break;
            }
            pos++;
        }
    }

    //viết hoa viết thường
    strlwr(str);
    str[0] -= 32;
    for (int i = 0; i <= strlen(str) - 1; i++){
        if (str[i] == 32){
            str[i+1]-=32;
        }
    }
}
int stringinstring(char str[], char strF[]){
    int j,pos;
    for (int i = 0; i <= strlen(str) - 1; i++){
        if (str[i] == strF[0]){
            pos = 0;
            for (j = i; j < (i+strlen(strF)); j++){
                if (str[j] == strF[pos]){
                    pos++;
                }else{
                    pos=0;
                    break;
                }
            }
        if (pos == strlen(strF)){
            return j - pos;
        }
        }
    }
    return -1;
}

void stringPrint(char str[]){
    int flag = 0;
    do{
    printf("\nNhap chuoi str: ");
    gets(str);
    if (strlen(str) % 2 != 0){
        flag = 1;
    }
    }while (strlen(str) < 7 || flag  == 0);
}
void findWord(char str[]){
    int pos = strlen(str) /2;
    int j = 0;
    char strF[max];
    for (int i = pos - 2; i <= pos + 2; i++){
        strF[j] = str[i];
        j++;
    }
    printf("\n%s", strF);
}

