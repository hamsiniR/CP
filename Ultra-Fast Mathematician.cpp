#include <bits/stdc++.h>
using namespace std;

int main() { 
	
	int i,len;
	string s1,s2,s3;
	cin>>s1>>s2;
	len = s1.length();
	
	for(i=0;i<len;i++)
		{
			if(s1[i]== s2[i])
				s3+='0';
			else
				s3+='1';
		 }   
    cout<<s3;	
	   
    return 0;
   
}






