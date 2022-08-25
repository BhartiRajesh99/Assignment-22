#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0,*p;
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
    for(i=0;i<n;i++)
        sum=sum+*(p+i);
    printf("sum is %d",sum);
    free(p);
    getch();
    return 0;
}