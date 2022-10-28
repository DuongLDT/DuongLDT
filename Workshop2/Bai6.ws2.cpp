#include<stdio.h>
int main(){
	int code;
	for (code = 1; code<255; code++){
		printf (" %d: %c ", code, code);
		if (code != 0 && code%12==0){
			printf ("\n");
		}
	}
	return 0;
}
