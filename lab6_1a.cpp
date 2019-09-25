#include<iostream>
#include<math.h>

using namespace std;


int a[30],count=0;

int place(int pos)
{
for(int i=1;i<pos;i++)
{

    if((a[i]==a[pos])||abs(a[i]-a[pos])==abs(i-pos))
        return 0;

}
return 1;

}

int print_sol(int n)
{

    int i,j;
    count++;
    //cout<<"solutions\n"<<count;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            if(a[i]==j)
            {

                cout<<"Q";
            }
            else
                cout<<"*";
        }
         cout<<"  "<<"\n";
       
    }
    
}

int queen(int n)
{

    int k=1;
    a[k]=0;
    while(k!=0)

    {

        do
        {

            a[k]++;
        }
        while((a[k]<=n)&&!place(k));
        if(a[k]<=n)
        {

            if(k==n)
            print_sol(n);
            else{
                k++;
                a[k]=0;
            }
        }
        else{
            k--;
        }
    }
}

int main()
{
   int n;
    cout<<"enter the number of queens"<<"\n";
    cin>>n;
    queen(n);
    cout<<"total number of solution"<<count;
}
