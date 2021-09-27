//Kate Anderson
//U21933376

//This program takes input from the user using getchar() and returns valid or invalid
//based depending on the sequence of characters. If all letters are uppercase or all
//letters are lowercase it is valid.



#include <stdio.h>

int main(){

    char letter;
    int upperValid;
    int lowerValid;

    printf("Input: ");

    while( (letter = getchar() ) != '\n'){
    

        if (!(letter >= 'A' && letter <= 'Z') && !(letter >= 'a' && letter <= 'z')){
           upperValid = 0;
           lowerValid = 0;
           break; 
        } 
        if(letter >= 'a' && letter <= 'z'){
            lowerValid = 1;
        } 

        if (letter >= 'A' && letter <= 'Z'){
            upperValid = 1;
        }
        
       

    }
    
    if (upperValid == 1 && lowerValid == 1){
        printf("Output: Invalid");
    } else if (upperValid == 1 || lowerValid == 1){
        printf("Output: Valid");
    } else{
        printf("Output: Invalid");
    }
    
  

    return 0;

}