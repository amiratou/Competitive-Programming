#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << " - " << #x << ": " << x << endl;
#define debugs(x, y) cerr << " - " << #x << ": " << x << " " << #y << ": " << y << endl;
#define sep() cerr << "--------------------" << endl;
#define all(x) (x).begin(),(x).end()
#define sz(x) (ll)x.size()
#define fi first
#define se second
#define ll long long
#define ii pair<int,int>
#define v vector<int>
#define vv vector<vector<int> >
#define INF 1e9
#define pb push_back
int main(){
	while(1){
		int N;
		cin>>N;
		if(!N)
			break;
		vector<int> vec;
		vec.resize(N);
		for(int i=0;i<N;i++)
			cin>>vec[i];
		ll sum=0,ans=0;
		for (int i = 0; i < N; ++i)
		{
			sum+=vec[i];
			ans=max(ans,sum);
			//debugs(ans,sum);
			if(sum<0)
				sum=0;
		}
		if(ans)
			cout<<"The maximum winning streak is "<<ans<<".\n";
		else
			cout<<"Losing streak.\n";
	}
	return 0;
}