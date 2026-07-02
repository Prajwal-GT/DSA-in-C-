/*#include<bits/stdc++.h>
using namespace std; 
int cnt =0;
void print(){
   if(cnt==3){
    return;
}
cout<<cnt<<endl;
cnt++;
print();
}

int main(){
    print();
    return 0;
}*/

// subsequence 
#include <iostream>
#include <vector>
using namespace std;

void subsequence(int i, vector<int>& ds, int arr[], int n)
{
    if(i == n)
    {
        for(int x : ds)                            // {}, {1},{2}
            cout << x << " ";                     // it  just take and not take formula is 2^n   like take is {1} and not take is {1}
                                                       //it make the 2       ex= 2^2 is 4 like that 
        cout << endl;
        return;
    }

    ds.push_back(arr[i]);

    subsequence(i + 1, ds, arr, n);

    ds.pop_back();

    subsequence(i + 1, ds, arr, n);
}

int main()
{
    int arr[] = {1,2,3};

    vector<int> ds;

    subsequence(0, ds, arr, 3);
}

/*1 2 3 
1 2 
1 3 
1 
2 3 
2 
3 
like this it is called subsequence */