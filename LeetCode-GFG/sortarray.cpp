#include<iostream>
using namespace std;
int main(){
int arr[5]={2, 4, 5, 6, 7};
bool sorted= true;
for(int i=1; i<5; i++){
    if(arr[i]<arr[i-1]){
        sorted = false;
        break;
    }
}
if(sorted){
    cout<<"sorted\n";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
}
else
cout<<"unsorted";
return 0;
    }
