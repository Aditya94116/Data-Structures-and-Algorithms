#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={1,2,3,4},maximum;
	int n=sizeof(arr)/sizeof(arr[0]);
	maximum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum=sum+arr[j];
			maximum=max(sum,maximum);
		}
	}
	cout<<maximum;
}
