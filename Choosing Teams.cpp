#include <bits/stdc++.h>
using namespace std;

int main() { 

 int n,k,a[2001],count=0;
 cin>>n>>k;
 
 for(int i=0;i<n;i++)
 cin>>a[i];	  
 
 int b=5-k;
 for(int i=0;i<n;i++)  
   {if(a[i]<=b)
   count++;}
   
 if(count>=3)
 cout<<count/3;
 else
 cout<<"0";
 
 
 return 0;
   
}






