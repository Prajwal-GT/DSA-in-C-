#include<iostream>
using namespace std;
int main(){
    int arr[]={ 4,6, 8, 9, 19};
    int target,mid;
int start =0;
    int end = (sizeof(arr)/sizeof(arr[0])) - 1;
    // get target from user
    if(!(cin>>target)) return 0;
        
    // binary search
        while(start<=end){
            mid = (start+end)/2;
        if(arr[mid]==target){
            cout<<mid;
            return 0;
            }
        else if(arr[mid]<target)
        start=mid+1;
        else{
            end = mid-1;
        }
        }
        cout<<-1;
        return 0;
    }