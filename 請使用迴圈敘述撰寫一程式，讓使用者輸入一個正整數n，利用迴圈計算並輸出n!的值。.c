#include <stdio.h>

int main()
{
    long  long int fac = 1;
    int n;
    
    printf("�п�J��� =>");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        fac = fac * i;
    }
    
    printf("%lld\n",fac);
    
    
	return 0;
}