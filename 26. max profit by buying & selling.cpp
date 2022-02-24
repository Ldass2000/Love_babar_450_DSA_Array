// maximum profit by buying and selling a share almost twice
// a-> 2 30 15 10 8 25 80
//ans->100

//TC->>O(n) , sc->>O(1);

#include<bits/stdc++.h>
using namespace std;

int maxprofit(int n,int price[])
{
    int profit=0;
     // Initializing variable
    // valley-peak approach
    /*
                       80
                       /
        30            /
       /  \          25
      /    15       /
     /      \      /
    2        10   /
               \ /
                8
     */
    for(int i=1;i<n;i++)
    {
        
        // traversing through array from (i+1)th
        // position
        int sub=price[i]-price[i-1];
        if(sub>0)
        {
            profit+=sub;
        }
    }
    return profit;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res= maxprofit(n,a);
    cout<<res<<endl;
    return 0;
}