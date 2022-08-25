#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i,largest,*p;
    printf("How many numbers you want to enter:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory not allocated.");
        return 0;
    }
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    largest=*p;
    for(i=0;i<n-1;i++)
        if(largest<*(p+i+1))
            largest=p[i+1];
    printf("Largest element is %d",largest);
    free(p);
    getch();
    return 0;
}