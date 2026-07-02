#include<iostream>
using namespace std;
char convert (char name){
    char ans = name-'a'+'A';
    return ans;
}
int main(){
    cout<<"enter the alpha: ";
    char name;
    cin>>name;
   cout<<convert(name);
   return 0;
}