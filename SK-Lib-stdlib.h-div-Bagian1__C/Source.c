#include <stdio.h>      /* printf */
#include <stdlib.h>     /* div, div_t */
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	div_t divresult;
	divresult = div(38, 5);

	printf("38 div 5 => %d, remainder %d.\n", divresult.quot, divresult.rem);
	
	_getch();
	return 0;
}