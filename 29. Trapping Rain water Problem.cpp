// Trapping Rain water Problem
#include<bits/stdc++.h>
using namespace std;

int  trappingRainwater(int n,int a[])
{
    vector<int>lMax(n,0);
    vector<int>rMax(n,0);
    
    lMax[0]=a[0];
    //keeping track of  max height from left
    for(int i=1;i<n;i++)
    {
        lMax[i]=max(lMax[i-1],a[i]);
    }
    
    rMax[n-1]=a[n-1];
    //keeping track of max height from  right
    for(int i=n-2;i>=0;i--)
    {
        rMax[i]=max(rMax[i+1],a[i]);
    }
    
    int  maxWater=0;
    //water stored in that space will be min of height surrounded minus height of that space
     for(int i=1;i,n-1;i++)
     {
         maxWater+=(min(lMax[i],rMax[i])-a[i]);
     }
     
     return maxWater;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=trappingRainwater(n,a);
    cout<<res<<endl;
    return 0;
}