#include <stdio.h> 

int main() 
{ 

    int choice; 
 printf("enter your choice");
 scanf ("%d",& choice);
    switch (choice) 

    { 

    case 1: 

        printf("Sandwich,\n Rs 149"); 

    case 2: 

        printf("French Fries,\n Rs 99"); 

    case 3: 

        printf("Pasta,\n Rs 179"); 
     
     case 4:
     
     printf("pizza,\n Rs 239");

     case 5:
     
     printf("Burger,\n Rs 129");

    default: 

        printf("Use the default case"); 

    } 

    return 0; 
    
    }
