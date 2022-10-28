#include<stdio.h>
int x, y, t;
// t: temporary variable
int main (){
	do{
		printf ("x = ");
		scanf ("%d", &x);
		printf ("y = ");
		scanf ("%d", &y);
		t=x;
		x=y;
		y=t;
		printf (" %d %d\n",x,y);
	}
	while (x!=0 && y!=0);
	return 0;
}
