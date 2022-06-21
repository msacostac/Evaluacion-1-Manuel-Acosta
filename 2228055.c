/*
Manuel Salvador Acosta Castro cod 2228055
Codigo primer parcial c
*/
#include <stdio.h>

int main()
{

    int n,m,s,r=0,c=0;
    do{
    printf("Ingrese su código: ");
    scanf("%d", &n);  
    if(n==0){
        c++;}
        else{
    do    {
	m=n/10;
	s=n-(10*m);
	r=r+s;
	n=m;
	c=0;
	}
while(n>0);
    printf("La suma es = %d",r);
    printf(" \n");
    r=0;
    }
    }while(c<2);
    return 0;
}