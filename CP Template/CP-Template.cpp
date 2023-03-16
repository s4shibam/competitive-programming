// Author: Shibam Saha
// https://github.com/s4shibam

// -------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// *Fast Input Output
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

// *Short Naming
#define ll long long			 // Long Long Type Variable
#define nl '\n'					 // New Line
#define py cout << "Yes" << endl // Print Yes
#define pn cout << "No" << endl	 // Print No
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define maxll max<ll> // Max for ll
#define minll min<ll> // Min for ll
#define pi = 3.1415926535897932384626
const int mod = 1e9 + 7;
long long INFF = 1000000000000000005ll;

// -------------------------------------------------------------------------------------

// *Loops
#define forr(i, start, n) for (int(i) = (start); (i) < (n); ++(i))		   // For <
#define forn(i, start, n) for (int(i) = (start); (i) <= (n); ++(i))		   // For <=
#define rfor(i, n, front) for (int(i) = (n); (i) >= (front); (i)--)		   // Reverse For
#define forSq(i, start, n) for (int(i) = (start); (i) * (i) <= (n); ++(i)) // For Square
#define forc(ch, start, n) for (char(ch) = (start); (ch) <= (n); ++(ch))   // For Char
#define foreach(it, ds) for (auto &(it) : (ds))							   // For Each

// -------------------------------------------------------------------------------------

// *Data Structures
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;

// -------------------------------------------------------------------------------------

// *Macros
// Full Vector
#define all(ds) (ds).begin(), (ds).end()
// Clear Memory
#define clr(x) memset(x, 0, sizeof(x))
// Ascending Vector
#define sort(ds) sort(all(ds))
// Descending Vector
#define rev(ds) reverse(all(ds))
// Total Sum
#define tsum(ds) (accumulate(all(ds), 0ll))
// Count frequency of x
#define ctx(ds, x) (count(all(ds), (x)))
// Size
#define sz(ds) ((ll)(ds).size())
// Min Value
#define mine(ds) (*min_element(all(ds)))
// Max Value
#define maxe(ds) (*max_element(all(ds)))
// Min Value Index
#define minei(ds) (min_element(all(ds)) - (ds).begin())
// Max Value Index
#define maxei(ds) (max_element(all(ds)) - (ds).begin())
// Binary Search
#define bs(ds, x) (binary_search(all(ds), x))
// Lower Bound Index
#define lb(ds, x) (lower_bound(all(ds), (x)) - (ds).begin())
// Upper Bound Index
#define ub(ds, x) (upper_bound(all(ds), (x)) - (ds).begin())
// Ceil Function
#define ceil(num, div) ((num % div != 0) ? ((num / div) + 1) : (num / div))
// Debug 1
#define dbg(x) cout << (#x) << " = " << x << '\n'
// Debug 2
#define dbgg(x, y) cout << (#x) << " = " << x << " : " << (#y) << " = " << y << '\n'

// -------------------------------------------------------------------------------------

// *Templates
template <typename T>
vector<T> &operator--(vector<T> &v)
{
	for (auto &i : v)
		--i;
	return v;
}
template <typename T>
vector<T> &operator++(vector<T> &v)
{
	for (auto &i : v)
		++i;
	return v;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
	for (auto &i : v)
		is >> i;
	return is;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> v)
{
	for (auto &i : v)
		os << i << ' ';
	return os;
}
template <typename T, typename U>
pair<T, U> &operator--(pair<T, U> &p)
{
	--p.first;
	--p.second;
	return p;
}
template <typename T, typename U>
pair<T, U> &operator++(pair<T, U> &p)
{
	++p.first;
	++p.second;
	return p;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p)
{
	is >> p.first >> p.second;
	return is;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> p)
{
	os << p.first << ' ' << p.second;
	return os;
}
template <typename T, typename U>
pair<T, U> operator-(pair<T, U> a, pair<T, U> b) { return mp(a.first - b.first, a.second - b.second); }
template <typename T, typename U>
pair<T, U> operator+(pair<T, U> a, pair<T, U> b) { return mp(a.first + b.first, a.second + b.second); }

// -------------------------------------------------------------------------------------

// *Functions
// Returns b to the power p using Binary Exponentiation
// - To get inverse of b (MMI): binExp(b, mod-2)
// - Enable mod: _ = true
ll binExp(ll b, ll p, bool _)
{

	ll ans = 1;
	while (p)
	{

		if (p & 1)
			ans = _ ? (ans * b) % mod : (ans * b);

		b = _ ? (b * b) % mod : (b * b);
		p >>= 1;
	}

	return ans;
}

// Returns prefix sum array
// - Format: vi preArr = prefixSum(arr)
vi prefixSum(vector<int> arr)
{
	int n = arr.size();
	vector<int> preArr(n);
	preArr[0] = arr[0];
	for (int i = 1; i < n; i++)
		preArr[i] = preArr[i - 1] + arr[i];

	return preArr;
}

// ----------------------------------------THE-----------------------------------------
// ----------------------------------------END-----------------------------------------

// *Solution
void solution()
{
}

// *Driver Code
int main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("0_input.txt", "r", stdin);
	freopen("0_output.txt", "w", stdout);
#endif

	auto startingTime = chrono::high_resolution_clock::now();
	int t = 1;
	cin >> t; // Comment for single Test Case
	while (t--)
	{
		solution();
	}

	auto endingTime = chrono::high_resolution_clock::now();
	cerr << "Time taken: " << chrono::duration_cast<chrono::milliseconds>(endingTime - startingTime).count() << "ms" << nl;
	return 0;
}
