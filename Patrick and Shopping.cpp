#include <bits/stdc++.h>
using namespace std;

int main() { 
	int d1,d2,d3;
	cin>>d1>>d2>>d3;
	
	int dis1=2*d1+2*d2;
	int dis2=d1+d2+d3;
	int dis3=2*d2+2*d3;
	int dis4=2*d1+2*d3;
	
	int min1=min(dis1,dis2);  
    int min2=min(dis3,dis4);  
    int min3=min(min1,min2); 
    
    cout<<min3; 
 return 0;
   
}






