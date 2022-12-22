#include<iostream>
#include<string.h>
using namespace std;
int main (){
	//int ;
	//double ;
	//char ;
	//string ;
	
	//declaration pour le tableau des noms----------------
	int i,n,j;
	//declaration pour la question 2 x y sont amis----------------------------------------------------
	int rt[i][j];
	string N1,N2;
	int a,b;
//Tableau des noms----------------------------------------------------------------------
	//id5aall
	cout<<"Entrer la taille de tableau des noms: ";
	cin>>n;
	string noms[n]; //tableau des noms
	for (i=0;i<n;i++){
		cin>>noms[i];
	}
	//affichage------delete after finiched 'we don't need it in the project'---
	cout<<"les utilisateur are:"<<endl;
	for (i=0;i<n;i++){
	cout<<noms[i]<<endl;
	}
//-------------------------------------------------------------------------------------
//Question 2 x y sont des amis--------------------------------------------
	cout<<"Entrer les noms:"<<endl<<"Nom 1: ";
	cin>>N1;
	cout<<"Nom 1: ";
	cin>>N2;
	
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}
		if(noms[i]==N2){
			b=i;
		}		
	}
	if(rt[a][b]==1){
		cout<<noms[a]<<" et "<<noms[b]<<" sont amis :)";
	}
	else{
		cout<<noms[a]<<" et "<<noms[b]<<" ne sont pas amis :)";
	}
//------------------------------------------------------------------------
}
