#include<iostream>
#include<string>
using namespace std;
int main (){
	//int ;
	//double ;
	//char ;
	//string ;
//declaration pour le tableau des noms----------------
	int i,n;
//----------------------------------------------------
	
	
//Tableau des noms----------------------------------------------------------------------
	//Enteri : 
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
}
