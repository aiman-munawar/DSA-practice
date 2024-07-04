#include <iostream>
using namespace std;
int main(){
    int n=5;
    int data[n]={1,4,5,6,7};
    int k=2;
    int j=k+1;
    while(j<n){
        data[j-1]=data[j];
        j=j+1;
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<data[i]<<"  ";
    }
}