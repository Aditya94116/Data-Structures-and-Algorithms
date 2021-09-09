#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kthmaximum(int arr[],int n,int k)
{
	sort(arr,arr+n);
	cout<<arr[n-k];
}
int main()
{
	int arr[]={6,5,7,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	cout<<"largest element is ";
	kthmaximum(arr,n,k);
}
