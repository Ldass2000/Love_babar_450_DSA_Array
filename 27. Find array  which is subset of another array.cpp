//Find array  which is subset of another array
//a-->11 1 13 21 3 7
//b--> 11 3 7 1
//ans--> YES

#include<bits/stdc++.h>
using namespace std;

string isSubset(int n,int m,int a[],int b[])
{
    unordered_set<int>s;
    
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int j=0;j<m;j++)
    {
        if(s.find(b[j])==s.end())
         return "No";
    }
    return "Yes"; 
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    cout<<isSubset(n,m,a,b)<<endl;
    return 0;
}