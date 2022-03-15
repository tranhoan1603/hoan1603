#include<bits/stdc++.h>
using namespace std;

FILE *fi = freopen("giamdan.cpp", "r", stdin);

const int n = 1e6;



void Merge(vector<double> &a, int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;

    vector<double> L, R;

    for (i=0; i<n1; ++i)
        L.push_back(a[low + i]);
    for (j=0; j<n2; ++j)
        R.push_back(a[mid + 1 + j]);

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<double> &a, int low, int high)
{
    if (low < high)
    {
        int mid = low + ((high-low) >> 1);

        mergeSort(a,low, mid);
        mergeSort(a,mid+1, high);

        Merge(a,low, mid, high);
    }
}

int main()
{
	vector<double> a;
	for(int i = 0; i < n; ++i){
		double c; cin >> c;
		a.push_back(c);
	}
	mergeSort(a,0,n-1);
	return 0;
}
