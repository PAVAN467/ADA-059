#include<iostream>


using namespace std;


void combine(int a[],int low,int mid,int high)
{
int i=low;
int j=mid+1;
int k=low;
int c[100];

while(i<=mid&&j<=high)
{
if(a[i]<a[j])
{
   c[k]=a[i];
    k=k+1;
    i=i+1;



}
else
{
c[k]=a[j] ;
k=k+1 ;
j=j+1;


}
}

if(i>mid)
{
while(j<=high)
{
c[k]=a[j];
k=k+1; j=j+1;
}
}

if (j>high)
{
while (i<=mid)
{
c[k]=a[i];
k=k+1;
i=i+1;
}

}

for (i=low;i<=high; i++)
{
a[i]=c[i];

}



}


void split(int a[],int low,int high)
{
int mid;
if (low<high)
{
mid=(low+high)/2;
split(a,low,mid);
split(a,mid+1,high);
combine(a,low,mid,high);
}}



int main()
{
     int n,i;
     cout<<"enter the size of the array";
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {   cout<<"enter the elements"<<i+1<<":";
         cin>>a[i];
     }
    split(a,0,n-1);
    cout<<"sorted elements are"<<"\n";
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }

    return 0;
}
