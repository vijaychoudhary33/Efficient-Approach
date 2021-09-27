#include<iostream>
using namespace std;
int main(){
  int n=6;
  int arr[n]={1,2,3,6,4,5};
  int curr=a[n-1];
  cout<<curr;
  for(int i=n-2;i>=0;i--){
    if(curr<arr[i]){
      curr=arr[i];
      cout<<curr;
    }
  }   
