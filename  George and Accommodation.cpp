#include <bits/stdc++.h>
using namespace std;

int main() { 
   int n,a[100],b[100],count=0,i;
   cin>>n;
   
   for(i=0;i<n;i++)
   cin>>a[i]>>b[i];
   
   for(i=0;i<n;i++)
		if(b[i]-a[i]>=2){
		count++;
     	}

  cout<<count;
  return 0;
   
}


