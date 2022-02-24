// 28. find  Triplet that sum to a given value
//arr-->  1 2 4 3 6 
// sum-->10
//ans--> Yes( becoz 1, 3 ,6 )

#include<bits/stdc++.h>
using namespace std;

bool tripletSum (int n,int X,int A[])
{
   sort(A,A+n);
        
          for(int i=0;i<n;i++){
              int start=i+1;
              int end=n-1;
              while(start<end){
                  if(A[i]+A[start]+A[end]==X){
                      return true;
                  }
                  else if(A[i]+A[start]+A[end]<X)
                  start++;
                  else end--;
              }
             
          }
          return false;
}

int main()
  {
    int n,X;
    cin>>n>>X;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    cout<<tripletSum(n,X,A)<<endl;
    return 0;
}
