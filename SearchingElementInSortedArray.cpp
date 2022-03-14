#include<iostream>
using namespace std;

int searchInSorted(int arr[], int N, int K) 
{      // Your code here
       int low = 0, high = N-1;
       while(low<=high)
       {
           int mid = (low+high)/2;
           if(arr[mid]==K)
           {
               return mid;
           }
           else if(arr[mid] > K)
           {
               high = mid - 1;
           }
           else
           {
               low = mid + 1;
           }
           
       }
       return -1;  
}
int main()
{
    int arr[] = {10,20,30,40};
    int N = 4;
    int K = 30;
    cout << searchInSorted(arr,N,K);
}