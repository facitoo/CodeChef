#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,d,p,q,days;
    cin>>t;
    for(int i=0;i<t;i++){
        int sum = 0,temp;
        cin>>days>>d>>p>>q;
        int n = (days - 1) / d;
        temp = days % d;
        if( temp > 0){
            sum = (n+1)/2 * (2*p + n*q);
        }else{
            sum = n/2 * (2*p + (n-1)*q);
        }
        sum = sum * d;
        if( temp > 0){
            sum = sum - (temp * (p + (n-1)*q));
        }
        cout<<sum<<endl;
    }
}