#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define in(n)           long long int n;   cin >> n
#define inarr(n, arr)   vll arr(n); f(i, 0, n)    cin >> arr[i]
#define instr(s)        string s;   cin >> s
#define ll long long int
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define ld long double
#define float double
#define f(i, x, n) for (int i = x; i < n; i++)
#define rf(i, x, n) for (int i = x; i >= n; i--)
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (ll) a.size()
#define pi (3.141592653589)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define watch(x) cerr << (#x) << " is " << (x) << endl
#define pyes cout << "YES" << endl;
#define pno cout << "NO" << endl;
#define dbans(ans) cout << #ans << " = " << ans << endl;
#define pans(ans) cout << ans << endl;
// ll fastprime(ll n){f(i, 2, (ll)sqrt(n)) if (n % i == 0) return 0;return 1;}
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define dbg1(x) cout << #x << "= " << x << endl;
#define dbg2(x,y) cout << #x << "= " << x << "\t" << #y << "= " << y <<endl;
#define dbg3(x,y,z) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << endl;
#define dbg4(x,y,z,w) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << "\t" << #w << "= " << w << endl;

// using ll = long long;

// MAX_N * MAX_X
ll MAX_SUM = 2e5 * 1e9;

/**
 * true if the given `arr` can be divided into `k` subarrays where the sum of
 * each subarray is at most `max_sum`
 */
bool is_possible(const vector<ll> &arr, const int k, ll max_sum) {
	// # of subarrays needed if sum of each subarray is at most max_sum
	int subarr_count = 0;
	// sum of the current subarray
	ll cur_sum = 0;

	for (const int &x : arr) {
		if (x > max_sum) { return false; }

		if (cur_sum + x > max_sum) {
			subarr_count++;
			cur_sum = 0;
		}
		cur_sum += x;
	}
	if (cur_sum > 0) { subarr_count++; }

	return subarr_count <= k;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<ll> arr(n);
	for (ll &i : arr) { cin >> i; }

	ll l = 1, r = MAX_SUM;
	while (l < r) {
		ll mid = (l + r) / 2;
		if (is_possible(arr, k, mid)) {
			r = mid;
		} else {
			l = mid + 1;
		}
	}
	cout << l << '\n';
}