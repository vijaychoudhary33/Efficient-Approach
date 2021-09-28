#include<iostream>
using namespace std;
int main(){
  int a[]=[3,2,5,4];
  int res=arr[1]-arr[0],min_val=arr[0];
  for(int i=0;i<n-1;i++)
    res=max(res,arr[i]-min_val);
    min_val=min(min_val,arr[i]);
  return res;
