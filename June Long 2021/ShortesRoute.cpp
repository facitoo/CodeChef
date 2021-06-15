#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,m,temp;
	cin>>t;
	for(int z=0;z<t;z++){
		cin>>n>>m;
		bool flag = false;
		std::vector<int> arr;
		int r[n],l[n];
		for(int i=0,right=-1 ; i<n ; i++){
			cin>>temp;
			arr.push_back(temp);
			if( temp == 1){
				flag = true;
				right = 0;
			}
			if(temp == 2)
				r[i] = 0;
			else
				r[i] = right;
			if(flag)
				right++;
		}
		flag = false;
		for(int i=n-1,left=-1 ; i>=0 ; i--){
			temp = arr[i];
			if( temp == 2){
				flag = true;
				left = 0;
			}
			if(temp == 1)
				l[i]=0;
			else
				l[i]=left;
			if(flag)
				left++;
		}
		for(int i=0; i<n ; i++){
			if( r[i] >= 0 && l[i] >= 0)
				r[i] = min(r[i] , l[i]);
			else
				r[i] = max(r[i] , l[i]);
		}
		r[0] = 0;
		for(int i=0 ; i<m ; i++){
			cin>>temp;
			cout<<r[temp]<<" ";
		}
		cout<<"\n";
	}
}