#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s, k;
		cin>>n>>s>>k;
		s--;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long prefix[n];
		for(int i=0;i<n;i++){
			if(i==0) prefix[0] = a[0];
			else prefix[i] = prefix[i-1] + a[i];
		}
		int ans = -1e9;
		if(prefix[s]<=k){
			ans = 1;
		} else {
			//Tim vi tri pos nho nhat sao cho tong tu a[pos] den a[s] <=k
			for(int i=1;i<=s;i++){
				if(prefix[s] - prefix[i-1]<=k){
					ans = i+1;
					break;
				}	
			}
		}
		if(ans==-1e9){
			cout<<-1<<endl;
		} else {
			cout<<ans<<endl;
		}
	}
}
//1 2 3 4 5 6 7 8 9 10
/* 
20
5 4 4
3 0 0 0 2
6 5 5
0 1 2 3 0 5 */