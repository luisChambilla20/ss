#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int semilla = 0;
int recursivo(int,int,int);

int main(){
	
	int a,c,m,semillaini,r=0,cont=0;
	
	cout<<"INGRESE DATOS \n";
	cout<<"- INGRESE SEMILLA: ";cin>>semillaini;
	cout<<"- INGRESE MULTIPLICADOR: ";cin>>a;
	cout<<"- INGRESE CONSTANTE ADITIVA: ";cin>>c;
	cout<<"- INGRESE MODULO: ";cin>>m;
	semilla = semillaini;
	
	while(semillaini != r){
		r = recursivo(a,c,m);
		cout<<cont+1<<" - "<<r<<endl;
		cont++;
	}
	
	cout<<"PERIODO =  "<<cont;
		
}

int recursivo(int a,int c,int m){
	int r,mod;
	semilla = (a*semilla+c);	
	mod =semilla % m;
	r = semilla/(m-1);
	return mod;
}


