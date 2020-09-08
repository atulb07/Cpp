#include<iostream>
#include<string>

using namespace std;

int main(){
    long int n,q,x,y,k,i,temp=0,max=0;
    cin>>n>>q;
    long int arr[n] ={0};
    for(i=0;i<q;i++){
        cin>>x>>y>>k;
        if(x-1>=0) arr[x-1]+=k;
        else arr[0]+=k;
        if(y<n) arr[y]-=k;
    }
    for(i=0;i<n;i++){
        temp += arr[i];
        if(temp>max){
            max = temp;
        }
    }
    cout<<max;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}