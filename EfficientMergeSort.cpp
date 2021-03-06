#include<iostream>
using namespace std;
//time complexity O(m+n)
//Auxillary space 1
int MergeSort(int a[], int b[], int m, int n)
{
   int i=0, j=0;

   while(i<m && j<n)
   {
       if(a[i]<=b[j])
       {
          cout << a[i] << " " ;
          i++;
       }
       else
       {
          cout << b[j] << " ";
          j++;
       }
   }
   while(i<m)
   {
      cout << a[i] << " ";
      i++;
   }
   while(j<n)
   {
      cout << b[j] << " ";
      j++;
   }
}
int main()
{
   int a[]={10,15,20,40};
    int b[]={5,6,6,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	MergeSort(a,b,m,n);
}