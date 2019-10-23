
#include <iostream>


using namespace std;

int isHeap(int arr[], int n)
  {
	for (int i=0; i<(n-1)/2; i++)
	{
	if (arr[2*i +1] > arr[i])
    {
	return false;}

	if (2*i+2 < n && arr[2*i+2] > arr[i])
    {
				return false;}
	}
	return true;
 } 


int main()
{
	int arr[] = {90, 100, 85, 60, 40, 30, 20, 10,0};
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
