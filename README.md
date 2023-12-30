# Rock-Paper-Scissors Game in C

## Overview

This C program implements a simple Rock-Paper-Scissors game where the user plays against the computer. The game is played in a loop until the user decides to exit. The user is prompted to enter their choice (Rock, Paper, or Scissors), and the computer generates its choice randomly. The winner is determined based on the game rules, and the result is displayed.

## Code Structure

### `generateComputerChoice()`

- Function responsible for generating a random choice for the computer.
- Uses the `rand()` function to generate a random number between 0 and 2 (inclusive) representing Rock, Paper, or Scissors.

### `printChoices()`

- Function to print the choices available to the user.
- Displays the options: 0 for Rock, 1 for Paper, and 2 for Scissors.

### `determineWinner(int userChoice, int computerChoice)`

- Function to determine the winner based on the user and computer choices.
- Returns 0 for a tie, 1 if the user wins, and -1 if the computer wins.
- The game rules are implemented with if-else conditions, checking different combinations of user and computer choices.

### `main()`

- The main function is the entry point of the program.
- Initializes variables for user choice, computer choice, and the game result.
- Seeds the random number generator with the current time to ensure different random values on each run.
- Displays a welcome message and enters a do-while loop to allow multiple game rounds.
- Inside the loop:
  - Calls `printChoices()` to show the user the available choices.
  - Prompts the user to enter their choice and validates the input.
  - Generates the computer's choice using `generateComputerChoice()`.
  - Calls `determineWinner()` to find the winner and prints the result.
  - Asks the user if they want to play again, and the loop continues if the answer is yes.
- Exits the loop when the user decides not to play again.
- Prints a farewell message and returns 0 to indicate successful program execution.

## Conclusion

This C program provides a basic implementation of the Rock-Paper-Scissors game, allowing users to interactively play against the computer. The code is well-structured, making use of functions for modularity and readability.
