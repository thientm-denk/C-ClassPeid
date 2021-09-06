#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//viết chương trình quản lý sv
//crud: create read update delete
//xây dựng menu
//ép người dùng nhập vào lựa chọn
//nhập sai hay nhập lớn hơn thì ép nhập lại
// menu gồm
/*//Student Management
    1. add new student
    2. show student list
    3. find student base id
    4. update student by id name
    5. remove student from list
    6. sort and show student list order by point ascending
    7. quit
*/
const int MAX  = 100;
void showMenu(void);
void addNewStudent(char id[][MAX], char name[][MAX],
                   int yob[], double point[], int*size);
void showStudentList(char id[][MAX], char name[][MAX],
                      int yob[], double point[], int size);
int findIndexOfStudent(char id[][MAX], int size, char key[]); //id ra pos --> pos ra in4
void showInforbyPos(char id[][MAX], char name[][MAX],
                      int yob[], double point[], int size,int pos);
void updateStudentbyPos(char id[][MAX], char name[][MAX],
                         int yob[], double point[], int size,int pos);
void removeStudentbyPos(char id[][MAX], char name[][MAX],
                         int yob[], double point[], int *size,int pos);
void sortStudentbyPoint(char id[][MAX], char name[][MAX],
                      int yob[], double point[], int size);
int main()
{
    char id[MAX][9];
    char name[MAX][40];
    int yob[MAX];
    double point[MAX];
    int choose;
    char buffer;
    int pos = 0;
    int size = 0;

    do{
        showMenu();
        //ép người dùng nhập số nguyên
        do{
            printf("\nPlz, input your choose: ");
            scanf("%d", &choose);
            scanf("%c", &buffer);
            fflush(stdin);
            if (buffer != 10){
                printf("\nDo know input integer number!!");
            }
        }while(buffer != 10);
        //ép người dùng nhập số nguyên
        switch(choose){//chọn trường hợp //có break để ko bị trôi
            case 1:{
                //do something
                addNewStudent(id, name, yob, point, &size);
                break;
            }
            case 2:{
                //do something
                showStudentList(id, name, yob, point, size);
                break;
            }
            case 3:{
                //do something
                showInforbyPos(id, name, yob, point,size, pos);
                break;
            }
            case 4:{
                //do something
                updateStudentbyPos(id, name, yob, point, size, pos);
                break;
            }
            case 5:{
                //do something
                removeStudentbyPos(id, name, yob, point, &size, pos);

                break;
            }
            case 6:{
                //do something
                sortStudentbyPoint(id, name, yob, point, size);
                break;
            }
            case 7:{
                //do something
                printf("\nSee you again");
                break;
            }
            default:{
                printf("\nPlz, input from 1 to 7!!!!");
            }
        }
    }while(choose != 7);

    return 0;
}
void showMenu(void){
    printf("\n----------------------Student Management------------------------");
    printf("\n1.Add new student");
    printf("\n2.Show student list");
    printf("\n3.Find student base id");
    printf("\n4.Update student by id name");
    printf("\n5.Remove student from list");
    printf("\n6.Sort and show student list order by point ascending");
    printf("\n7.Quit");
}
void addNewStudent(char id[][MAX], char name[][MAX],
                   int yob[], double point[], int*size){
    printf("\nInput information new student: ");
    //nhập id
    while(1==1){
        printf("\nID: ");
        gets(id[*size]);
        fflush(stdin);
        int isFind = 0;
        for (int i = 0; i <= *size - 1; i++){
            if (strcmp(id[*size], id[i]) == 0){
                isFind = 1;
            }
        }
        if (isFind == 1){
            printf("\n ID  is duplicated");
        }else{
            break;
        }
    }
    //nhập tên, yob, point
    printf("\nName: ");
    gets(name[*size]);
    fflush(stdin);

    printf("\nYob: ");
    scanf("%d", &yob[*size]);
    fflush(stdin);

    printf("\nPoint: ");
    scanf("%lf", &point[*size]);
    fflush(stdin);

    (*size)++;
}
void showStudentList(char id[][MAX], char name[][MAX],
                      int yob[], double point[], int size){
    if (size == 0){
        printf("\nNothing to print");
        return;
    }
    for (int i = 0; i <= size - 1; i++){
        printf("\n%-8s|%-20s|%4d|%5.2lf", id[i], name[i], yob[i], point[i]);
        //- trục tọa độ dịch trái phải
    }
}
int  findIndexOfStudent(char id[][MAX], int size, char key[]){
    for (int i = 0; i <= size - 1; i++){
        if (strcmp(id[i], key) == 0){
            return i;
        }
    }
    return -1;
}
void showInforbyPos(char id[][MAX], char name[][MAX],
                      int yob[], double point[], int size ,int pos){

    char key[MAX];
    printf("\nPlz, input id which you to find: ");
    gets(key);
    pos = findIndexOfStudent(id, size, key);
    if (pos == -1){
        printf("\nYour student is not existed");
    }else{
        printf("\n%-8s|%-20s|%4d|%5.2lf", id[pos], name[pos], yob[pos], point[pos]);
    }
}
void updateStudentbyPos(char id[][MAX], char name[][MAX],
                         int yob[], double point[], int size,int pos){
    char key[MAX];
    printf("\nPlz, input id which you to update: ");
    gets(key);
    pos = findIndexOfStudent(id, size, key);
    if (pos == -1){
        printf("\nYour student is not existed");
    }else{
        printf("\nStudent before updating");
        printf("\n%-8s|%-20s|%4d|%5.2lf", id[pos], name[pos], yob[pos], point[pos]);
        printf("\nNew point: ");
        scanf("%lf", &point[pos]);
        printf("\nStuden after updating");
        printf("\n%-8s|%-20s|%4d|%5.2lf", id[pos], name[pos], yob[pos], point[pos]);
    }
}
void removeStudentbyPos(char id[][MAX], char name[][MAX],
                         int yob[], double point[], int *size,int pos){
    char key[MAX];
    printf("\nPlz, input id which you to remove: ");
    gets(key);
    pos = findIndexOfStudent(id, *size, key);
    if (pos == -1){
        printf("\nYour student is not existed");
    }else{
        printf("\nStudent for removing");
        printf("\n%-8s|%-20s|%4d|%5.2lf", id[pos], name[pos], yob[pos], point[pos]);
        for (int i = pos; i <= *size - 1; i--){
            strcpy(id[i], id[i+1]);
            strcpy(name[i], name[i+1]);
            yob[i] = yob[i+1];
            point[i] = point[i+1];
        }
        (*size)--;
        printf("\nRemoving is sucessfull!");
        showStudentList(id, name, yob, point, *size);
    }
}
void sortStudentbyPoint(char id[][MAX], char name[][MAX],
                      int yob[], double point[], int size){
    for (int i = 0; i <= size -1; i++){
        for (int j = i; j <= size -2; j++){
            if (point[i] < point [j]){
                char tmpstr[MAX];
                strcpy(tmpstr, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], tmpstr);

                strcpy(tmpstr, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tmpstr);

                int tmpInt = yob[i];
                yob[i] = yob[j];
                yob[j] = tmpInt;

                int tmpDou = point[i];
                point[i] = point[j];
                point[j] = tmpDou;
            }
        }
    }
}
