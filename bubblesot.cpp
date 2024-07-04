#include <iostream>
using namespace std;
int main(){
    int n=5;
    int data[n]={1,4,7,2,5};
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(data[j]>data[j+1]){
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
     }
     for(int k=0;k<n;k++){
        cout<<data[k]<<" ";
     }
}