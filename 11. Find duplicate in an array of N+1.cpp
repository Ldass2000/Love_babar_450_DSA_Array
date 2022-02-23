//Find duplicate in an array of N+1 
//Tc-> O(n);

 #include<bits/stdc++.h>
 using namespace std;
 
 int finduplicate(int a[],int n)
 {
    
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        return a[i];
        s.insert(a[i]);
    }
    return -1;
 }

 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     auto res=finduplicate(a,n);
    cout<<res;
     return 0;
 }
  