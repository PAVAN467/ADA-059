#include<iostream>



using namespace std;


void  selection(int a[],int n)
{

    int i,j;
    int temp=0,minimum=0;

    cout<<"enter the element to find  nth smallest elements";
    int key=0;
    cin>>key;
    for (i=0;i<key;i++)
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
   
    for(j=0;j<n;j++){
       cout<<a[j]<<endl;
    }
    
    cout<<key<<""<<"smallest element is : "<<a[key-1];
}

int main()
{

     int B[]={7,10,4,3,20,15};

     
     selection(B,6);
     return 0;
}

