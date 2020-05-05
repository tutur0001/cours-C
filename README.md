# Cours de c 

#include <stdio.h>  
#include <stdlib.h>  

Les deux ligne ci dessus ce place en haut de notre de code ce sont des ligne de préprocesseur, elles seront lu au par un programme au debut de la compilation. Ce deux lignes include des librairies qui dans notre permette d'afficher du texte dans la console.  
 
* \n: retour à la ligne (= « Entrée ») ;  
* \t: tabulation.  
* //: Commentaire court  
* /* */: Commentaire long  

DÉCLARATION DE VARIABLE:
-  
* Il ne peut y avoir que des minuscules, majuscules et des chiffres (abcABC012) ;  
* votre nom de variable doit commencer par une lettre ;  
* les espaces sont interdits. À la place, on peut utiliser le caractère « underscore » _ (qui ressemble à un trait de soulignement). C'est le seul caractère différent des lettres et chiffres autorisé ;  
* vous n'avez pas le droit d'utiliser des accents (éàêetc.).  

Les types de variables:  
-
#### les nombres entiers positifs :  
* 45 ;  
* 398 ;  
* 7650;   
#### les nombres décimaux :  
* 75,909 ;  
* 1,7741 ;  
* 9810,7;   
#### les nombres entiers négatifs :  
* -87 ;  
* -916;  
#### les nombres négatifs décimaux :  
* -76,9 ;  
* -100,11;  
<!-- -->
Donc lorsque que vous crée une variable vous devez indiquer sont type (Voir photo pour les principaux type):  
<!-- -->
![type de variable](image/tableauVariable.png)    
Les trois premiers types (signed char,int,long) permettent de stocker des nombres entiers : 1, 2, 3, 4…  
Les deux derniers (float,double) permettent de stocker des nombres décimaux (appelés nombres flottants) : 13.8, 16.911…  
*Attention avec les nombres décimaux ! Votre ordinateur ne connaît pas la virgule, il utilise le point. Vous ne devez donc pas écrire 54,9 mais plutôt 54.9 !*   

Pour les types entiers (signed char,int,long…), il existe d'autres types dits unsigned(non signés) qui eux ne peuvent stocker que des nombres positifs.  
Pour les utiliser, il suffit d'écrire le mot unsigned devant le type :  
<!-- -->
![autre type de variable](image/otherVar.png)   
