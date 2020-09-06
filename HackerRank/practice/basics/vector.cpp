#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,q;
    int loc1,loc2,size,temp;
    vector<vector <int>> g;
    vector <int> t;

    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&size);
        for(int j =0;j<size;j++){
            scanf("%d",&temp);
            t.push_back(temp);
        }
        g.push_back(t);
        t.clear();
    }
    for(int i=0;i<q;i++){
        scanf("%d%d",&loc1,&loc2);
        printf("%d\n",g[loc1][loc2]);
    }
    return 0;
}