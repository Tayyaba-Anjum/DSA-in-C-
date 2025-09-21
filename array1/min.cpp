#include<iostream>
using namespace std;
int main(){
    int arr[5]={9,10,4,5,61};
    int min=arr[0];
    int idx=0;
    for(int i=1;i<=4;i++){
        if(arr[i]<min){
            min=arr[i];
            idx=i;
        }
    }
    cout<<"Min element is "<<min<<" present at index "<<idx;
}