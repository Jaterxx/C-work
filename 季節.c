#include <stdio.h>

int main()
{
    int season;
    printf("�п�J��� =>");
    scanf("%d", &season);
    switch (season) {
    case 3:
    case 4:
    case 5:
         printf("�K��!\n");
         break;
    case 6:
    case 7:
    case 8:
        printf("�L��!\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("���!\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("�V��!\n");
        break;
    default:
        printf("�S���o�өu�`!\n");
        break;
    }
    
    
    
	return 0;
}