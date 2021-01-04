#include <bits/stdc++.h>
using namespace std;

int main() { 
   string s;
   int n,i,count1=0,count0=0;
   cin>>n;
   cin>>s;
   
   for(i=0;i<n;i++)
		{if(s[i] == '1')
				++count1;
		 if(s[i] == '0')
				++count0;}
   			
   int count=min(count1,count0);
  
   cout<<n-(2*count);
   return 0;
   
}


