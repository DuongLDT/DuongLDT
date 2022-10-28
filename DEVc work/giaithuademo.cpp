#include<stdio.h>
/*long int giaithua(int n){
	if(n>1){
		return n*giaithua(n-1);
	}
	else
	 return 1;
}*/


 long int giaithua(int n){
 
 int i=2; long int gt=1;
 if ((n=0)||(n=1))
    gt=1;
 else
 if(n>1){
  while (i<=n){
   gt=gt*i;
   i++;}
 return gt;
}
    int main(){
	int n;
	long int gt;
	printf ("Nhap n: "); scanf ("%d", &n);
	gt = giaithua(n);
	printf ("%d! = %ld",n,gt);
	getchar();
	return 0;
}
