#include<iostream>
#include<string>
#include<windows.h>

using namespace std;
int main (){
	//list sada9at----------------------------------------------------------------
	//declaration pour le tableau des noms----------------
	int i,n;
	//declaration pour la question 2 x y sont amis----------------------------------------------------
	string N1,N2;
	int a,b,choice;
	char noms[100][10];

	

//Tableau des noms----------------------------------------------------------------------
	//Enter : 
	
	cout<<"Enter the number of the users :  ";
	cin>>n;
	//string noms[n]; //tableau des noms
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
		   if(rt[j][i]>1){
			cout<<"you need to enter number bitween 1-0 :"<<endl<<"Try agin ! :";
			i=i-1;
		   }
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
	cout<<"Nom 2: ";
	cin>>N2;
	
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}
		if(noms[i]==N2){
			b=i;
		}		
	}
	if(rt[a][b]==1 && rt[b][a]==1){
		cout<<noms[a]<<" et "<<noms[b]<<" sont amis :)";
	}
	else{
		cout<<noms[a]<<" et "<<noms[b]<<" ne sont pas amis :)";
	}
//question 3------------------------------------------------------------------------
//declaration pour la question 3 ------------------------
/*
	string indiceamis[n];
	cout<<"Entrer un nom:";
	cin>>N1;
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}		
	}
	for(i=0;i<n;i++){
		if(rt[a][i]==1 && rt[i][a]==1){
			indiceamis[j]=noms[i];
			j=j++;
		}
	}
	cout<<"the freinds of "<<N1<<"are : ";
	for(i=0;i<j;i++){
		cout<<indiceamis[i]<<"  |  ";
	} */
	//question 4------------------------------------------------------------------------
	//declaration pour la question 4 ------------------------
	int testdecelebre=0;
	string nomdecelebre;
cout<<"Entrer un nom:";
	cin>>N1;
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}		
	}

	for(i=0;i<n;i++){
		testdecelebre=rt[a][i]+testdecelebre;
	}
	if(testdecelebre>=5){
			cout<<noms[a]<<" est celebre !"<<endl;
		}
		else{
			cout<<noms[a]<<" est pas celebre ! ";
		}

}

