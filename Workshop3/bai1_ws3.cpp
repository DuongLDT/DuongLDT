#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
	int m=sqrt(n);
    if(n<2) return 0;
    if (n==2 || n==3) return 1;
    for (i=2;i<=m;i++){
    	if (n%i==0){
    		return 0;
		}
		else
		    return 1;
		 
	}
}
int main(){
	int n,i;
	do{
		printf("Nhap n>=2: ");
		scanf("%d", &n);
	}
	while (n<2);
	for (i=2;i<=n;i++){
		if(prime(i)==1){
			printf("%d  ", i);
		}
	}
	return 0;
}


