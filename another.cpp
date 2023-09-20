/*
***** SHANTO
***
***** DATE :20/10/23
*/
//*******C++ HEADER*******//
#include<iostream>
#include<algorithm>
#include<cmath>
#include<array>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<unordered_set>
#include<cstdlib>
#include<iomanip>
#include<numeric>
#include<stack>
using namespace std;
//*******MACROS*******//
#define ll			long long
#define test(T)         	ll t;cin>>t;
#define speedIO 		ios_base::sync_with_stdio(false);cin.tie(NULL);
#define setNum(n)		cout<<fixed<<setprecision(n);	
#define endl    		"\n"
#define elif    		else if
#define pb      		push_back
#define pop     		pop_back
#define vbe(v)  		v.begin(),v.end()
#define llv  			vector<ll>
#define forA(v)			for(auto&i:v)
#define forF(n0,n)		for(int i=n0;i<n;++i)
#define forF1(n0,n)		for(int j=n0;j<n;++j)
//*******TEMPLATES *******//
template<typename T>void out(T x){cout << x << endl;}

//*************************************************************//
 
int main() {
	speedIO
	int n , m; cin >> n >> m;
	vector<pair<int ,int>> vp;
	forF(0,n){
		int temp; cin>> temp;
		if(temp > m)vp.pb(make_pair(temp,i+1));
	}
	if(vp.size()==0 || vp.size() == 1){
		if(vp.size()==0)out(n);
		else{
			out(vp[0].second);
		}
	}
	else{
		int count = 0;
		bool found = false;
		while(1){
			forF(0,vp.size()){
				if(vp[i].first <= 0)continue;
				if(count == vp.size()-1 && vp[i].first > 0){
					out(vp[i].second);found=1;break;
				}
				vp[i].first -=m;if(vp[i].first <= 0)count++;
			}
			if(found)break;
		}
	}
}