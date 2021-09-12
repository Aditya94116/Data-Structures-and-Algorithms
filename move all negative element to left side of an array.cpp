#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={2,3,4,-1,5};
	int i=-1;
	int n=sizeof(arr)/sizeof(arr[0]);
	int pivot=0;
	for(int j=0;j<n;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
