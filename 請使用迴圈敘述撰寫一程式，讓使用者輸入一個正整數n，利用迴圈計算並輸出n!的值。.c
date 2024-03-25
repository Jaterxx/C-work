#include <stdio.h>

int main()
{
    long  long int fac = 1;
    int n;
    
    printf("請輸入整數 =>");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        fac = fac * i;
    }
    
    printf("%lld\n",fac);
    
    
	return 0;
}