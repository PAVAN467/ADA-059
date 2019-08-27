#include<iostream>

using namespace std;

int binarySearch(int a[], int low,int high, int key)
{
if (high < low)
	return -1;

int mid = (low + high)/2;
if (key == a[mid])
	return mid;

if (key > a[mid])
	return binarySearch(a, (mid + 1), high, key);


	return binarySearch(a, low, (mid -1), key);
}


int findPivot(int a[], int low, int high)
{

if (high < low) return -1;
if (high == low) return low;

int mid = (low + high)/2;
if (mid < high && a[mid] > a[mid + 1])
	return mid;

if (mid > low && a[mid] < a[mid - 1])
	return (mid-1);

if (a[low] >= a[mid])
	return findPivot(a, low, mid-1);

return findPivot(a, mid + 1, high);
}


int pivotedBinarySearch(int a[], int n, int key)
{
int pivot = findPivot(a, 0, n-1);


if (pivot == -1)
	return binarySearch(a, 0, n-1, key);

if (a[pivot] == key)
	return pivot;

if (a[0] <= key)
	return binarySearch(a, 0, pivot-1, key);

	return binarySearch(a, pivot+1, n-1, key);
}


int main()
{

int a1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
int n = sizeof(a1)/sizeof(a1[0]);
int key = 3;

cout << "Index of the element is : " <<
		pivotedBinarySearch(a1, n, key);

return 0;
}
