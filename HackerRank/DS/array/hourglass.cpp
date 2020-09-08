#include<iostream>
#include<string>

using namespace std;

int main(){
    int a[6][6],total,max;
    
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }

    max = a[1][1] + a[0][0] + a[0][1] + a[0][2] + a[2][0] + a[2][1] + a[2][2];

    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            total = a[i][j] + a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
            if(total>max){
                max = total;
            }
        }    
    }

    cout<<max;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}