#include<iostream>
#include<string.h>
#include<windows.h>

using namespace std;
int main (){
	//list sada9at----------------------------------------------------------------
	//declaration pour le tableau des noms----------------
	int i,n,cpt1,cpt2;
	//declaration pour la question 2 x y sont amis----------------------------------------------------
	string N1,N2;
	int a,b,o=0;
	char noms[100][10];
	//First page 
	char enter;
	 HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,5);
	cout<<"                           Welcome To our First project !!                            "<<endl<<endl<<endl<<endl; 
    SetConsoleTextAttribute(h,6);
	cout<<"                           To start the application tap y                             "<<endl<<endl;
	cin>>enter ; 
	int qst;
	char run='y'; 
if(enter=='y'){
		system("CLS");}
//Tableau des noms----------------------------------------------------------------------
	//Enter : 
	
	SetConsoleTextAttribute(h,3);
	cout<<"Enter the number of the users :  ";
	SetConsoleTextAttribute(h,7);
	cin>>n;
	//string noms[n]; //tableau des noms
	SetConsoleTextAttribute(h,3);
	cout<<"Enter the name of the  users : "<<endl;
	SetConsoleTextAttribute(h,7);
	for (i=0;i<n;i++){
		cout<<"Enter user "<<i+1<<"name : ";
		cin>>noms[i];
	}
	

	//affichage--------------------------------------------------------------------------
	SetConsoleTextAttribute(h,3);
	cout<<"les utilisateur are:"<<endl;
	for (i=0;i<n;i++){
		SetConsoleTextAttribute(h,3);
		cout<<"the name of users : "<<endl;
	for (i=0;i<n;i++){	
		SetConsoleTextAttribute(h,7);
		cout<<noms[i]<<endl;
	}
}
//relation Tabel : 
// variables for the relation tabel 
int j,rt[n][n];
	cout<<"fill the table with 0 and 1 :"<<endl  ;
	  
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
		   cin>>rt[j][i];
		   if(rt[j][i]>1){
			SetConsoleTextAttribute(h,3);
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
	SetConsoleTextAttribute(h,4);
	cout<<endl<<"if u want to delete all the texts above write 'y' if not 'n'"<<endl;
	
	cin>>enter ;
	
	if(enter=='y'){
	system("CLS");} 
	
 	while(run=='y'){
    //menu : -----------------------------------------------------------
    SetConsoleTextAttribute(h,2);
    cout<<endl<<"            pour afficher : noms(x) et noms(y) sont amis, si x et y sont amis. entre 2 "<<endl;
    cout<<"            pour afficher la liste des amis.  entre 3 "<<endl;
    cout<<"            pour afficher la liste des amis.  entre 4 "<<endl;
    cout<<"            pour afficher la liste des amis.  entre 5 "<<endl;
    cout<<"            pour afficher : noms(x) est un espion, si x est un espion.  = entre 6 "<<endl;
    cout<<"            pour afficher la liste des espions. Combien y-a-t-il d'espions au maximum ? = entre 7 "<<endl;
    cout<<"            pour Tester et afficher Si x peut contacter y : soit directement parce qu'il le connait, soit par l'intermediaire une autre personne.  entre  8 "<<endl;
    cout<<"            pour Tester et afficher  Si x peut contacter y : soit directement parce qu'il le connait, soit par l'intermediaire une autre personne. entre 9 "<<endl;
	cout<<"            If you want to exit. Enter 00."<<endl;
    cout<<"            Enter your choice : ";
    cin>>qst ; 
	SetConsoleTextAttribute(h,7);
	switch (qst)
	{
	case 2 :{//Question 2 x y sont des amis--------------------------------------------
	SetConsoleTextAttribute(h,3);
	cout<<endl<<"Entrer les noms:"<<endl<<"Nom 1: ";
	while(o==0){
			SetConsoleTextAttribute(h,7);
	cin>>N1;
	
	for(i=0;i<n;i++){ 
		if(N1!=noms[i]){
			o=0;
		}
		if(N1==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
			SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}
	SetConsoleTextAttribute(h,7);
	}
	SetConsoleTextAttribute(h,3);
	cout<<"Nom 2: ";
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>N2;
	
	for(i=0;i<n;i++){ 
		if(N2!=noms[i]){
			o=0;
		}
		if(N2==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
			SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}
	
	
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}
		if(noms[i]==N2){
			b=i;
		}		
	}
	if(rt[a][b]==1 && rt[b][a]==1){
			SetConsoleTextAttribute(h,3);
		cout<<noms[a]<<" et "<<noms[b]<<" sont amis :)"<<endl;
	}
	else{
			SetConsoleTextAttribute(h,3);
		cout<<noms[a]<<" et "<<noms[b]<<" ne sont pas amis :)"<<endl;
	} 
	
	SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; };break;
		SetConsoleTextAttribute(h,7);
case 3:{
	string indiceamis[n];
		SetConsoleTextAttribute(h,3);
	cout<<"Enter a name for checking hes friends :";
		SetConsoleTextAttribute(h,7);
	cin>>N1;
	for(i=0;i<n;i++){
		if(noms[i]==N1){
			a=i;
		}		
	}	SetConsoleTextAttribute(h,3);
	cout<<"the freinds of "<<N1<<" are : ";
	for(i=0;i<n;i++){
		if(rt[a][i]==1 && rt[i][a]==1){
			cout<<noms[i]<<" , ";
			
		}
	}SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; 
}break;
	
case 4 :{

	int testdecelebre=0;
	string nomdecelebre;
	SetConsoleTextAttribute(h,3);
	cout<<"Enter a name for checking if hes celebre or no :";
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>N1;
	
	for(i=0;i<n;i++){ 
		if(N1!=noms[i]){
			o=0;
		}
		if(N1==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
		SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}
	
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
		SetConsoleTextAttribute(h,3);
			cout<<noms[a]<<" est celebre !"<<endl;
		}
		else{
			SetConsoleTextAttribute(h,3);
			cout<<noms[a]<<" est pas celebre ! "<<endl;
		} SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; }break;
case 5 :{
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
	}SetConsoleTextAttribute(h,3);
	cout<<" The liste of famous persoonnes  : "<<endl;
	for(j=0;j<n;j++){
		
		if(testscelebre[j]>=5 && rt[i][i] ==1){
			test=1;
			cout<<noms[j]<<" , ";
		}
	}
	cout<<endl ;
	if(test==0){SetConsoleTextAttribute(h,4);
		cout<<" There is no famous person !  "<<endl;
	}SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; } break;
case 6 :	{SetConsoleTextAttribute(h,3);
	cout<<"check if the person is spy or not : "<<endl<<endl;
    cpt1=0;cpt2=0;
	cout<<"Enter name : "; 
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>N1;
	
	for(i=0;i<n;i++){ 
		if(N1!=noms[i]){
			o=0;
		}
		if(N1==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}
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
	}else{ cout<<N1<<" is not a spy."<<endl;
		}
		SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; } break;
case 7 :{
string display;
SetConsoleTextAttribute(h,5);
 cout<<"If you want to view the list of spies, | write yes | "; 
 cin>>display;
    if(display=="yes"){
		SetConsoleTextAttribute(h,3);
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
	SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; } ;break;
case 8 :{
    char cho;
   bool choose;     
   string nom1,nom2;
   int Yreletives[n],Xreletives[n],w,x,y,k,p,NbYreletives=0,NbXreletives=0;
    k=0;
    choose=true;
    while(k<n+1 && choose==true){
	SetConsoleTextAttribute(h,3);
    cout<<"Enter the name of the first person : ";
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>nom1;
	
	for(i=0;i<n;i++){ 
		if(nom1!=noms[i]){
			o=0;
		}
		if(nom1==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
		SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}  SetConsoleTextAttribute(h,3);
    cout<<"Enter the name of the second person : ";  
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>nom2;
	
	for(i=0;i<n;i++){ 
		if(nom2!=noms[i]){
			o=0;
		}
		if(nom2==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
		SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}
	cout<<endl<<endl; 
    NbYreletives=0;
	int test=0;
    for(i=0;i<n;i++){
    		if(noms[i]==nom1){
    			x=i;
			}
	}
    for(i=0;i<n;i++){
    		if(noms[i]==nom2){
    			y=i;
			}
	}
	
    if(rt[x][y]==1){
		SetConsoleTextAttribute(h,3);
    	cout<<nom1<<" can contact "<<nom2<<" directly because he knows him ."<<endl<<endl;
	}
	else{
		SetConsoleTextAttribute(h,4);
		cout<<"You can't contact directely . "<<endl<<endl;
	
		for(i=0;i<n;i++){
		    if(rt[i][y]==1){
   	 	 	    Yreletives[NbYreletives]=i;
				NbYreletives++;
   		  	}
   		}
		for(i=0;i<NbYreletives;i++){
			p=Yreletives[i];
   			if(rt[x][p]==1){
				SetConsoleTextAttribute(h,3);
   	  		cout<<nom1<<" can contact "<<nom2<<" by a one mediator he is "<<noms[p]<<endl<<endl; 
			i=NbYreletives;
			test=1;
			}
		}
	}SetConsoleTextAttribute(h,2);
		cout<<"If you want to test another contact write 'y', If not write 'n' :"<<endl;
		cin>>cho;
    	if(cho=='n'){ choose=false; }else{ k++; } 
		SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; 
	}
	 }break;
	
case 9 :{
  char cho;
   bool choose;     
   string nom1,nom2;
   int test,XXreletives[n][n],Xreletives[n],w,x,y,k,p,NbXXreletives=0,NbXreletives=0;
    k=0;
    choose=true;
	int f,u,t,found=0;
   while(k<n+1 && choose==true){
	SetConsoleTextAttribute(h,3);
    cout<<"Enter the name of the first person : ";
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>nom1;
	
	for(i=0;i<n;i++){ 
		if(nom1!=noms[i]){
			o=0;
		}
		if(nom1==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}  SetConsoleTextAttribute(h,3);
    cout<<"Enter the name of the second person : ";  
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>nom2;
	
	for(i=0;i<n;i++){ 
		if(nom2!=noms[i]){
			o=0;
		}
		if(nom2==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}
   
	cout<<endl<<endl; 
    NbXXreletives=0;
	int test=0;
    for(i=0;i<n;i++){
		if(noms[i]==nom1){
    		x=i;
		}
	}
    for(i=0;i<n;i++){
		if(noms[i]==nom2){
			y=i;
		}
	}
		for(i=0;i<n;i++){
		    if(rt[x][i]==1){
   	 	 	    Xreletives[NbXreletives]=i;
				NbXreletives++;
   		  	}
   		}
		for(i=0;i<NbXreletives;i++){
			p=Xreletives[i];
			for(j=0;j<n;j++){
				if(rt[p][j]==1){
					XXreletives[i][j]=j;
					NbXXreletives++;
				}
			}
		}
		for (i=0;i<n;i++){
			for(j=0;j<n;j++){
			u=XXreletives[i][j];
				if(rt[u][y]==1){
					SetConsoleTextAttribute(h,3);
					cout<<nom1<<" can contact "<<nom2<<" by a two mediator  which are : "<<noms[i]<<" and "<<noms[u]<<endl<<endl;
					i=n;
					j=n;
					found=1;
				}
			}	
		}
	if(found=0){
		SetConsoleTextAttribute(h,4);
		cout<<nom1<<" can't contact "<<nom2<<" by a two mediators "<<endl;
	}
	}
	
	cout<<"If you want to test another contact write 'y', If not write 'n' :"<<endl;
		cin>>cho;
    	if(cho=='n'){ choose=false; }else{ k++; }
		SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; 
	};break;
case 10 :{
	char cho;
    bool choose;     
    string nom1,nom2;
    int Yreletives[n],Xreletives[n],w,x,y,k,p,t,u,i,j,NbYreletives=0,
	NbXreletives=0,NbXXreletives[i],XXreletives[n][n];
	k=0;
    choose=true;
    while(k<n+1 && choose==true){
		SetConsoleTextAttribute(h,3);
	cout<<"Enter the name of the first person : ";
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>nom1;
	
	for(i=0;i<n;i++){ 
		if(nom1!=noms[i]){
			o=0;
		}
		if(nom1==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
		SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}

	}  
	SetConsoleTextAttribute(h,3);
    cout<<"Enter the name of the second person : ";  
	o=0;
	while(o==0){
		SetConsoleTextAttribute(h,7);
	cin>>nom2;
	for(i=0;i<n;i++){ 
		if(nom2!=noms[i]){
			o=0;
		}
		if(nom2==noms[i]){
		
			i=n;
			o=1 ; 
		}
	}
	if(o==0){
		SetConsoleTextAttribute(h,4);
		cout<<"Name does not exist !"<<endl<<"Try again : ";
	}
	}
	cout<<endl<<endl; 
    NbYreletives=0;
	int test=0;
    for(i=0;i<n;i++){
    		if(noms[i]==nom1){
    			x=i;
			}
	}
    for(i=0;i<n;i++){
    		if(noms[i]==nom2){
    			y=i;
			}
	}

	if(rt[x][y]==1){
    	cout<<nom1<<" can contact "<<nom2<<" directly because he knows him ."<<endl<<endl;
	}
	else{
		SetConsoleTextAttribute(h,4);
		cout<<"You can't contact directely . "<<endl<<endl;
	
		for(i=0;i<n;i++){
		    if(rt[x][i]==1){
   	 	 	    Xreletives[NbXreletives]=i;
				NbXreletives++;
				
   		  	}
   		}
		for(i=0;i<NbXreletives;i++){
			p=Xreletives[i];
   			if(rt[y][p]==1){
			SetConsoleTextAttribute(h,3);
   	  		cout<<nom1<<" can contact "<<nom2<<" by a one mediator which is : "<<noms[p]<<endl<<endl; 
			i=NbXreletives;
			test=1;
			}
		}
		
		if(test!=1){
			for(i=0;i<=NbXreletives;i++){
				p=Xreletives[i];
				for(j=0;j<n;j++){
					if(rt[p][j]==1){
					XXreletives[i][j]=j;
					NbXXreletives[i];
					}
				}
			}
		
		for (i=0;i<NbXreletives;i++){
			y=NbXXreletives[i];
			for(j=0;j<y;j++){
			u=XXreletives[i][j];
				if(rt[u][y]==1){
					SetConsoleTextAttribute(h,3);
					cout<<nom1<<" can contact "<<nom2<<" by a two mediator  which are : "<<noms[i]<<" and "<<noms[u]<<endl<<endl;
					i=NbXreletives;
					j=y;
				}
			}
		}
		}
	}
		
	



SetConsoleTextAttribute(h,7);
	cout<<"If you want to test another contact write 'y', If not write 'n' :"<<endl;
	cin>>cho;
   	if(cho=='n'){ choose=false; }else{ k++; }
	}
	SetConsoleTextAttribute(h,4);
cout<<"if you want to go to the menu again enter y and if you want to exit enter n    "<<endl;
	cin>>run ; }break;
case 00 :{
		run='n';

	};break;
	default:
	break;
	
	
	
	if(run=='n'){ 
		system("CLS");
		SetConsoleTextAttribute(h,5);
		cout<<"this app was made by :"<<endl<<
		"1-SELAMNIA Abd eldjalil"<<endl<<
		"2-BOUGANDOURA Sadjed"<<endl<<
	    "3-DJOUAL Yahia";
	}
	

	}

}
}

