// solution for DEQUEUE

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++){
        int ans = 0,temp;
        cin>>n>>m;
        map<int , int> position;
        set<int> suf;
        for(int j=0; j<m;j++){
            cin>>temp;
            if(position.find(temp) != position.end())
                position[temp] = j;
            else
                position.insert({temp,j});
        }

    }
}