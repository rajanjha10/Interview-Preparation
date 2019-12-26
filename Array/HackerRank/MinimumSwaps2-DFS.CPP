//https://www.hackerrank.com/challenges/minimum-swaps-2/problem

#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

int dfs(int i, vector<bool> &visited, vector<vector<int> > &adj){
	int cnt=1;
	visited[i] = 1;
	for(int j=0; j<adj[i].size(); j++){
		if(!visited[adj[i][j]]){
			cnt += dfs(adj[i][j], visited, adj);
		}
	}
	return cnt;
}

int main()
{
    fastio;
	int n, i, cnt=0;
	cin>>n;
	int a;
	vector<bool> visited(n+1, 0);
	vector<vector<int> > adj(n+1);
	for(i=1; i<=n; i++){
		cin>>a;
		adj[a].push_back(i);
		adj[i].push_back(a);
	}
	for(i=1; i<=n; i++){
		if(!visited[i]){
			cnt += dfs(i, visited, adj)-1;
		}
	}
	cout<<cnt<<endl;
    return 0;    
}
