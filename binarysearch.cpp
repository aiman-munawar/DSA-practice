#include <iostream>
using namespace std;
int main(){
    int n=5;
    int data[n]={1,4,5,6,7};
    int lb=0,up=n-1,mid=(lb+up)/2,item=5;
    while(lb<=up){
        if(data[mid]<item){
            lb=mid+1;
        }
        else if(data[mid]>item){
            up=mid-1;
        }
        else if(data[mid]==item){
            cout<<mid;
            break;
        }
        mid=(lb+up)/2;
    }

}
