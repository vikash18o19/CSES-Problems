#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> app(n,0);
	vector<int> apar(m,0);
	for(int i =0;i<n;i++){
		int temp;
		cin>>temp;
		app[i]=temp;
	}
	for(int i =0;i<m;i++){
		int temp;
		cin>>temp;
		apar[i]=temp;
	}
	sort(app.begin(),app.end());
	sort(apar.begin(),apar.end());
	
	int i =0;
	int j =0;
	int count =0;
	while(i<n && j<m){
		if(abs(app[i]-apar[j])<=k){
			count++;
			i++;
			j++;
		}
		else if(app[i]>apar[j]){
			j++;
		}
		else{
			i++;
		}
	}
	
	cout<<count;
	
	return 0;
	
}
