#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define ll long long 
#define arr array
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "



int main() {
	int n, temp, digit;
	int sum = 0;
	cin >> n;
	temp = n;
	while(n > 0){
		digit = n % 10;
		sum = (sum * 10) + digit;
		n = n / 10;
	}
	if(temp == sum){
		cout << "palindrome";
	}
	else{
		cout << "not palindrome";
	}
	return 0;
}
