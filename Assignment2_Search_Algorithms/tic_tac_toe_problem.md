# Tic Tac Toe Problem using Search Algorithms

Tic Tac Toe is a two-player game played on a 3×3 grid. The players take turns placing their symbols (X or O) on the grid.

The objective is to place three of the same symbols in a row, column, or diagonal.

## State Representation

The board configuration represents the state of the game. Each position can contain:
- X
- O
- Empty

Example state:

X | O | X
---------
O | X | _
---------
_ | O | _

## Initial State

The game begins with an empty board.

## Goal State

A player wins when three of their symbols appear in a row, column, or diagonal.

## Applying Search Algorithms

Search algorithms like BFS and DFS can explore the possible game states.

BFS explores states level by level and finds the shortest sequence of moves to reach a winning state.

DFS explores one branch of the game tree deeply before backtracking to explore other possibilities.

These algorithms help analyze possible outcomes and strategies in the Tic Tac Toe game.
