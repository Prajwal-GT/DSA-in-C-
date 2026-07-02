#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the elements";
    for(int i =0; i<n; i++)
    {
cin>>arr[i];
    }


    //logic part
    for(int i=0; i<n-1; i++)
    {
        bool swapped =0;
for(int j=0; j<n-1-i; j++){
    if(arr[j]>arr[j+1])
    {
        swapped =1;
        swap(arr[j],arr[j+1]);
    }
}
// nxt part 
if(swapped==0)
break;
    }
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}