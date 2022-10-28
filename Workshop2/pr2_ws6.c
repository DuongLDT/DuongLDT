# include<stdio.h>
# define max 100
void input( float a[],int n){
	int i;
	
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
}
void output( float a[],int n){
	printf("Cac phan tu da nhap vao la:\n");
		int i;
			for(i=0; i<n; i++) {
				printf(" %2.3f",a[i]);
			}
}
void add_a_value(float a[], int n, float val, int pos){
	int i;
	printf(" vi tri can chen pos= ");scanf("%d",&pos);
	printf(" gia tri can chen val= ");scanf("%f",&val);
	if(n>=max){ 
		return;//mang da day, khong the them
	}
	if (pos<0){ pos=0;
	} //dau
	if (pos>n){ pos=n;
	} //cuoi
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}// giua
	a[pos]=val;
 	n++;
 	output(a,n);
}
void sort_asc(float a[], int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
}
int search_a_value(float a[],int n, float x){
	int i,first,last,mid;
	
	sort_asc(a,n);
	first=0;last=n-1;
	do{
		mid=(first+last)/2;
		if (a[mid]==x) return mid;
		else if (a[mid]<x){
			first=mid+1;
		}
		else if(a[mid]>x){
			last=mid-1;
		}
	} while(first<=last);
	return -1;
}

void values_in_range(float a[],float x,float y){
	float temp;
	int i;
	printf(" enter x, y "); scanf("%f %f",&x,&y);
	if (x>y){
		temp=x;x=y;y=temp;
	}
	for(i=x;i<y;i++){
		printf("%f ",a[i]);
	}
}
int main(){
	int choice,n,pos;
	float a[max],val,x,y;
		printf(" Enter n: "); scanf("%d",&n);
	
	input(a,n);
	do{
	printf("------------MENU------------\n");
	printf("1. Add  a Value\n");
	printf("2. Search a value\n");
	printf("3. Print out the array\n");
	printf("4. Print out values in a range\n");
	printf("5. Print out values in ascending order\n");
	printf(" Select your choice\n"); scanf("%d",&choice);
		switch(choice){
			case 1: add_a_value(a, n, val, pos); break;
			case 2: {
				printf(" Enter the value x= "); scanf("%f",&x);
				int result=search_a_value(a,n,x);
				if (result != -1) printf("%d ",result );
				else if(result==-1) printf("%d ",result);
				} break;
			case 3: output(a,n); break;
			case 4: values_in_range(a,x,y);break;
			case 5: {
					sort_asc(a,n);
					output(a,n);
					}break;
		}
	} while (choice<0||choice>5);
}
