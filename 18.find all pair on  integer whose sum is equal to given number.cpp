//18. find all pair on  integer whose sum is equal to given number
//arr-> 1 5 7 -1
//ans-> 2;

 #include<bits/stdc++.h>
 using namespace std;
 
int getAllpair(int n,int k,int a[])
{
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int b=k-a[i];
        if(mp[b])
        {
            count+=mp[b];
        }
        mp[a[i]]++;
    }
    return count;
}
 int main()
 {
     int n,k;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     auto ans=getAllpair(n,k,a);
     cout<<ans;
     return 0;
 }
  