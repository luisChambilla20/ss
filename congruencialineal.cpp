#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int semilla = 0;
int recursivo(int,int,int);

int main(){
	
	int a,c,m,semillaini,r=0,cont=0;
	
	cout<<"INGRESE DATOS \n";
	cout<<"- INGRESE SEMILLAs: ";cin>>semillaini;
	cout<<"- INGRESE MULTIPLICADORr: ";cin>>a;
	cout<<"- INGRESE CONSTANTE ADITIVAa: ";cin>>c;
	cout<<"- INGRESE MODULOo: ";cin>>m;
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


