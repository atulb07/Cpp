#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n,q,lastAnswer = 0,seq;
    cin>>n>>q;
    vector<vector <int>> vec(n);
    int a,x,y;
    for(int i=0;i<q;i++){
        cin>>a>>x>>y;
        seq = (x^lastAnswer)%n;
        if(a==1){
            vec[seq].push_back(y);
        }else{
            lastAnswer = vec[seq][y%(vec[seq].size())];
            cout<<lastAnswer<<endl;
        }
    }

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}