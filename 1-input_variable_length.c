#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* input();
int main()
{
    char *str;
    printf("Enter a string->");
    str=input();
    if(str==0)
        printf("Memory not allocated");
    else
        printf("string is->%s",str);
    free(str);
    getch();
    return 0;
}
char* input()
{
    int i=0,size=1;
    char *p,ch;
    p=(char*)malloc(sizeof(char));
    if(p==NULL)
    {
        return 0;   //for memory not allocated
    }
    while(1)
    {
        ch=getc(stdin);
        if(ch!='\n')
        {
            *(p+i)=ch;
            p=(char*)realloc(p,++size);
            i++;
        }
        else
        {
            *(p+i)='\0';
            break;
        }
    }
    return p;
}
