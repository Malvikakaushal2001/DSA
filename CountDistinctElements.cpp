#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int DistinctE(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
        s.insert(arr[i]);
    return s.size();
}
int main()
{
    int arr[] = {10,20,20,10,2,3};
    int n = 6;
    cout <<DistinctE(arr,n);
}