// 36.Median of two sorted arrays of same size
//ar1--> 1 12 15 26 38
//ar2--> 2 13 17 30 45

//output-->16 

#include<bits/stdc++.h>
using namespace std;

int getMedian(int a[],int b[], int n)

     //consider both array are sorted
{
    int i=0,j=0,count;
    int m1=-1,m2=-1;
    
    for(count;count<=n;count++)
    {
        if(i==n)
        {
            m1=m2;
            m2=b[0];
            break;
        }
        
        else if(j==n)
        {
            m1=m2;
            m2=a[0];
            break;
        }
        
        if(a[i]<=b[j])
        {
            m1=m2;
            m2=a[i];
            i++;
        }
        
        else
        {
            m1=m2;
            m2=b[j];
            j++;
        }
    }
    return (m1+m2)/2;
}

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    cout<<getMedian(a,b,n);
    return 0;
}
