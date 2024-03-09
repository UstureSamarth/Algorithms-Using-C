#include<stdio.h>
#include<conio.h>
void Merge(int a[],int sindex,int m,int eindex)
{
    int i,j,k;
    int size1=m-sindex+1;
    int size2=eindex-m;
    int x[size1];
    int y[size2];
    for(i=0;i<size1;i++)
        x[i]=a[i+sindex];
    for(i=0;i<size2;i++)
        y[i]=a[m+1+i];
    i=0,j=0;k=sindex;
    while(i < size1 && j < size2)
    {
        if(x[i] > y[j])
        {
            a[k]=y[j];
            k++;
            j++;
        }
        else
        {
            a[k]=x[i];
            k++;
            i++;
        }
    }
    while(i!=size1)
    {
        a[k]=x[i];
        i++;
        k++;
    }
    while(j!=size2)
    {
        a[k]=y[j];
        j++;
        k++;
    }
}
void MergeSort(int a[],int sindex,int eindex)
{

    if(sindex < eindex)
    {
            int m=sindex+(eindex-sindex)/2;
            MergeSort(a,sindex,m);
            MergeSort(a,m+1,eindex);
            Merge(a,sindex,m,eindex);
    }
}
void display(int a[],int eindex)
{
    for(int i=0;i<=eindex;i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[]={5,8,4,1,9,6,3,2,5,36,88,75,10,29,48,53};
    display(a,15);
    printf("\n\n");
    MergeSort(a,0,15);
    display(a,15);
    getch();
}
