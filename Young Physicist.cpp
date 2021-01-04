#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n,i;
  cin>>n;
  int a[100],b[100],c[100],sum=0,sum1=0,sum2=0;
  for(i=0;i<n;i++)
	cin>>a[i]>>b[i]>>c[i];
  
  for(i=0;i<n;i++)	
	 {sum+=a[i];
	 sum1+=b[i];
	 sum2+=c[i];}
	 
  //cout<<sum<<sum1<<sum2;
  if(sum==0 and sum1==0 and sum2==0)
  cout<<"YES";
  else
  cout<<"NO";	 
   return 0;
}

