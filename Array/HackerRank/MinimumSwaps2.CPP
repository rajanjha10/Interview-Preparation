//https://www.hackerrank.com/challenges/minimum-swaps-2/problem

#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

int main()
{
    fastio;
	int n, i, cnt=0;
	cin>>n;
	int a[n+1], arr[n+1];
	for(i=1; i<=n; i++){
		cin>>a[i];
		arr[a[i]] = i;
	}
	for(i=1; i<=n; i++){
		if(a[i]!=i){
			int sp = arr[i], ap = a[i];
			swap(a[i], a[sp]);
			swap(arr[i], arr[ap]);
			cnt++;
		}
	}
	cout<<cnt<<endl;
    return 0;    
}
