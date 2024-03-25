#include <stdio.h>

int main()
{
    int sum = 0;
    int num;
    
    printf("請輸入整數 =>");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        if (i % 5 == 0){
            sum = sum +i;
        }
    }
    printf("值 = %d\n" , sum); 
    
    
	return 0;
}