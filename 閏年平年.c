#include <stdio.h>

int main()
{
    int year;
    printf("請輸入西元年數 =>");
    scanf("%d", &year);
    
    if ((year%4 == 0)&&(year/100 != 0)||(year%400 == 0)) {
        printf("%d 為閏年", year);
    }
    else {
        printf("%d 為平年", year);
    }
    
    
    getch();
	return 0;
}