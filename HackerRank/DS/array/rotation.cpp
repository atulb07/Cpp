#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    int arr[n],first;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<r;i++){
        first = arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=first;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}