// 32. 3 way partioning of array around a given value
// arr->>1 5 4 10 15 2 40 70
//A--> 10 , B--> 20 means all value less than A shoule be left side of A and all value gretaer
//than B sholud be right side of B and  value which is greter than A and lesst than B 
//sholud lies beetween  A and B

//TC-->O(N) , SC--->O(1);


#include<bits/stdc++.h>
using namespace std;

void threeWayPart(int n,int a,int b,int arr[])
{
    int start=0,end=n-1;
    
    //traverse element from left
    for(int i=0;i<=end;i++ )
    {
        // If current element is smaller than
        // range, put it on next available smaller
        // position
        if(arr[i]<a)
        {
            //if i and start are same in that case we can't swap
          //swap only if i is greater than start
            if(i==start)
            {
                start++;
                i++;
            }
            else 
            swap(arr[i++],arr[start++]);
        }
        
        // If current element is greater than
        // range, put it on next available greater
        // position.
        else if(arr[i]>b)
        swap(arr[i],arr[end--]);
        else
        i++;
    }
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    threeWayPart(n,a,b,arr);
     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}