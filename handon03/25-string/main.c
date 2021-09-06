#include <stdio.h>
#include <stdlib.h>
//25 - string
//Hello -> 5 ký tự
//Hello\0 -> char quote[6] not quote[5] //\0 null để kết thúc từ
//bt1: copyString
//bt2: concat
//bt3: reverse
//bt4: xin chao -> chao xin
//bt5: upperString, stringLower Xin Chao; xIn chaO -> Xin Chao
const int MAX = 100;
int stringlength (char str[]);
void copyString(char str1[], char str2[]);
void concatString(char str1[], char str2[]);
void stringReverse(char str1[]);
void stringReverseWord(char str1[]);
void reverseWord(char str[]);
void upperString(char str1[]);
int main()
{

    char str1[MAX];
    char str2[MAX];

    printf("\nNhap chuoi 1: ");
    //scanf("%s", str); //vì string là con trỏ
    gets(str1); //lấy dấu cách
    //printf("\nNhap chuoi 2: ");
    //gets(str2);
    printf("\nChuoi 1 vua nhap la: %s", str1);
    //printf("\nChuoi 2 vua nhap la: %s", str2);
    //printf("\nDo dai cua chuoi 1 la: %d", stringlength(str1));
    //printf("\nDo dai cua chuoi 2 la: %d", stringlength(str2));
    /*
    printf("\nSau copy: ");
    copyString(str1, str2);
    printf("\nChuoi 1: %s", str1);
    printf("\nChuoi 2: %s", str2);


    printf("\nSau noi: ");
    concatString(str1, str2);
    printf("\nChuoi 1: %s", str1);

    printf("\nSau dao nguoc: ");
    stringReverse(str1);
    printf("\nChuoi 1: %s", str1);
    */


    reverseWord(str1);
    printf("\nChuoi sau khi dao nguoc tu la: %s", str1);
    //upperString(str1);
    //printf("\n%s", str1);

    return 0;
}
int stringlength (char str[]){
    int i = 0;
    while (str[i] != 0){
        i++;
    }
    return i ; // đi từ 0  đến null

}
void copyString(char str1[], char str2[]){
    int length1 = 0;
    for (int i = 0; i < stringlength(str2); i++){
        str1[length1] = str2[i];
        (length1)++;
    }
    str1[length1] = 0;
}

void concatString(char str1[], char str2[]){
    int length1 = stringlength(str1);
    int length2 = stringlength(str2);
    for (int i = 0; i < length2; i++){
        str1[length1] = str2[i];
        (length1)++;
    }
    str1[length1] = 0;
}

void stringReverse(char str1[]){
    char tmp[MAX];
    int lengthTMP = 0;
    for (int i = stringlength(str1) -1 ; i >= 0; i--){
        tmp[lengthTMP] = str1[i];
        lengthTMP++;
    }
    tmp[lengthTMP] = 0;
    copyString(str1, tmp);
}
void stringReverseWord(char str1[]){
    char tmp[MAX];
    int lentmp = -1;
    int pos1 = stringlength(str1);
    int pos2 = 0;
    //str1[stringlength(str1)]=32;
    for (int i = pos1; i >= 0; i--){
        if (str1[i] == 32){
            pos2 = i;
            for (int j = pos2; j <= pos1 - 1; j++){
                tmp[lentmp] = str1[j];
                lentmp++;
            }
            pos1 = i;
        }
    }

    if (str1[0] != 32){
        tmp[lentmp]=32;
        lentmp++;
        for (int j = 0; j <= pos1 -1; j++){
            tmp[lentmp] = str1[j];
            lentmp++;
        }
    }
    tmp[lentmp] = 0;
    copyString(str1, tmp);


}
void upperString(char str1[]){
    int pos =0;
    while (str1[pos] != 32){
        pos++;
    }

    if (str1[0] != 32){
        if (str1[0] >= 97 && str1[0] <= 122){
            str1[0]-=32;
        }
        for (int i=1; i< pos; i++){
            if (str1[i] >= 65 && str1[i] <= 90){
            str1[i]+=32;
            }
        }
    }
    for (int i = pos; i <= stringlength(str1); i++){
        if (str1[i]==32 || str1[i]==0){
            if (str1[pos+1] >= 97 && str1[pos+1] <= 122){
                str1[pos+1] -= 32;
            }
            for (int j = pos+2; j < i; j++){
                if (str1[j] >= 65 && str1[j] <= 90){
                    str1[j] += 32;
                }
            }
            pos = i;
        }
    }
}

void reverseWord(char str[]){
    int pos = 0;
    char strB[MAX];
    strB[0]=0; //ép strB bằng rỗng
    stringReverse(str);//xin chao ban //nab oahc nix
    while(str[pos] != 0){//đây là vòng lặp chỉ dừng lại khi str[pos] = \0
        char strTMP[MAX];
        int lenTMP = 0;
        for (int i = pos; i <= stringlength(str) - 1; i++){
            if (str[i] == 32){
                pos++;
                break;
            }//gặp break thoát khỏi vòng
            //nhét vào strTMP
            strTMP[lenTMP] = str[i];
            lenTMP++;
            pos++;
        }
        strTMP[lenTMP] = 0;
        stringReverse(strTMP);
        concatString(strB, strTMP);
        if (str[pos] != 0){
        concatString(strB, " ");
        }
    }
    copyString(str, strB);
}
