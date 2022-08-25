#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n;
    char *p;
    printf("Enter the size:");
    scanf("%d",&n);
    p=(char*)malloc(n*sizeof(char));
    if(p==NULL)
    {
        printf("Memory not allocated.");
        return 0;
    }
    else
        printf("Memory allocated.");
    free(p);
    getch();
    return 0;
}