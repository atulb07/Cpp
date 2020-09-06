#include<iostream>
#include<string>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<"\n"<<a+b;
    char t = a[0];
    a[0] = b[0];
    b[0] = t;
    cout<<"\n"<<a<<" "<<b;
    return 0;
}