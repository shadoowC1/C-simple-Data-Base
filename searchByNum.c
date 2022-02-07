#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
    char numero[30] , numero1[30] , nom1[30] , prenom1[30] ; 
	
	FILE* fichier ;
	
 int len(char word[20]) {
	
	int len = 0  ; 
	
	while (word[len] != '\0'){
			
		len +=1 ;
			
	}
	
	return len ; 

}






int isEqual(char numero1[30] , char numero[30]) {
		
	int i = 0 , n = 1 ; 
	
	for (i=0 ; i < 10 ; i++){
		
		if (numero1[i] != numero[i]) {
			
			n = 0 ; 
			break ; 
			
			
		}
     }

    return n ; 

}


int search() {
	
	fichier = fopen("rep.txt" , "r") ; 
	
	rewind(fichier) ; 
	do { 
    
    fseek(fichier , -1 , SEEK_CUR) ;
    
    fseek(fichier , 4 , SEEK_CUR) ; 
    
    fgets(nom1 , 20 , fichier ) ; 
     
    
    fseek(fichier , 7 , SEEK_CUR) ;
    
    fgets(prenom1 , 20 , fichier) ; 
     
    
    fseek(fichier , 7 , SEEK_CUR) ;
    
    fgets(numero1 , 20 , fichier) ;
 
	} while(isEqual(numero1 , numero )!= 1 && fgetc(fichier) != EOF  ) ;
	
	return 0 ; 

}



int main() {
	
    
    search:
	
	printf("Entrer le numero du telephone ! \n") ;
	scanf("%s" , numero ) ; 
	
      
    search() ; 
	
	if (isEqual(numero1 , numero ) == 1) {
	
	numero1[len(numero1)-1] = ' ' ; 
	nom1[len(nom1)-1] = ' '  ; 
	prenom1[len(prenom1)-1] = ' '; 
	printf("Le proprietere de %sest : %s%s\n" , numero1 , nom1 , prenom1 ) ;  
	
	goto search ;
	
	
  
     }
     
     else {
		 
		 
		 printf("Aucun contact correspond a ce numero ! \n") ; 
		 goto search ; 
		 
	}

}
