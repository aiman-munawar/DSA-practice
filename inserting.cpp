#include <iostream>
using namespace std;
int main(){
    int k=3;
    int value=7;
    int n=5;
    int data[n]={1,3,4,5,6};
     int j=n-1;
     while(j>=k){
        data[j+1]=data[j];
        j=j-1;
     }
     data[k]=value;
      n=n+1;
   for(int i=0;i<n;i++){
    cout<<data[i]<<" ";
   }
     
    
}