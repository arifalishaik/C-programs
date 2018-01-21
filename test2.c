#include<stdio.h>
int a;
int *b;
static int c;
static int *d;

int main()
{

int e; 
int *f;
static int g;
static int *h;

printf("%d\n", a);
printf("%d\n", c);
printf("%d\n", e);
printf("%d\n", g);
printf("%d\n", *b);
printf("%d\n", *d);
printf("%d\n", *f);
printf("%d\n", *h);

}
