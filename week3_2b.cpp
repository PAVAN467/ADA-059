#include<iostream>
using namespace std;
void  bubblesort(int a[],int n)
{ int count=0;
   
    int i,j;
    int temp=0;
   
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                count++;
                
                
            }
        }
    }
cout<<"bubble sort compares:"<< " "<<count<<"\n";
    
}

void  selection(int a[],int n)
{
    int count1=0;
    int i,j;
    int temp=0,minimum=0;
  
    for (i=0;i<n;i++)
    {
        minimum=i;
        for (j=i+1;j<n;j++)
        {
            if(a[minimum]>a[j])
            {  minimum=j;
                temp=a[minimum];
                a[minimum]=a[j];
                a[j]=temp;
                count1++;
            }
        }
    }
   
   
    cout<<"selection sort compares:"<<" "<<count1<<" ""\n";
}


void combine(int a[],int low,int mid,int high)
{
    int count2=0;
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

  count2++;
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

cout<<"merge comares:" <<count2<<"\n";


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
     int i;
     int a[]={90,40,30,20,10,2,1};
     
	  bubblesort( a, 7);
   int  b[]={90,40,30,20,10,2,1};
	  selection(b,7);
   int  c[]={90,40,30,20,10,2,1};
    split(a,1,7);
    
    

   return 0;
}
