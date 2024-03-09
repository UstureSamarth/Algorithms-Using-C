#include<stdio.h>
#include<conio.h>
int selectminimun(int a[],int sindex,int size)
{
    int temp=a[sindex],minindex=sindex;
    for(int i=sindex;i<size;i++)
       {
            if(temp>a[i+1])
            {
                temp=a[i+1];
                minindex=i+1;
            }
       }

    return minindex;
}
void selectionsort(int a[],int size)
{
    int temp,m;
    for(int i=0;i<size-1;i++)
    {
        m=selectminimun(a,i,10);
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[10]={3,4,2,5,8,1,7,2,3,6};
    display(a,10);
    printf("\nArray after sorting\n");
    selectionsort(a,10);
    display(a,10);
    printf("\n");
    getch();

}

