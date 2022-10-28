#include<stdio.h>
int x,S;
int main(){
	S = 0;
	do{
		printf("x = ");
		scanf ("%d", &x);
		S = S + x;
		printf ("S = %d\n", S);
	}
	while (x!=0);
	return 0;
}
