#include<stdio.h>

/* This defines the variable outside main function*/
int var; 
/*************************************************/

int main(void)
{
	extern int var = 564 ;
	printf("%d \n",var);
	return 0;
}
