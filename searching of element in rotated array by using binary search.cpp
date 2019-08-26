
#include<iostream>
#include<conio.h>


using namespace std;


void  selectionsort(int a[],int n)
{

    int i,j;
    int temp=0;
    int k;
    cout<<"iteration number of times";
    cin>>k;
    for (i=0;i<k;i++)
    {

        for (j=0;j<n-i;j++)
        {

            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }

        }
    }
    cout<<
    for(j=n;j>=(n-(k-1));j--)
    {
        cout<<a[j]<<endl;
    }
}

int main()
{

     int B[]={1,13,12,9,2,50};

     //cin>>n;
     selectionsort(B,6);
     return 0;
}


