//Cyclically rotate an array by one
//Tc->o(n);
//sc->0(1);

 #include<bits/stdc++.h>
 using namespace std;
 void cycleRotate(int n,int a[])
 {
      int lastelemnt=a[n-1];
     for(int i=0;i<n;i++)
     {
         int temp=a[i];
         a[i]=lastelemnt;
         lastelemnt=temp;
     }
 }
 int main()
 {
     int n,m;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     cycleRotate(n,a);
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
     return 0;
 }
  