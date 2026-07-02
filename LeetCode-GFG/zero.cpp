#include<iostream>
using namespace std;
int main(){
    int j =0;
    int arr[5]= { 2,0,5,0,6};
    for(int i=0; i<5; i++){
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
        while(j<5)
        {
            arr[j]=0;
            j++;
        }
        for(int i=0; i<5; i++)
        {
            cout<<arr[i];
        }
    }