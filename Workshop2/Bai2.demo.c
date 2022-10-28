# include<stdio.h>
# include<math.h>
int fun(int n){
	int m=sqrt(n),i;
	if (n<2) return 0;
	if(n==2||n==3) return 1;
	for( i=2;i<=m;i++){
		if(n%i==0) return 0;
		else return 1;
	}
}
int sum(int n){
	int i,sum=0;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	return sum;	
}
int foo(int c){
	int n=0;
	while(sum(n)<=c){
		n++;
	}
	return n-1;
}
int main(){
	printf("fun(1) = %d\n",fun(1));
	printf("fun(2) = %d\n",fun(2));
	printf("fun(5) = %d\n",fun(5));
	printf("foo(12)= %d\n",foo(12));
	printf("foo(9)= %d\n",foo(9));
	printf("foo(15)= %d\n",foo(15));
}

