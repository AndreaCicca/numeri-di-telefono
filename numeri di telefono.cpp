#include <iostream>
#include <cstring>
using namespace std;

	struct informazioni {
		char nome[50]={' '};
		char numero_di_tel[50]={' '};
	}; 
	
	
		
int main ()
{	
	int scelta=0;
	informazioni dati_persone[99];
	char nome_numero[50]={' '};
	bool corretto=false;
	int contatore=0;
	int lunghezzanome=0;
	int lunghezzanum=0;
	
	
	for (int i=0; i<100; i++){
		
		cout<<"Immetti il nome: ";
		cin.getline(dati_persone[i].nome,50);
		cout<<endl;
		
		if (strcmp(dati_persone[i].nome,"stop")==0) break;
		
		cout<<"Immetti il  numero: ";
		cin.getline(dati_persone[i].numero_di_tel,50);
		cout<<endl;
		contatore++;
	}
	
	
	
	
	
	
	cout<<"Scegli un'operazione:"<<endl<<"1. conoscere il nome a partire dal numero di telefono"<<endl<<"2. conoscere il numero di telefono a partire dal nome della persona"<<endl<<"3. stampare l'intera tabella"<<endl<<"4. uscire dal programma. "<<endl;
	cout<<" per scegliere un'operazione digita 1/2/3/4"<<endl;
	cin>>scelta;
	
	if (cin.fail()||(scelta<1||scelta>4))
		{
		cout<<"operazione non valida"<<endl;
		cin.clear();
		cin.ignore(256, '\n');
	}
	else{
		cin.clear();
		cin.ignore(256, '\n');
	
	switch (scelta){
							
					case 1:	
							cout<<"Immetti il nome: ";
							cin.getline(nome_numero,50);
							cout<<endl;	
						
							for (int i=0; i<100; i++){
								
								
							if (strcmp(dati_persone[i].nome,nome_numero)==0){
							
							//viene stampato il nome assocuiato al numero per comporre la frare finale		
								lunghezzanome=strlen(dati_persone[i].nome);
							
								cout<<"Il numero di telefono di ";
							
								for (int k=0; k<lunghezzanome; k++)
								{
									cout<<dati_persone[i].nome[k];
								}
									cout<<" e': ";
							//viene stapato il numero
							
									for (int j=0; j<50; j++){
											cout<<dati_persone[i].numero_di_tel[j];
									}
									corretto=true;
								}
							}
							if (corretto==false){
									cout<<"non e' stata trovata alcuna corrispendenza tra il numero e il nome"<<endl;
								}
							break;
							
					case 2:	
							cout<<" numero di telefono:";
							cin.getline(nome_numero,50);
							cout<<endl;	
							
							for (int i=0; i<100; i++){
								
								if (strcmp(dati_persone[i].numero_di_tel,nome_numero)==0){
									
								//viene stampato il numero assocuiato al numero per comporre la frare finale
									lunghezzanum=strlen(dati_persone[i].numero_di_tel);
									
									cout<<"Il numero ";
										for(int k; k<lunghezzanum; k++){
											cout<<dati_persone[i].numero_di_tel[k];
										}
										cout<<" e' di: ";
								//viene stapato il nome
									
										for (int j=0; j<50; j++){
												cout<<dati_persone[i].nome[j];
										}
									corretto=true;
									cout<<endl;
								}
								
							}
							if (corretto==false){
									cout<<"non e' stata trovata alcuna corrispendenza tra il numero e il nome"<<endl;
								}
							break;
							
							
					case 3: cout<<"hai scelto di stampare l'intera tabella!!'"<<endl;
					for (int i=0; i<contatore; i++){
						
						for(int j=0; j<50; j++){
						cout<<dati_persone[i].nome[j];
					}
						
						for(int j=0; j<50; j++){
						cout<<dati_persone[i].numero_di_tel[j];
						}
						
						cout<<endl;
						
					}
					
							
							
					case 4:	cout<<"Arrivederci!"<<endl;
							break;
				}			
	
	}
}

