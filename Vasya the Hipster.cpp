#include <bits/stdc++.h>
using namespace std;

int main() { 
  int a,b,a1,b1,counta=0,countb=0;
  cin>>a>>b;
  
  int different=min(a,b);
  
  a1=a-different;
  b1=b-different;
  
 
  counta=a1/2;
  countb=b1/2;
   
  cout<<different<<" "<<counta+countb;
   
   return 0;
   
}


