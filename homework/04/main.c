#include <stdio.h>
#include <stdlib.h>
// nhập vào số giây -> in ra gio phút giây
// ví dụ 3722
// in ra 01:02:02 phải có 2 số prinf("%02d",i) -> in số đầu số 0 và có 2 ký tự


//bài khác
//nhập 3 diện tích của hình hộp, tính tổng các cạnh.



int main()
{
    int sec, min, hour;
    printf("\nPlz, Input second: ");
    scanf("%d", &sec);
    while (sec >= 3600){
    	hour = sec/3600;
    	sec = sec % 3600;
	}
	while (sec >= 60){
		min = sec/60;
		sec = sec % 60;
	}
    printf("%02d:%02d:%02d", hour, min, sec);

    return 0;
}
