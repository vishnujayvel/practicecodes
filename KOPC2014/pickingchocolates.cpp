#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>
#include <cassert>
#include <queue>
#include <set>
#include <numeric>
#include <stack>
using namespace std;
#define mp make_pair
#define INF (int)1e9
#define X first
#define Y second
#define REP(i, n) for(int i=0; i < n; i++)
#define FOR(i, a, b) for(int i=a; i < b; i++)
#define fill(a, x) memset(a, x, sizeof(a))
#define all(c) c.begin(), c.end()
#define sz(x)    ((int) x.size())
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
#define MAXN 100010
#define MOD 5000000

int tree[51][MAXN];
int arr[MAXN];

bool cmp (int a, int b) { return arr[a] < arr[b]; }

int read(int sel, int idx) {
        ll sum = 0;
        while(idx > 0) {
                sum = (sum + tree[sel][idx]) % MOD;
                idx -= (idx & -idx);
        }
        return (int) sum;
}

void update(int sel, int idx, int val) {
        // printf("upd: %d %d %lld\n", sel, idx, val);
        while(idx < MAXN) {
                ll temp = ((ll) tree[sel][idx] + (ll) val) % MOD;
                tree[sel][idx] = (int) temp;
                idx += (idx & -idx);
        }
}

int main() {
        int n, k,t;
        scanf("%d",&t);
        while(t--){
        scanf("%d %d", &n, &k);
        REP(i, n) scanf("%d", &arr[i]);
        memset(tree,0,sizeof(tree));
        fill(tree, 0);
        int dp[51];
        for(int i=0; i < n; i++) {
                // fill(dp, 0);
                for(int j=0; j < k-1; j++) 
                        dp[j] = read(j, arr[i]);
                update(0, arr[i]+1, 1);
                for(int j=1; j < k; j++)
                        update(j, arr[i]+1, dp[j-1]);
        }
        ll cnt = read(k-1, MAXN-1);
        printf("%lld\n", cnt);
	}
        return 0;
}
