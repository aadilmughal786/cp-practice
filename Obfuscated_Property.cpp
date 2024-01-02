// #include<bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
// #include <cstring>
// #include <array>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

using namespace std;
void solve();

// Globals

ll storage[1000000000] = {0};

//  INPUT

//---------------------------------------

//  OUTPUT

//---------------------------------------

// write your code declaration/defination

void fusc(ll n) {
  if (n < 2)
    return n;
}

//---------------------------------------

int main() {
  fast_io int t = 1;
  // cin>>t;
  while (t--) {
    solve();
  }

  return 0;
}

// Let's start
void solve() {
  storage[0] = 0;
  storage[1] = 1;
  ll n;
  cin >> n;
  fusc(n);
}