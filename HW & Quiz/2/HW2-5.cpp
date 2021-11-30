//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mahdi GhasemiNezhad

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int x, m, n, i, t;
	cin>>n>>m>>x;
	if(m>n){
		t=n;
		n=m;
		m=t;
	
	}
	for(i=n; i>=m; i--){
		
		if(i%x==0)
		cout<<i<<endl;
		
		
	}
	return 0;
	
	
}