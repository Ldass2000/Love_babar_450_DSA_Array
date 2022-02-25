//Reverse Array
//Two POINTER METHOD
//TC- o(logn)

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     int start=0,end=n-1;
     while(start<end)
     {
         swap(a[start],a[end]);
         start++;
         end--;
     }
     
     for(int i=0;i<n;i++)
     {
         cout<<a[i];
     }
     return 0;
 }
  
