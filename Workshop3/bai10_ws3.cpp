#include<stdio.h>
void printMinMaxDigits(int n){
	int digit;
	int min, max;
	digit = n%10;
	n=n/10;
	min = max = digit;
	while (n>0){
		digit = n%10;
		n=n/10;
	    if (min > digit) min=digit;	
	    if (max < digit) max=digit;
	}
	printf("Max = %d\n", max);
	printf ("Min = %d", min);
}
int main(){
	int n;
	do {
		printf ("Accept n: "); scanf("%d", &n);
		printMinMaxDigits(n);
	}
	while(n<0);
}
