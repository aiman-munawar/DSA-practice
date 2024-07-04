#include <iostream>
using namespace std;
int main(){
    int n=6;
    int data[n]={2,4,6,7,8,9};
    int item=3,loc=-1,i=0;
    while(i<n){
        if(data[i]==item){
            loc=i;
        }
        i++;
    }
      if(loc==-1){
        cout<<"not found";
      }
      else
      cout<<loc;
}