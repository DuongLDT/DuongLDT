#include<stdio.h>
double factorial(int n){
	double p=1;
	int i;
	for (i=2; i<=n; i++)
	p *= i;
	return p;
}
int main(){
	int n;
	printf("Accept n: ");
	scanf("%d", &n);
	while (n<0);
	printf("Gia tri cua %d!= %lf",n,factorial(n));
	return 0;
}
