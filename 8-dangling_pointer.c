#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=17;
    printf("Before free %d\n",*p);
    free(p);
    printf("After free %d",*p);
    getch();
    return 0;
}