#include<iostream>
using namespace std;
int main(){
    int arr[5]={9,10,4,5,61};
    int max=arr[0];
    int idx=0;
    for(int i=1;i<=4;i++){
        if(arr[i]>max){
            max=arr[i];
            idx=i;
        }
    }
    cout<<"Max element is "<<max<<" present at index "<<idx;
}