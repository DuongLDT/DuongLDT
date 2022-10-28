#include <stdio.h>
int main(){
	int n, i = 1;
	float S = 0;
	printf ("nhap n: ");
	scanf ("%d", &n);
	do{
	S = S + 1.0/i;
	i++;
	}
	while (i<=n);
	printf ("Tong S = %f", S);
	return 0;
	
}
