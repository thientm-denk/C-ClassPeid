#include <stdio.h>
#include <stdlib.h>
void toUpperCaseV1(void){
    //khong vao, khong ra
    char key;
    printf("\nNhap chu: ");
    scanf("%c", &key);
    fflush(stdin);
    if (key >= 97 && key <= 122){
        key = key - 32;
    }
    printf("\n%c", key);

}
void toUpperCaseV2(char ch){
    //khong ra, co vao
    if (ch >= 97 && ch <= 122){
        ch = ch - 32;
    }
    printf("\n%c", ch);

}
char toUpperCaseV3(void){
    //có ra, không vào
    char key;
    printf("\nNhap chu: ");
    scanf("%c", &key);
    fflush(stdin);
    if (key >= 97 && key <= 122){
        key = key - 32;
    }
    return key;


}
char toUpperCaseV4(char key){
    if (key >= 97 && key <= 122){
        key = key - 32;
    }
    return key;
}




int main()
{

    //ver1
    /*toUpperCaseV1();
    toUpperCaseV1();
    */

    //Ver2
    /*char key;
    printf("\nNhap chu: ");
    scanf("%c", &key);
    fflush(stdin);
    toUpperCaseV2(key);
    */

    //ver3
    /*printf("\n%c", toUpperCaseV3());
    //gan gia tri char ch= toUperCaseV3();
    */

    //ver 4
    char ch;
    printf("\nNhap chu: ");
    scanf("%c", &ch);
    fflush(stdin);
    printf("\n%c", toUpperCaseV4(ch));


    return 0;
}

