#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int size)
{
    int temp,i,j;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j] > temp)
                    a[j+1]=a[j];
            else
                break;

        }
            a[j+1]=temp;
    }
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[10]={3,4,2,1,5,1,8,4,9,7};
    display(a,10);
    printf("\nArray after sorting\n");
    insertionsort(a,10);
    display(a,10);
    printf("\n");
    getch();

}

