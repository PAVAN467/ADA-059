#include<iostream>



using namespace std;


void  bubblesort(int a[],int n)
{

    int i,j;
    int temp=0;
    int k;
    cout<<"iteration number of times";
    cin>>k;
    for (i=0;i<k;i++)
    {

        for (j=0;j<n-1-i;j++)
        {

            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
        }
    }
    for(j=n-1;j>=(n-k);j--)
    {
        cout<<a[j]<<endl;
    }
}

int main()
{

     int B[]={1,13,12,9,2,50};

     
    bubblesort(B,6);
     return 0;
}

