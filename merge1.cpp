#include<iostream>
using namespace std;
void  bubblesort(int a[],int n)
{
    int count=0;
    int i,j;
    int temp=0;
    int count;
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
    for(j=n-1;j>=(n-k);j--)
    {
        cout<<a[j]<<endl;
    }
    cout<<"total comparison is done:"<< " "<<count;
}

void  selection(int a[],int n)
{
    int count=0;
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
                count++;
            }
        }
    }
    for(j=0;j<n;j++){
       cout<<a[j]<<endl;
    }
    cout<<key<<"  "<<"smallest element is : "<<a[key-1]<<"\n";
    cout<<"total comparisons done:"<<" "<<count<<" "<<"\n";
}

int count1=0;
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

  count1++;

}
else
{
c[k]=a[j] ;
k=k+1 ;
j=j+1;

  count1++;
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
cout<<"total compares:"<<" " <<count1<<"\n";


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

#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
	int start2 = mid + 1;
	if (arr[mid] <= arr[start2]) {
		return;
	}
	while (start <= mid && start2 <= end) {
		if (arr[start] <= arr[start2]) {
			start++;
		}
		else {
			int value = arr[start2];
			int index = start2;
			while (index != start) {
				arr[index] = arr[index - 1];
				index--;
			}
			arr[start] = value;
			start++;
			mid++;
			start2++;
		}
	}
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}
int main()
{
    int i,n;
    cout<<"enter the size of array";
    cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   mergeSort(arr, 0, n-1);
   for(i=0;i<n;i++)
    {
        cout<<"merge sort"<<arr[i]<<"\n";
    }
	return 0;
