#include <stdio.h>

char nom[20] , prenom[20] , numero[20] ;

int addData(char nom[20] , char prenom[20] ,  char numero[20]) {
	
	
	FILE*  fichier =  NULL  ; 
	
	fichier = fopen("rep.txt" , "a") ; 
	
	rewind(fichier) ;  
	
	fprintf(fichier , "nom=%s\nprenom=%s\nnumero=%s\n" , nom , prenom , numero) ; 
	
	if (fichier != NULL ) {
		
		return 1 ; 
		
	}
	else {
		
		return 0 ; 
		
	}
	
}

int main() {
 
   printf("hint :  Entrer q si vous vouley terminer la saisis ! \n ") ;
   
    add :
       
    printf("\nEntrer un nom !: \n") ;
    scanf("%s" , nom) ; 
    
    if (nom[0] == 'q') {
		
		goto end ; 
	}
    
    printf("Entrer un prenom !: \n") ; 
    scanf("%s" , prenom) ; 
    
    if (prenom[0] == 'q') {
		
		
		goto end  ;
	
	}
    
    printf("Entrer le numero de telephone ! \n") ; 
    scanf("%s" , numero) ;
    
    if (numero[0] == 'q') {
			
			goto end ;  
	
	}
    
    addData(nom , prenom , numero) ; 
    
    goto add ;  
   
   end : 
   
   printf("Les informations sont etait bien ecrit ! \n") ; 
   return 0 ; 
	
}
		
		
	
	
