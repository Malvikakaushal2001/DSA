//Here we take a single array with three points namely, the lower, 
//the middle and the highest point. The elements from the lower to the middle are sorted 
//and the elements from the (middle+1) to the higher are sorted. 
//The task is to merge these two sorted parts into one.
//Time complexity = theata(n)
//Auxillary space = theota n
#include<iostream>
#include<algorithm>
using namespace std;
int MergeSort(int a[], int low, int high, int mid)
{
    int n1 = mid-low+1;
    int n2= high-mid;
    int left[n1];
    int right[n2];
    for(int i=0; i<n1; i++)
    {
        left[i] = a[low+i];
    }
    for(int j =0; j<n2; j++)
    {
        right[j] = a[mid+1+j];
    }
    int i=0, j=0;
    while(i<n1 && j <n2)
    {
        if(left[i]<=right[j])
        {
            cout << left[i] << " ";
            i++;
        }
        else
        {
            cout<< right[j] << " ";
            j++;
        }
    }
    while(i<n1)
    {
        cout << left[i] << " ";
        i++;
    }
    while(j<n2)
    {
        cout << right[j] << " ";
        j++;
    }
}
int main()
{
    int a[] = {10,15,20,40,8,11,15,22,25};
    int low = 0;
    int high = 8;
    int mid = 3;
    MergeSort(a,low,high,mid);
    
}