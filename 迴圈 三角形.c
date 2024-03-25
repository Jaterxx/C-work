#include <stdio.h>

int main()
{
    int num;
    printf("請輸入整數 =>");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%4d" , i*j);
        }
        
        
        printf("%\n" , i);
    }
    
    
    
	return 0;
}