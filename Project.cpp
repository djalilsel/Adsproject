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
	//declaration pour la question 2 x y sont amis----------------------------------------------------
	string N1,N2;
	int a,b;
//Tableau des noms----------------------------------------------------------------------
	//Enter : 
	cout<<"Enter the number of the users :  ";
	cin>>n;
	string noms[n]; //tableau des noms
		cout<<"Enter the name of the  users : "<<endl;
	for (i=0;i<n;i++){
		cout<<"Enter user "<<i+1<<"name : ";
		cin>>noms[i];
	}

	//affichage------delete after finiched 'we don't need it in the project'---
	cout<<"les utilisateur are:"<<endl;
	for (i=0;i<n;i++){

	
	cout<<"the name of users : "<<endl;
	for (i=0;i<n;i++){	

	cout<<noms[i]<<endl;
	}
}

//-------------------------------------------------------------------------------------



//relation Tabel : 
// variables for the relation tabel 
int j,rt[n][n];
	cout<<"fill the table with 0 and 1 :"<<endl  ;
	  
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
		   cin>>rt[j][i];
		}
	}
		//affichage------delete after finished 
		for(j=0;j<n;j++){
			cout<<endl;
		     for(i=0;i<n;i++){
		     	
		   cout<<rt[j][i] <<"  |  ";
		   
		}
	}
//-------------------------------------------------------------------------------
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
