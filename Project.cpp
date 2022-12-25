#include<iostream>
#include<string>
#include<windows.h>

using namespace std;
int main (){
	//list sada9at----------------------------------------------------------------
	//declaration pour le tableau des noms----------------
	int i,n,cpt1,cpt2;
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
	cout<<endl<<"Entrer les noms:"<<endl<<"Nom 1: ";
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
		cout<<noms[a]<<" et "<<noms[b]<<" sont amis :)"<<endl;
	}
	else{
		cout<<noms[a]<<" et "<<noms[b]<<" ne sont pas amis :)"<<endl;
	}
//question 3 la list des amis------------------------------------------------------------------------
//declaration pour la question 3 ------------------------------------------------------------------------------------------------

	string indiceamis[n];
	cout<<"Enter a name for checking hes friends :";
	cin>>N1;
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}		
	}
	cout<<"the freinds of "<<N1<<" are : ";
	for(i=0;i<n;i++){
		if(rt[a][i]==1 && rt[i][a]==1){
			cout<<noms[i]<<" , ";
			
		}
	}
	
	//question 4------------------------------------------------------------------------
	//declaration pour la question 4 ------------------------
	int testdecelebre=0;
	string nomdecelebre;
cout<<"Enter a name for checking if hes celebre or no :";
	cin>>N1;
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}		
	}


	for(i=0;i<n;i++){
		testdecelebre=rt[i][a]+testdecelebre;
	}
	if( rt[a][a] == 1 ){
	testdecelebre=testdecelebre-rt[a][a];
	}
	if(testdecelebre>=5 && rt[a][a] ==1){
			cout<<noms[a]<<" est celebre !"<<endl;
		}
		else{
			cout<<noms[a]<<" est pas celebre ! "<<endl;
		}
//question 5------------------------------------------------------------------------
	//declaration pour la question 5 ------------------------
	
	int testscelebre[n];
	int test=0 ; 
	for(i=0; i<n;i++){
	testscelebre[i]=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			testscelebre[i]=rt[j][i]+testscelebre[i];
		}
	}
	for(i=0;i<n;i++){
			testscelebre[i]=testscelebre[i]-rt[i][i] ;
	}
	cout<<" la liste des personne  celebre : "<<endl;
	for(j=0;j<n;j++){
		
		if(testscelebre[j]>=5 && rt[i][i] ==1){
			test=1;
			cout<<noms[j]<<" , ";
		}
	}
	cout<<endl ;
	if(test==0){
		cout<<" There is no famous person !  "<<endl;
	}

		//question 6------------------------------------------------------------------------
	//declaration pour la question 6 ------------------------
cout<<"check if the person is spy or not : "<<endl<<endl;
    	cpt1=0;cpt2=0;
    	cout<<"Enter name : "; cin>>N1;
        for(i=0;i<n;i++){
    	if(noms[i]==N1){
    		a=i;
		}
	}
	for(j=0;j<n;j++){
		if(rt[a][j]==1){
			cpt1++;
		}
	}
	for(i=0;i<n;i++){
		if(rt[i][a]==0){
			cpt2++;
		}
	}
	
	if(cpt1==n && cpt2==n-1){
		cout<<N1<<" is a spy ."<<endl;
	}else{ cout<<N1<<" is not a spy ."<<endl;
		}

	//question 7----------------------------------------------------------------
string display;
 cout<<"If you want to view the list of spies, | write yes | "; cin>>display;
    if(display=="yes"){
    	cout<<" List of spies : "<<endl<<endl;
   
       	for(i=0;i<n;i++){
			cpt1=0;	cpt2=0;
    		for(j=0;j<n;j++){
    			
    			if(rt[i][j]==1){
				cpt1++;	
                }
                
		        if(rt[j][i]==0){
		    	cpt2++;
	            }
				
        	}

        		if(cpt1==n && cpt2==n-1){
	        	cout<<" ["<<noms[i]<<"] "<<endl;
                }
    	}
    }
	
}