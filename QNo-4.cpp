#include <iostream>
using namespace std;
void findmaxmin(int arr[],int n ,int& min, int& max){
    min=max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }else if(arr[i]<min){
            min=arr[i];
        }
    }
}
int main(){
    int n;
    cout<<"Enter the lengt of the array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min, max;
    findmaxmin(arr, n, min, max);

    cout << "Minimum element is: " << min << endl;
    cout << "Maximum element is: " << max << endl;

    return 0;
    
}