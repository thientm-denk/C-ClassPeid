#include <stdio.h>
#include <stdlib.h>
//10-defBuffer
//cơ chế hook -> hack fb
//xóa bộ nhớ đệm
int main()
{
    int age;
    char name;
    printf("\nNhap tuoi: ");
    scanf("%d", &age);
    // nhập tuổi xong bị thừa nút enter, nó nhét vào ch luôn
    fflush(stdin); // xóa buffer (bộ nhớ đệm) để xóa /n(nút enter)
    printf("\nNhap ten: ");
    scanf("%c", &name);

    printf("\nage = %d, name = %c ", age, name);

    return 0;
}
