#include<stdio.h>
#include<ctype.h>
int main(){
	int nVowels, nConsonants, nOthers;
	char ch;
	printf (" Nhap ky tu: ");
	do{
		ch = getchar();
		ch = toupper(ch);
		if ('A'<=ch && ch<='Z'){
			switch (ch){
				case 'A':
			    case 'E':
			    case 'U':
			    case 'O':
			    case 'I':
			    	nVowels ++;
			    	break;
			    default: nConsonants++;
			    
			}
		}
		else nOthers = nOthers++;
	}
	while (ch!='\n');
	printf ("Number of vowel: %d \n", &nVowels);
	printf ("Number of consonants: %d \n", &nConsonants);
	printf ("Number of others: %d \n", &nOthers);
	return 0;
}
