//subarray with 0 sum
//arr->4 2 -3 1 6 
//ans->>Yes

#include<bits/stdc++.h>
using namespace std;
bool subArray(int n, int a[])
{
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        mp[sum]++;
        if(mp[sum]>1)
        {
            return true;
        }
        if(mp[0]==1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(subArray(n,a)) cout<<"Yes";
    else cout<<"No";
    return 0;
}