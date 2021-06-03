// solution for QUIZPLAG

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m>>k;
        //---------- using vector as counting the non-admin defaulters will 
        //---------- require another loop vector allows dynamic storage
        vector<int> defaulters;
        //---------- initialising array with 0
        int def[n+m+1] = {0};
        int temp; 
        for(int j = 0 ;j<k ; j++){
            cin>>temp;
            def[temp]++;
        }
        int dflt = 0;
        for(int j=1 ; j<=n ; j ++)
            if(def[j] > 1){
                dflt ++;
                defaulters.push_back(j);
            }
        cout<< dflt <<" ";
        for( int x : defaulters){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}