#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char * low(char * str){ //a function used to convert mixed user input into all lowercased
    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
}

int main(){
    printf("Hi there! Welcome to Sohaila Ali's Game:) \n");
    printf("Do you want to play? ");
    char play[200];
    fgets(play, 200, stdin);
    play[strcspn(play, "\n")] = 0;
    low(play); 

    if (strcmp(play, "yes") == 0){
        printf("Okay, let's go! \n");
    } else if (strcmp(play, "no") == 0){
        printf("Alright, bye!");
        exit(1);
    } else {
        printf("Invalid Input \n");
    }

    int score = 0;
    int num_of_questions = 5;

    while (1){ //using 1 as a condition since "true" doesn't work

        printf("1. Is Python a programming language or a creature? ");
        char question[200];
        fgets(question, 200, stdin);
        question[strcspn(question, "\n")] = 0;
        low(question);

        if (strcmp(question, "programming language") == 0 || (strcmp(question, "creature") == 0)){ 
            printf("Correct! It's both actually 1+ \n");
            score+=1;
            break;
        } else {
            printf("Invalid Input \n");
            continue;
        }
    }

    while (1){

        printf("2. What is a double in Java, C, C# and C++? (Even Number/Decimal Number): ");
        char question[200];
        fgets(question, 200, stdin);
        question[strcspn(question, "\n")] = 0;
        low(question);

        if (strcmp(question, "decimal number") == 0){
            printf("Correct! 1+ \n");
            score+= 1;
            break; 
        } else if (strcmp(question, "even number") == 0){
            printf("Incorrect! It is decimal number \n");
            break;
        } else {
            printf("Inavild Input \n");
            continue;
        }
    }

    while (1){

        printf("3.What is HTML used for? (Game Development/Web Development/Machine Learning): ");
        char question[200];
        fgets(question, 200, stdin);
        question[strcspn(question, "\n")] = 0;
        low(question);

        if (strcmp(question, "web development") == 0){
            printf("Correct! 1+ \n");
            score+= 1;
            break; 
        } else if (strcmp(question, "game development") == 0){
            printf("Incorrect! It is Web Development \n");
            break;
        } else {
            printf("Inavild Input \n");
            continue;
        }
    }

    while (1){

        printf("4. What does OOP stand for? (Out of Print/Object Oriented Programming/Out of Place): ");
        char question[20];
        fgets(question, 200, stdin);
        question[strcspn(question, "\n")] = 0;
        low(question);

        if (strcmp(question, "object oriented programming") == 0){
            printf("Correct! 1+ \n");
            score+= 1;
            break; 
        } else if (strcmp(question, "out of print") == 0 || (strcmp(question, "out of place"))){
            printf("Incorrect! It is Object Oriented Programming \n");
            break;
        } else {
            printf("Inavild Input \n");
            continue;
        }
    }

    while (1){

        printf("5. How do you pronounce C#? (See Hashtag/See Sharp): ");
        char question[200];
        fgets(question, 200, stdin);
        question[strcspn(question, "\n")] = 0;
        low(question);

        if (strcmp(question, "see sharp") == 0){
            printf("Correct! 1+ \n");
            score+= 1;
            break; 
        } else if (strcmp(question, "see hashtag") == 0 ){
            printf("Incorrect! It is See Sharp \n");
            break;
        } else {
            printf("Inavild Input \n");
            continue;
        }
    }
    printf("You've got %d/%d! ", score, num_of_questions);
}