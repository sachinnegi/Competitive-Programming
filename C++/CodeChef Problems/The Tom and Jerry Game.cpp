#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb ;
#define mp make_pair;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
    	ll ts;
    	
    	cin>>ts;
    	
    	if (ts % 2 != 0) {
    		cout<<ts / 2<<endl;
		} else {
			if (ts % 4 == 0) {
				ll val = ts / 4;
				if (val % 2 != 0) {
					cout<<val / 2<<endl;
				} else {
					while (true) {
						ts /= 2;
						if (ts % 2 != 0) {
							break;
						}
					}
					cout<<ts / 2<<endl;
				}
			} else {
				cout<<ts / 4 <<endl;
			}
		}
    }
}
