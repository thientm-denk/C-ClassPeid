#include <stdio.h>
#include <stdlib.h>
//19-mang
int main()
{
    int array[6]={21,10,9,27,43,22};//không nhập 09 -->%0d, 09 hiện thị dưới dạng bát phân
    //khai báo một mảng kiểu int tên là array chứa 6 phần tử
    //int array[6] --> in ra rác
    //int array[6] = () --> in ra 6 số 0
    //int array[6] = (5,1,2,2) --> 2 giá trị còn lại là 0
    //int array[]= (2,1,3,2) --> ko xin tự hiểu là 4
    //

    for (int i=0; i<= 5; i++){
            // i<=(size-1)
        printf("%5d", array[i]);
    }
    // in ra giá trị của biến tên array ở vị trí thứ 0 --> là 21

    printf("\nAdress array[0]: %u", &array[0]);//6422016
    //&array[0] là in địa chỉ trên ram
    //%u là thông báo cho nó in địa chỉ

    printf("\nArray = %d", array);//in ra 6422016
    //in giá trị --> value array= địa chỉ array[0] --> mảng là con trỏ
    //tên mảng lưu giá trị của biến đầu tiên nên mảng là một con trỏ
    //kích thước của mảng này là size* sizeOfData
    //6*4=24 byte
    //if array1 == array2 --> so sánh địa chỉ nên ko so sánh đc






    return 0;
}
