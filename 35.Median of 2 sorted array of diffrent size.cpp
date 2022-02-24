// 35.Median of 2 sorted array of diffrent size
//arr--> 1 12 15 26 38
//arr2--> 2 13 17 30 45
//TC-->O(nlogn) SC-->O(i+j) because creating  a new array  of size i+j

#include<bits/stdc++.h>
using namespace std;

int getMedian(int a[],int n)
{
    //if  length of array is even
    if(n%2==0)
    {
        int z=n/2;
        int e=a[z];
        int q=a[z-1];
        int ans=(e+q)/2;
        return ans;
    }
    
    //if length of array is odd
    
    else
    {
        int z=round(n/2);
        return a[z];
    }
}

//1st Method
int main()
{
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++)  cin>>a1[i];
    for(int i=0;i<m;i++)  cin>>a2[i];
    int a3[n+m];
    int l=n+m;
    
    //Merge two array into one array
    for(int k=0;k<n;k++)
    {
        a3[k]=a1[k];
    }
    
    int a=0;
    for(int k=0;k<l;k++)
    {
        a3[k]=a2[a++];
    }
    
    //sort the merge array
    sort(a3,a3+l);
    
    cout<<getMedian(a3,l);
}