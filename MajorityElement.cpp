#include<iostream>
using namespace std;
//Moore's Voting Algorithm
int findCandidate(int a[], int size)
{
    int maj_in = 0, count = 0;
    for(int i =0; i<size; i++)
    {
        if(a[maj_in]== a[i])
        {
            count++;
        }
        else 
        {
            count--;
        }
        if(count==0)
        {
            maj_in = i;
            count = 1;
        }
    }
    return a[maj_in];
}
bool isMajority(int a[], int size, int cand) 
{ 
	int count = 0; 
	for (int i = 0; i < size; i++) 
	
	if (a[i] == cand) 
	count++; 
		
	if (count > size/2) 
	return 1; 
	
	else
	return 0; 
} 
int majorityElement(int a[], int size)
{
    // your code here
    int cand = findCandidate(a, size); 


    if (isMajority(a, size, cand)) 
        return cand; 
	
    else
        return -1;        
}
int main()
{
    int a[] = {1, 3, 3, 1, 2}; 
	int size = (sizeof(a))/sizeof(a[0]); 
    cout << majorityElement(a, size);
	return 0; 
}