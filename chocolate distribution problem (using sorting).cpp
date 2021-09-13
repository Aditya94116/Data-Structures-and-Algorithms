#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void chocolateproblem(int arr[],int n,int m)
{
  sort(arr,arr+n);
  int min_diff=INT_MAX;

  for(int i=0;i+m-1<n;i++)
  {
   int diff=arr[i+m-1]-arr[i];
   if(diff<min_diff)
   min_diff=diff;

  }
  cout<<min_diff;
}
int main()
{
  int arr[]={1,3,5,6,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int m=2;
  chocolateproblem(arr,n,m);
}
