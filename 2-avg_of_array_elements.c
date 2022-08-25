#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p=NULL,sum=0;
    float avg;
    printf("How many numbers you want to enter:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory not allocated.");
        return 0;
    }
    printf("Enter %d numbers:",n);
    if(p!=NULL)
    {
        for(i=0;i<n;i++)
            scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
        sum=sum+*(p+i);
    avg=(float)sum/n;
    printf("Average is=%.3f",avg);
    free(p);
    getch();
    return 0;
}