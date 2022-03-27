#include<iostream>
using namespace std;
//Time O(n)
//space O(n)
void PartitionArray(int arr[],int l,int h, int p)
{
    int temp[h-l+1], index=0;
    for(int i=l; i<=h; i++)
    {
        if(arr[i]<arr[p]) //when elements are smaller than pointer
        {
            temp[index] = arr[i];
            index++;
        }
    }
    //to get stability we are creating two for loops
    for(int i=l; i<=h; i++)
    {
        if(arr[i]==arr[p]) //when elements are equal
        {
            temp[index] = arr[i];
            index++;
        }
    }
    int res = l+index-1; //because the index must have beeen increamented.
    for(int i=l; i<=h; i++)
    {
        if(arr[i] > arr[p]) //when element is greater
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l; i<=h; i++) //copy the temporary elements to arr
    {
        arr[i] = temp[i-l];

    }
    //return res;
}
int main()
{
    int arr[]={5,13,6,9,12,11,8};
	
	int n=7;
	
	PartitionArray(arr,0,n-1,3);
	
	for(int x: arr)
	    cout<<x<<" ";
}