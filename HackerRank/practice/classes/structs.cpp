#include<iostream>
#include<string>

using namespace std;

struct Student{
    int roll;
    string first_name, last_name;
    int standard;
};


int main(){
    Student s;
    cin>>s.roll>>s.first_name>>s.last_name>>s.standard;
    cout<<s.roll<<" "<<s.first_name<<" "<<s.last_name<<" "<<s.standard;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}