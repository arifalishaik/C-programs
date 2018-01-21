#include<stdio.h>

void increment(){
    extern int i=1;
    i=i+1;
    printf("%d\n",i);
}

int main(){
  increment();
  increment();
}
