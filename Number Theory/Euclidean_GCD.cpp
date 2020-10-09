#include<bits/stdc++.h>
using namespace std;

//Recursive implementation
int r_gcd(int a,int b){
	if(b==0)
		return a;
	else
		return r_gcd(b,a%b);
}

//Non-recursive implementation
int gcd(int a,int b){
	while(b){
		a %= b ;
		swap(a,b);
	}
	return a;
}



int main(){


long long a , b ;
cin>>a>>b;
//O(log min(a,b))....time complexity
cout<<r_gcd(a,b)<<endl;
cout<<gcd(a,b)<<endl;
return 0;
}
