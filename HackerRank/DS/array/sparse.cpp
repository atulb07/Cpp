#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,q;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int count =0;
        string temp;

        cin>>temp;
        for(int j=0;j<n;j++){
            if(temp==arr[j]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}