#include<bits/stdc++.h>
using namespace std;

const int n = 1e6;

FILE *fi = freopen("random8.cpp" , "r" , stdin);

vector<double> VectorSort;


void QSort(int low, int high)
{
	if (low <= high)
	{
		double pivot = VectorSort[low + ((high - low) >> 1)];

		int i = low;
		int j = high;

		while (i <= j)
		{
			while (VectorSort[i] < pivot)
				i++;
			while (VectorSort[j] > pivot)
				j--;

			if (i <= j)
			{
				swap(VectorSort[i], VectorSort[j]);
				i++;
				j--;
			}
		}

		if (low < j)
			QSort(low, j);
		if (high > i)
			QSort(i, high);
	}
}

int main()
{
	for(int i = 0; i < n; ++i){
		int a; cin >> a;
		VectorSort.push_back(a);
	}
	QSort(0,n-1);
	return 0;
}
