#include<stdio.h> 
int main (){
	float pa = 9000000.0, pd = 3600000.0;
	// pa = Personal pending amount, pd = Alimony for each his/her dependent
	 float tf; 
	 // tf = Yearly tax-free income
	 int  n;
	 // n/depents
	 float ti;
	 // ti = Taxable income
	 int income;
	 char expression;
	 
	 printf ("Your income of this year: ");
	 scanf("%d", &income);
	 printf ("Number of dependent: ");
	 scanf ("%d", &n);
	 
	 tf = 12*(pa + n * pd);
	 printf ("Tax-free income: %f\n", tf);
	 ti = income - tf;
	 if(ti<=0)
  { printf("Taxable income = 0\n");
    printf("Income tax = 0\n");}
   else if (ti>0 && ti<= 5000000)
   { printf("Taxable income = %f\n",ti);
    printf("Income tax = %f\n",ti*5/100);}
   else if (ti>5000000 && ti<=10000000)
   { printf("Taxable income = %f\n ",ti);
     printf("Income tax = %f\n",5000000*5/100 + (ti-5000000)*10/100);}
   else if (ti>10000000 && ti<=18000000){
     printf(" Taxable income = %f\n",ti);
     printf("Income tax = %f\n",5000000*5/100+8000000*10/100+(ti-10000000)*15/100);}
   else {
    printf("Taxable income = %f\n",ti);
    printf("Income tax = %f\n",5000000*5/100+5000000*10/100+8000000*15/100+(ti-18000000)*20/100);}
    getchar();
    return 0 ;
}
