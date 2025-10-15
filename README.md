# Number-Guessing-Game
# C Program for a Random Number Guessing Game

This repository contains a simple C program that implements a **Number Guessing Game**.  
The program randomly generates a number between **1 and 100**, and the user tries to guess it.  
After each guess, the program provides feedback — whether the guess is **too high**, **too low**, or **correct**.

---

## Table of Contents
- [Project Description](#project-description)
- [File Structure](#file-structure)
- [Program Logic](#program-logic)
- [How to Compile and Run](#how-to-compile-and-run)
- [Example Output](#example-output)
- [Concepts Used](#concepts-used)

---

## Project Description
This project demonstrates the use of:
- **Random number generation** using `rand()` and `srand()`
- **User input** handling with `scanf()`
- **Looping and conditional logic** to guide gameplay

The program generates a random number between **1 and 100**, and the player must guess it correctly.  
It provides feedback after each guess until the correct number is found.

---

## File Structure

├── number_guessing_game.c # Source code for the game
└── README.md # Project documentation

---

## Program Logic

1. **Initialize Random Generator**
   - `srand(time(0))` seeds the random number generator with the current system time.
   - This ensures a different random number on each execution.

2. **Generate Random Number**
   - `rand() % 100 + 1` generates a number between 1 and 100.
   - (Note: `rand()` typically produces values from 0 to 32767.)

3. **User Guess Loop**
   - The user enters guesses in a loop.
   - The program compares each guess to the generated number:
     - Prints **"Too low! Try again:"** if guess < number  
     - Prints **"Too high! Try again:"** if guess > number  
     - Prints **"Your guess is CORRECT!!!"** and exits if guess == number

---

## How to Compile and Run
### **Using GCC (Linux/macOS/WSL)**
```bash
gcc number_guessing_game.c -o number_guessing_game
./number_guessing_game
```
### **Using Windows (MinGW or Code::Blocks Terminal)**
```bash
gcc number_guessing_game.c -o number_guessing_game.exe
number_guessing_game.exe
```
## Example Output
Guess a number between 1 and 100:  
50  
Too low! Try again:  
75  
Too high! Try again:  
62  
Too high! Try again:  
56  
Your guess is CORRECT!!!  

## Concepts Used

| Concept                | Description                           |
| ---------------------- | ------------------------------------- |
| **rand(), srand()**    | Used for random number generation     |
| **time()**             | Provides seed for randomness          |
| **while(1)**           | Infinite loop for continuous guessing |
| **if-else conditions** | Compare guess with target number      |
| **printf / scanf**     | Handle user interaction               |
