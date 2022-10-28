#include<stdio.h>
double makeDouble (int ipart, int fraction){
	double d_f=fraction;
	do{
		d_f = d_f/10;
	}
	while (d_f>=1);
	if (ipart < 0){
		return (ipart - d_f);
	}else if (ipart >= 0) {
		return (ipart + d_f);
	}
	
}
int main(){
	int ipart, fraction;
	printf("Accept ipart: "); scanf("%d", &ipart);
	printf("Accept fraction: "); scanf("%d", &fraction);
	while (fraction<0);
	printf("Value= %lf",makeDouble(ipart,fraction));
	return 0;
}
