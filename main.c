#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int user_number;
    while(user_number != random_number) {
        printf("Choisissez un nombre entre 1 et 100 : \n");
        scanf("%d", &user_number);
        if (user_number < 1 || user_number > 100) {
            printf("Veuillez entrer un chiffre ou nombre entre 1 et 100 ! \n");
        }    
        else if (user_number > random_number) {
            printf("C'est moins ! \n");
        }
        else if (user_number < random_number) {
            printf("C'est plus ! \n");
        }
        else {
            printf("C'est gagné ! \n");
            break;
        }
    } 
    exit(0);
}   