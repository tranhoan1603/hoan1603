#include<bits/stdc++.h>
using namespace std;

FILE *fi = freopen("random8.cpp", "r", stdin);

int n = 1e6;

int main()
{
	vector<double> a;
	for(int i = 0; i < n; ++i){
		double b; cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
    return 0;
}
