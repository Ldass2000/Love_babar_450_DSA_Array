// 30. Chocolate distribution problem
//N--->7 m--->3; where A--->no of chocolate , M-->number of student
//A--->7, 3, 2, 4, 9, 12, 56
//ans---> 2

#include<bits/stdc++.h>
using namespace std;

int minNoOfChoco(int n,int m, int a[])
{    
    int _min=INT_MAX;
    sort(a,a+n);
    for(int i=0;i+m-1<n;i++)
    {
        int diff=a[i+m-1]-a[i];
        if(diff<_min)
         _min=diff;
    }
    return _min;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=minNoOfChoco(n,m,a);
    cout<<ans<<endl;
    return 0;
}