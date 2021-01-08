#include <bits/stdc++.h>
using namespace std;

int main() { 
	  
 int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 
 int toasts=(k*l)/nl;
 
 int limes=c*d;
 
 int salt=p/np;
 
 int min1=min(toasts,limes);
 int min2=min(min1,salt);
 cout<<min2/n;
 
 
 return 0;
   
}





