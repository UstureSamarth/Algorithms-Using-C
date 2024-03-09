#include<stdio.h>
#include<conio.h>
void modifiedbubblesort(int a[],int size)
{
    int i,round,temp,m;
    for(round=1;round<=size-1;round++)
    {
        m=0;
        for(i=0;i<=size-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                m=1;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        if(m==0)
            break;
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
    int a[10]={3,4,2,5,8,1,7,2,3,6};
    display(a,10);
    printf("\nArray after sorting\n");
    modifiedbubblesort(a,10);
    display(a,10);
    printf("\n");
    getch();

}

