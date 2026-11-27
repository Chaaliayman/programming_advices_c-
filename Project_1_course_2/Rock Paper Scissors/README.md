# Rock Paper Scissors

A simple console game written in C++ where you play Rock, Paper, Scissors against the computer.

## Features

- Choose the number of rounds (1 to 10)
- Each round shows your choice, the computer's choice, and the round winner
- Score table at the end: player wins, computer wins, and draws
- Final winner announced
- Option to play again
- Screen color changes after each round (green = win, yellow = draw, red = loss)

## How to Play

1. Enter the number of rounds (1 to 10).
2. For each round, choose:
   - `1` for Rock
   - `2` for Paper
   - `3` for Scissors
3. The computer picks randomly, and the winner is shown.
4. At the end, the full results table is displayed.
5. Type `y` to play again or `n` to quit.

### Rules

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock
- Same choice = Draw

## Build and Run

Requires a C++ compiler such as `g++`.

```bash
g++ Rock_Paper_Scissors.cpp -o game
./game
```

On Windows (PowerShell):

```powershell
g++ .\Rock_Paper_Scissors.cpp -o game
.\game.exe
```

## Example Output

```
How many Rounds (1 to 10): 3
Your choice: [1]:rock , [2]:paper , [3]:scissors ? 2

_____________________Round[1]_____________________
Player Choice :paper
computer Choice :rock
Winner: Player
```

## Notes

- The screen color feature uses `system("color ...")`, which works on **Windows only**. On Linux/macOS the game still runs, but colors will not change.

## Concepts Used

- `enum` and `struct`
- Functions and pass by reference
- `rand()` / `srand()` for random numbers
- Loops and conditions

## License

Free to use for learning purposes.
