#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i,min,max,*p;
    printf("How many numbers you want to enter:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory not allocated.");
        return 0;
    }
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    min=*p;
    max=*p;
    for(i=0;i<n-1;i++)
        if(max<*(p+i+1))
            max=*(p+i+1);
        else if(min>*(p+i+1))
            min=p[i+1];
    printf("Minmum=%d and Maximun=%d",min,max);
    free(p);
    getch();
    return 0;
}