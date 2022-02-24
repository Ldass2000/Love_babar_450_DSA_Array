//17. Best time to buy and sell
//arr-> 7 1 5 3 4 6 
//ans->5;

 #include<bits/stdc++.h>
 using namespace std;
 
int bestTime(int n,int a[])
{
    int maxPro=0;
    int minPrice=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<minPrice) minPrice=a[i];
        else if(a[i]- minPrice > maxPro) maxPro=a[i]- minPrice;
    }
    return maxPro;
}
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     cout<<bestTime(n,a);
     return 0;
 }
  