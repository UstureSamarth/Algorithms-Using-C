#include<stdio.h>
#include<conio.h>
void bubblesort(int a[],int size)
{
    int i,round,temp;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    display(a,10);
    printf("\nArray after sorting\n");
    bubblesort(a,10);
    display(a,10);
    printf("\n");
    getch();
}

