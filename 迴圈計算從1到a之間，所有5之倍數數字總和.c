#include <stdio.h>

int main()
{
    int sum = 0;
    int num;
    
    printf("�п�J��� =>");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        if (i % 5 == 0){
            sum = sum +i;
        }
    }
    printf("�� = %d\n" , sum); 
    
    
	return 0;
}