#include<iostream>
using namespace std;
long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    long long int low = 0, high = x, ans = -1;
    while(low<=high)
    {
        long long int mid = (low+high)/2;
        long long int mids = mid * mid;
        if(mids==x)
        {
            return mid;
        }
        else if(mids > x)
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()

{
    long long int x = 9;
    cout << floorSqrt(x);
}