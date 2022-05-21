//time complexity O(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Frequen(int arr[], int n)
{
    unordered_map<int, int> m; //taking elements as keys and frequncies as values
    for(int i=0; i<n; i++)
        m[arr[i]]++; //if the key is not present then it assign the value as 1
    for(auto e: m)
        cout <<e.first<<" "<<e.second<<endl;

}
int main()
{
    int arr[] = {10,10,20,5,477,40,40};
    int n=7;
    cout << Frequen(arr,n);
}