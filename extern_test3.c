#include<stdio.h>

/* This defines the variable outside main function*/
int var = 564;
/*************************************************/

int main(void)
{
	extern int var;
	printf("%d \n",var);
	return 0;
}
