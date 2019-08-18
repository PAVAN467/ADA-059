
#include<iostream>
#include<conio.h>


using namespace std;


void  selectionsort(int a[],int n)
{

    int i,j;
    int temp=0,minimum=0;


    for (i=0;i<n;i++)
    {

        minimum=i;

        for (j=i+1;j<n;j++)
        {

            if(a[minimum]>a[j])
            {
                temp=a[minimum];
                a[minimum]=a[j];
                a[j]=temp;

            }
        }
    }
    //cout<<""<<a[];
    for(j=0;j<n;j++){
       cout<<a[j]<<endl;
    }
    cout<<"enter the element to find  nth smallest elements";
    int key=0;
    cin>>key;
    cout<<key<<""<<"smallest element is : "<<a[key-1];
}

int main()
{

     int B[]={7,10,4,3,20,15};

     //cin>>n;
     selectionsort(B,6);
     return 0;
}

