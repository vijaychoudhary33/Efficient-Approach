#include<iostream>
using namespace std;
int main(){
  int n=5;
  int arr[n]=[2,3,4,5,7];
  int res=-1;
  int largest=0;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>arr[largest]){
      res=largest;
      largest=i;
    }
    els if (arr[i]!=arr[largest]){
      if(res==-1||arr[i]>arr[res]){
        res=i;
      }
    }
  }
  return res;
