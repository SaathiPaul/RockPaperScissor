//This program is a part of TechnoHacks Virtual Internship.

//Task 8 :- Rock-Paper-Scissors Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateComputerChoice()
{
    return rand() % 3;
}

void printChoices() 
{
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissor\n");
}

int determineWinner(int userChoice, int computerChoice) 
{    
    if (userChoice == computerChoice) 
    {
        return 0; 
    } 
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1)) 
    {
        return 1; 
    }
    else 
    {
        return -1; 
    }
}

int main() 
{
    int userChoice, computerChoice, result;    
    srand(time(NULL));
    printf("Welcome to Rock-Paper-Scissor!\n");    
    do 
    {        
        printChoices();
        printf("Enter your choice : ");
        scanf("%d", &userChoice);
        if (userChoice < 0 || userChoice > 2) 
        {
            printf("Invalid choice. Please enter a number between 0 and 2.\n");
            continue;
        }
        computerChoice = generateComputerChoice();    
        printf("You chose: %d\n", userChoice);
        printf("Computer chose: %d\n", computerChoice);        
        result = determineWinner(userChoice, computerChoice);        
        if (result == 0) 
        {
            printf("It's a tie!\n");
        } 
        else if (result == 1) 
        {
            printf("Congratulations! You win!\n");
        } 
        else 
        {
            printf("Sorry, you lost. Better luck next time!\n");
        }        
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &userChoice);
    } 
    while (userChoice==1);
    printf("Thanks for Playing! Goodbye!\n");
    return 0;
}