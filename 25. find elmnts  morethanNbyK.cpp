//25. Given an array of size n and a number k, find all element that apperas more than "n/k" times;


#include<bits/stdc++.h>
using namespace std;
void morethanNbyK(int n,int k,int a[])
{
    int x=n/k;
    unordered_map<int,int>frq;
    for(int i=0;i<n;i++)
    {
        frq[a[i]]++;
    }
    
    // Traverse the  map 
    for(auto i:frq)
    {
         // Checking if value of a key-value pair
        // is greater than x (where x=n/k)
        if(i.second>x)
        
        // Print the key of whose value
            // is greater than x
            
            cout<<i.first<<endl;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    morethanNbyK(n,k,a);
    return 0;
}