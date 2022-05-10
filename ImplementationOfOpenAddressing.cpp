#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct MyHash
{
    int *arr;
    //size no of elements present in table
    //cap is the total space in the table
    int cap,size; 

    MyHash(int c)
    {
        cap = c;
        size=0;
        arr = new int[cap];

        // by default taking all entries as -1
        // after removing replace it by -2

        for(int i=0; i<cap; i++)
            arr[i] = -1;
    }

    int hash(int k)
    {
        return k % cap;
    }

    bool insert(int k)
    {
        if(size==cap)
            return false;
        int i = hash(k);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=k)
            i = (i+1) % cap;

        if(arr[i]==k)
            return false;
        
        else{
            arr[i] = k;
            size++;
            return true;
        }

    }

    bool search(int k)
    {
        int h = hash(k);
        int i=h;
        while(arr[i]!=-1)
        {
            if(arr[i]==k)
                return true;

            i = (i+1) % cap;
            if(i==h)
            {
                return false; //return to actual position where it started.
            }
        }
        return false; //In case it is not present.
    }

    bool erase(int k)
    {
        int h = hash(k);
        int i = h;
        while(arr[i]!=-1)
        {
            if(arr[i]==k)
                arr[i] = -2;
                return true;

            i = (i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }
};
int main()
{
    MyHash mh(7);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    if(mh.search(56)==true)
        cout << "Yes it is Present";
    else
        cout << "No, it is not present";

    mh.erase(56);
    if(mh.search(56)==true)
        cout << "Yes it is Present";
    else
        cout << "No, it is not present";
   
}