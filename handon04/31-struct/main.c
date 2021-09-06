#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX = 100;

struct UserBank{
    char id[100];
    char pwd[100];
    int money;
};

void initUser(struct UserBank userList[], int*size);
void showMenu(void);
void showInf(struct UserBank userList[], int pos);
void withDraw(struct UserBank userList[], int pos);
void changePwd(struct UserBank userList[], int pos);
int main()
{
    struct UserBank userList[MAX];//tạo mảng chứa các userbank
    int size = 0;
    int choice;
    char buffer;
    initUser(userList, &size);

    int pos = -1;
    //login

    do{
    do{
        char userName[MAX];
        char userPwd[MAX];
        printf("\nUserName = ");
        gets(userName);
        printf("\nUserPwd = ");
        gets(userPwd);
        for (int i = 0; i <= size - 1; i++){
            if (strcmp(userList[i].id, userName) == 0){
                if (strcmp(userList[i].pwd, userPwd) == 0){
                    pos = i;
                }
            }
        }
        if (pos == -1){
            printf("\nID or PWD is wrong!!");
        }

    }while (pos == -1);



        do{
            showMenu();
            do{
                printf("\nInput your choice: ");
                scanf("%d", &choice);
                scanf("%c", &buffer);
                fflush(stdin);

                if(buffer != 10){
                    printf("\nPlz, input integer number");
                }
            }while (buffer != 10);

            switch(choice){
                case 1:{
                    showInf(userList, pos);
                    break;
                }
                case 2:{
                    withDraw(userList, pos);
                    break;
                }
                case 3:{
                    changePwd(userList, pos);
                    pos = -1;
                    choice = 4;
                    break;
                }
                case 4:{
                    printf("\nGoodbye");
                    pos = -1;
                    break;
                }
                default: {
                    printf("\nPlz, input 1 from 4");
                    break;
                }
            }
        }while (choice != 4 );
    }while (choice != 4);

    return 0;
}

void initUser(struct UserBank userList[], int*size){
    struct UserBank diep1;
    strcpy(diep1.id, "diep1");
    strcpy(diep1.pwd, "diep11");
    diep1.money = 100;

    struct UserBank diep2;
    strcpy(diep2.id, "diep2");
    strcpy(diep2.pwd, "diep22");
    diep2.money = 10000;

    userList[0] = diep1;
    userList[1] = diep2;

    *size = 2;
}
void showMenu(void){
    printf("\nMenu Banking");
    printf("\n1.Show information of User");
    printf("\n2.Withdrawal");
    printf("\n3.Change Pwd");
    printf("\n4.Sign Out");
}
void showInf(struct UserBank userList[], int pos){
    printf("\nInformation User: ");
    printf("\nID: %s", userList[pos].id);
    printf("\nMoney: %d", userList[pos].money);

}
void withDraw(struct UserBank userList[], int pos){
    int withDrawMoney = 0;
    do{
        printf("\nPlz, input your money, you wanna withdraw: ");
        scanf("%d", &withDrawMoney);
        if (withDrawMoney % 50 != 0 || withDrawMoney > userList[pos].money){
            printf("\nYour money withdraw is not vaid");
        }
    }while(withDrawMoney % 50 != 0 || withDrawMoney > userList[pos].money);
    userList[pos].money -= withDrawMoney;

}
void changePwd(struct UserBank userList[], int pos){
    char currentPwd[MAX];
    printf("\nPlz, input current password: ");
    gets(currentPwd);
    if(strcmp(currentPwd, userList[pos].pwd) != 0){
        printf("\nYou just input wrong pwd. Plz login to countine");
        return;
    }
    char newPwd1[MAX];
    char newPwd2[MAX];
    do{
        printf("\Plz, new PWD: ");
        gets(newPwd1);
        printf("\Plz, new PWD again: ");
        gets(newPwd2);
        if (strcmp(newPwd1, newPwd2) != 0){
            printf("\nThe second not matches");
        }
    }while(strcmp(newPwd1, newPwd2) != 0);

    strcpy(userList[pos].pwd, newPwd1);
}

