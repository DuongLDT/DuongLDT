#include<stdio.h>
double fibo (int n){
	int i, t1=1, t2=1, f=1;
	for (i=3;i<=n;i++){
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return f;
}
int main(){
	int n;
	printf("Accept n: ");
	scanf("%d", &n);
	while (n<1);
	printf("%lf",fibo(n));
	return 0;
}
