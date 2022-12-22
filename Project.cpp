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
	cout<<"Enter the number of the users :  ";
	cin>>n;
	string noms[n]; //tableau des noms
		cout<<"Enter the name of the  users : "<<endl;
	for (i=0;i<n;i++){
		cout<<"Enter user "<<i+1<<"name : ";
		cin>>noms[i];
	}
	
	cout<<"the name of users : "<<endl;
	for (i=0;i<n;i++){	
	cout<<noms[i]<<endl;
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

	
	
}
