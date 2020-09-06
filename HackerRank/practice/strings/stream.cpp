#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(){
    string str;
    int a;
    char c='a';
    cin>>str;
    vector<int> numbers;
    stringstream ss(str);
    while(ss){
        ss>>a;
        numbers.push_back(a);
        ss>>c;
    }
    for(int i =0;i<numbers.size();i++){
        cout<<numbers[i]<<"\n";
    }
    return 0;
}