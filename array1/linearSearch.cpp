#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number you want to seach for:";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            cout<<"The number you want is present at the index "<<i<<endl;
        }
    }

}