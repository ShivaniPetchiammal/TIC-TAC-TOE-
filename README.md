# Tic Tac Toe Game

## 🎮 Project Overview

The **Tic Tac Toe Game** is a simple console-based application developed in **C++**. It is a two-player game where players take turns marking spaces on a **3×3 grid** using **X** and **O**. The first player to align three of their marks horizontally, vertically, or diagonally wins the game. If all positions are filled without a winner, the game ends in a draw.

This project demonstrates the use of:
- Arrays
- Functions
- Loops
- Conditional statements
- Menu-driven gameplay
- Basic game logic

---

## ✨ Features

- Two-player gameplay
- 3×3 game board
- Displays board after every move
- Detects winning conditions
- Detects draw condition
- Prevents invalid moves
- Option to play multiple rounds

---

## 🛠 Technologies Used

- **Language:** C++
- **Compiler:** g++ / Code::Blocks / Dev-C++ / Visual Studio Code
- **Standard Library:**
  - `<iostream>`

---

## 📂 Project Structure

```
TicTacToe/
│
├── main.cpp
└── README.md
```

---

## ▶️ How to Run

### Using g++

```bash
g++ main.cpp -o tictactoe
./tictactoe
```

### Using Visual Studio Code

1. Install a C++ compiler (MinGW or GCC).
2. Open the project folder.
3. Compile and run `main.cpp`.

---

## 🎯 Game Rules

1. The game is played by **two players**.
2. Player 1 uses **X** and Player 2 uses **O**.
3. Players enter a position number from **1 to 9**.
4. A player cannot choose an already occupied position.
5. The first player to get **three symbols in a row, column, or diagonal** wins.
6. If all positions are filled without a winner, the game is declared a **Draw**.
7. After each game, players can choose to play again.

---

## 📋 Board Layout

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

Players enter the corresponding number to place their symbol.

---

## 📖 Functionalities

### 1. Initialize Board

- Creates a 3×3 board.
- Fills the board with numbers **1–9**.

---

### 2. Display Board

Shows the current state of the game board after every move.

Example:

```
 X | O | 3
---|---|---
 4 | X | 6
---|---|---
 O | 8 | 9
```

---

### 3. Win Detection

The program checks for:

- Horizontal wins
- Vertical wins
- Main diagonal win
- Secondary diagonal win

If any condition is satisfied, the current player wins.

---

### 4. Draw Detection

If all cells are occupied and no player has won, the game ends in a draw.

---

### 5. Replay Option

After a game ends, players can choose:

```
Play Again? (Y/N)
```

Selecting **Y** starts a new game.

---

## 💻 Sample Output

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player X, Enter position (1-9): 5

 1 | 2 | 3
---|---|---
 4 | X | 6
---|---|---
 7 | 8 | 9
```

Example winning message:

```
Player X Wins!
```

Example draw message:

```
Game Draw!
```

---

## 📌 Data Structure

```cpp
char board[3][3];
```

The game board is stored as a **3×3 character array**, where each cell contains either:

- Position number (`1–9`)
- `X`
- `O`

---

## ⚠ Limitations

- Supports only **two human players**.
- No computer (AI) opponent.
- No score tracking between games.
- Input validation is limited to board positions.
- Console-based interface only.

---

## 🚀 Future Enhancements

- Single-player mode with AI opponent
- Difficulty levels (Easy, Medium, Hard)
- Scoreboard for multiple rounds
- Better input validation
- Graphical User Interface (GUI)
- Sound effects and animations
- Save and load game progress

---

## 🎯 Learning Outcomes

This project helps understand:

- C++ Arrays
- Functions
- Loops
- Conditional statements
- 2D Array manipulation
- Game logic implementation
- Input validation
- Console-based application development

---

## 👩‍💻 Author

**Shivani Petchiammal**

---

## 📜 License

This project is developed for educational and learning purposes. Feel free to use and modify it for academic projects.# TIC-TAC-TOE-
