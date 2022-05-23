#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int Unionof(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> h1;
    for(int i=0; i<m; i++)
    {
        h1.insert(arr1[i]);
    }
    for(int j=0; j<n; j++)
    {
        h1.insert(arr2[j]);
    }
    return h1.size();
}*/
int Unionof(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> h1;
    for(int i=0; i<m; i++)
    {
        h1.insert(arr1[i]);
    }
    unordered_set<int>h2;
    for(int i=0; i<n; i++)
    {
        h2.insert(arr2[i]);
    }
    vector <int> v;
    merge(h1.begin(), h1.end(), h2.begin(), h2.end(), back_inserter(v));
    unordered_set<int> m1(v.begin(),v.end());
    return m1.size();
}

int main()
{
   int arr1[] = {10,12,15};
   int arr2[] = {18,12};
   int m=3;
   int n=2;
   cout << Unionof(arr1,m,arr2,n);
}