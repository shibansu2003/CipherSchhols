#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<"Enter Three Intgers: "<<endl;
    cin>>i>>j>>k;
    if(i>j){
        cout<<i<<" is greater";
    }else if(j>k){
        cout<<j<<" is greater";

    }else{
        cout<<k<<" is greater";
    }
    return 0;
}