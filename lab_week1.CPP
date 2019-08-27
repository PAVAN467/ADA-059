#include<iostream.h>
#include<conio.h>



int binary_sqrt(int n)
{
int first=1;
int last=n;
int mid;
int result;if(n==0 ||n==1) return n;
while(first<=last)
{
mid=(first+last)/2;
if(mid*mid==n)
{       result=mid;
break;
}
if(mid*mid<n)
{
first=mid+1;
result=mid;
}
else
{
last=mid-1;
} }
return result;

  }
int main()
{int a;clrscr();cout<<" number";
cin>>a;
cout<<binary_sqrt(a);
getch();
return 0;
}
