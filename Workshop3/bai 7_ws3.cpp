#include<stdio.h>
int sumDigits (int n){
	int sum=0;
	do {
		int remainder = n%10;
		n=n/10;
		sum += remainder;
	}
	while (n>0);
	return sum;
}
int main(){
	int n;
	do {
		printf("Accept n>=0: ");
	    scanf("%d", &n);
		printf("Sum of digits of n: %d \n",sumDigits(n));
	}
	while (n>=0);
	return 0;
}
