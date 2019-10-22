
#include <iostream>
#include <limits.h>

using namespace std;

bool isHeap(int arr[], int n)
{
	for (int i=0; i<=(n-2)/2; i++)
	{
		if (arr[2*i +1] > arr[i])
				return false;
		if (2*i+2 < n && arr[2*i+2] > arr[i])
				return false;
	}
	return true;
}


int main()
{
	int arr[] = {90, 15, 10, 7, 12, 2, 7, 3};
	int n = sizeof(arr) / sizeof(int);
	if(isHeap(arr,n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


	return 0;
}
