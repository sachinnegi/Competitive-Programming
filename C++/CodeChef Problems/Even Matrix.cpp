#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define pb push_back;
#define mp make_pair;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        ll n;
        
        cin>>n;
        
        V values;
        
        ll arr[n][n];
        
        ll odd = 1;
        ll even = 2;
        
        loop (i, n) {
        	loop (j, n) {
        		if ((i + j) % 2 == 0) {
        			arr[i][j] = odd;
        			odd += 2;
				} else {
					arr[i][j] = even;
					even += 2;
				}
			}
		}
		
		loop (i, n) {
        	loop (j, n) {
        		cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
    }
}
