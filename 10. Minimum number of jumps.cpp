//Minimum number of jumps 
//a[]-> 1, 3,5,8,9,2,6,8,9
//-->steps= 1->3->8->9
//steps=3

 #include<bits/stdc++.h>
 using namespace std;
 
 int getMinjump(int a[],int n)
 {
     if(n==1) return 0;
     if(a[0]==0) return -1;
     int maxR=a[0];
     int steps=a[0];
     int jump=1;
     for(int i=1;i<n;i++)
     {
         if(i==n-1) return jump;
         
         if(i+a[i]>maxR) maxR=i+a[i];
         steps--;
         if(steps==0)
         {
             jump++;
             if(i>=maxR) return -1;
             steps=maxR-i;
         }
     }
     return jump;
 }

 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     auto res= getMinjump(a,n);
    cout<<res;
     return 0;
 }
  