#include<iostream>
#include<string.h>
#include<windows.h>
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
	//Enter : 
	cout<<"Enter the nember of the users :  ";
	cin>>n;
	string noms[n]; //tableau des noms
		cout<<"Enter the name of the  users : "<<endl;
	for (i=1;i<=n;i++){
		cout<<"Enter user "<<i<<"name";
		cin>>noms[i];
	}
	system("CLS");
	//affichage------delete after finiched 'we don't need it in the project'---
	cout<<"the name of users : "<<endl;
	for (i=0;i<n;i++){	
	cout<<noms[i]<<endl;
	}

//-------------------------------------------------------------------------------------

//relation Tabel : 
// variables for the relation tabel 
	int j,rt[n][n];
	cout<<"fill the table with 0 and 1 " ;
	  
	for(i=1;i<=n;i++){
		for(j=1;j<=w;j++){
		   cin>>rt[j][i];
		}
	}
		//affichage------delete after finished 
		for(i=1;i<=n;i++){
		     for(j=1;j<=w;j++){
		   cout<<rt	;
		}
	}
		
	
	
}
