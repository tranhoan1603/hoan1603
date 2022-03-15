#include<bits/stdc++.h>
using namespace std;

const int n = 1e6;

FILE *fi = freopen("random8.cpp", "r", stdin);

void heapify(vector<double> &a, int n, int i){
	int l = 2*i+1, r = 2*i+2;
	int largest = i;
	if(r < n && a[largest] < a[r]){
		largest = r;
	}
	if(l < n && a[largest] < a[l]){
		largest = l;
	}
	if(largest != i){
		swap(a[largest],a[i]);
		heapify(a,n,largest);
	}
}

void heapsort(vector<double> &a, int n){
	for(int i = n/2-1; i >= 0; --i){
		heapify(a,n,i);
	}
	for(int i = n-1; i >= 0; --i){
		swap(a[i],a[0]);
		heapify(a,i,0);
	}
}
int main(){
	vector<double> a;
	for(int i = 0; i < n; ++i){
	double c; cin >> c;
	a.push_back(c);
	}
	heapsort(a,n);
	return 0;
}
