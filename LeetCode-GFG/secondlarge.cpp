#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,8,67,23,50};
    int largest =arr[0];
    int second =-1;
    for (int i=1; i<6; i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
    else if(arr[i]>second){
        second=arr[i];
    }
    }
    cout<<second;
}
    