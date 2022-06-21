/*
Manuel Salvador Acosta Castro cod 2228055
Codigo primer parcial c++
*/
#include<iostream>
using namespace std;
int main(){
int n,m,s,r=0,c=0;
do{
cout<<"ingrese un numero  ";cin>>n;cout<<n<<endl;
if(n==0){
c=c+1;}
else{
       do {
	m=n/10;
	s=n-(10*m);
	r=r+s;
	n=m;
	c=0;
	    }
while(n>0);
cout<<"el resultado de la suma es:  "<<r<<endl;
r=0;
}	
   }while(c<2);
return 0;
}
