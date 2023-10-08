#include <bits/stdc++.h>
using namespace std;
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
// ll fastprime(ll n){f(i, 2, (ll)sqrt(n)) if (n % i == 0) return 0;return 1;}
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
	ll a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	ll n = a+b,cnt1=0,cnt0=0,cnt=0;
	f(i,0,n)
	{
		if(s[n-1-i]!='?' && s[i]=='?')
			s[i] = s[n-i-1];
		if(s[i]=='1')
			cnt1++;
		else if(s[i]=='0')
			cnt0++;
		else
			cnt++;
	}
	if(cnt1>b || cnt0>a){cout<<-1<<endl; return;}
	if(cnt != (a-cnt0)+(b-cnt1))	{cout<<-1<<endl; return;}
	a-=cnt0,b-=cnt1;
	if(a%2 && b%2) 	{cout<<-1<<endl; return;}
	f(i,0,n)
	{
		if(s[i]=='?')
		{
			if(a>=b){
				s[i]=s[n-i-1]='0';
				a-=2;
			}
			else{
				s[i]=s[n-i-1]='1';
				b-=2;
			}
		}
	}
	string s1=s;
	reverse(all(s1));
	if(s1==s)
	cout<<s<<endl;
	else
	cout<<-1<<endl;
	//cout<<endl;
}	
 
int main()
{
	// sieve();
	fast;
	ll t;
	cin >> t;
	while(t--)
		solve();
 
	return 0;
}