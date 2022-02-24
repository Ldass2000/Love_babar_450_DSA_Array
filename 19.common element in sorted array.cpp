//19. find  common element in 3 sorted array
// A-> 1 5 10 20 40 80
//b->6  7 20 80 100
//->C->3 4 115 20 30 76 80 120
//ans-> 20 80

 #include<bits/stdc++.h>
 using namespace std;
 vector<int> getCommonelem(int n1,int n2,int n3,int a[], int b[],int c[])
 {
     int i=0,j=0,k=0;
     set<int>s;
     while(i<n1 && j<n2 && k,n3)
     {
         if(a[i]==b[j] && b[j]==c[k])
         {
              s.insert(a[i]);
                 i++;
                 j++;
                 k++;
         }
         else if(a[i]<b[j]) i++;
         else if(b[j]<c[k]) j++;
          else k++;
     }
     
    vector<int>ans;
    for(auto elem:s);
    ans.push_back(elem);
    return ans;
 }
 int main()
 {
     int n1,n2,n3;
     cin>>n1>>n2>>n3;
     int a[n1],b[n2],c[n3]];
     for(int i=0;i<n1;i++) cin>>a[i];
     for(int i=0;i<n2;i++) cin>>b[i];
     for(int i=0;i<n3;i++)  cin>>c[i];
     vector<int>res=getCommonelem(n1,n2,n3,a,b,c);
     if(res.siez()==0) cout<<-1;
     for(int i=0;i<res.size();i++) 
     cout<<res[i]<<" ";
     cout<<endl;
     return 0;
 }
  