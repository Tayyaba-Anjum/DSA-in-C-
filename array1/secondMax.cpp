#include<iostream>
using namespace std;
int main(){
    int arr[5]={9,10,4,5,61};
    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<=4;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<=4;i++){
        if(arr[i]>smax && arr[i]<max) smax=arr[i];
    }

    cout<<" second Max element is "<<smax;
}