#include<iostream>
using namespace std;
int main(){
    int arr[6]={ 9,4,6,2,3,8};
    int n;
    // logic part
    for(int i=0; i<n-1; i++)
    {
        int  index =i;
    for(int j=i+1; j<n; j++)
    {
        if(arr[j]<arr[index]){
            index =j;
        }
    }
    swap(arr[i],arr[index]);
    }

    // nxt part
    for(int i =0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
