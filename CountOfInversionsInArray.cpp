#include<iostream>
using namespace std;
/*
int Inversions(int arr[], int n)
{
//Naive solution
//Time complexity : O(n^2)
    int count =0;
    for(int i=0; i<(n-1); i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    return count;
}*/
//............................
//Efficient Approach : Merge Sort : firstly divide the array into two half then sort the array and merge
int CountAndMerge(int a[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1];
    int right[n2];
    for(int i=0; i<n1; i++)
    {
        left[i] = a[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        right[n2] = a[m+1+i];
    }
    int count =0, i=0, j=0, k=l, res =0;
    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
            res = res + (n1-i);
        }
        k++;
    }
    while(i<n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k] = right[i];
        j++;
        k++;
    }
    return res;
}
int main()
{
    int a[] = {2,4,1,3,5};
    int n=5;
    int l=0;
     int r = 4;
    int m = (l +(r-l))/2;
   
    cout << CountAndMerge(a,l,m,r);
}