#include<iostream>
using namespace std;
int main(){
  int n=5;
  int A[]={20,45,25,87,66};
   int profit=0;
   for(int i=1;i<N;i++){
         if(A[i]>A[i-1]){
             profit +=(A[i]-A[i-1]);
            }
        }
        return profit;
}
