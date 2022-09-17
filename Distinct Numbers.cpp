#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v(n,0);
	for(int i =0;i<n;i++){
		int temp;
		cin>>temp;
		v[i]=temp;
	}
	int count=0;
	sort(v.begin(),v.end());
	for(int i = 0;i<n;i++){
		if(i==0||v[i]!=v[i-1]){
			count++;
		}
	}
	cout<<count;
	
	return 0;
	
}
