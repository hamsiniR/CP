#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
  int main() { 
	  int n,k,count=0;
	  cin>>n>>k;
	  int a[n];
	  for(int i=0;i<n;i++)
		cin>>a[i];
	  for(int i=1;i<n;i++)
		if(a[i]>=a[k] && a[i]>0)
		{count++;
		cout<<i<<endl;}
		
	 cout<<count;
		
    return 0;
}



