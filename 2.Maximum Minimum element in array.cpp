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
     int max,min;
     if(n==1)
     {
         max=a[0];
         min=a[0];
     }
     else
     {
         if(a[0]>a[1])
         {
             max=a[0];
             min=a[1];
         }
         else
         {
             max=a[1];
             min=a[0];
         }
         for(int i=2;i<n;i++)
         {
             if(a[i]>max){
                 max=a[i];
             }
             if(a[i]<min){
                 min=a[i];
             }
         }
     }
     
     cout<<"Maximum Value= "<<max<<endl;
     cout<<"Minimum value= "<<min<<endl;
     
     return 0;
 }
  