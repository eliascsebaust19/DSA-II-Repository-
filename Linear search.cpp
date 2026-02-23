#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
    int key = 6;
    int buggfixer = 0;   // easy to make remembarable
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"Found"<<endl;
            buggfixer = 1;
            break;
        }
    }
    if(buggfixer == 0){
        cout<<"not Found"<<endl;
    }
     return 0;
}
