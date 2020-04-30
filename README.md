Hadassah Yanofsky
ECE 160 - Intro to C and C++
Cooper Union
Spring 2019 

Write the SOS game that is playable by 2 players. More information can be found on: <a href="https://en.wikipedia.org/wiki/SOS_(game)">https://en.wikipedia.org/wiki/SOS_(game)</a>

Include the following requirements:
* The game should have a game board of 5x5.
* The number of SOS points should be counted per player.
* The game ends when the entire board is filled and the winner is declared.
* One should be able to do a rematch.
* Give the option for a player to play against the computer. 
* Print the current state of the game after each turn.
* Extend the game so that the user can specify the size of board that they want to play on (nxm).
* Have a computer so that can play relatively smart. (i.e. if there is a chance to get an SOS, it will go for it!).

Compile Steps:
vim makefile
make
./main.exe

Output:
The board is nxn, how big do you want n to be (1-50)
5
How many players are playing? (1 or 2)
1

 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 0 points, while I have 0 points.

Player 1 enter a square:
3
What symbol do you want to enter in square 3? (S or O)
s

 *   *   * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 0 points, while I have 0 points.
I am putting a S in 1 square

 * S *   * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 0 points, while I have 0 points.

Player 1 enter a square:
2
What symbol do you want to enter in square 2? (S or O)
o

 * S * O * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 0 points.

Player 1 enter a square:
7
What symbol do you want to enter in square 7? (S or O)
o

 * S * O * S *   *   *
 *********************
 *   * O *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 0 points.
I am putting a S in 11 square

 * S * O * S *   *   *
 *********************
 *   * O *   *   *   *
 *********************
 * S *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 1 points.
I am putting a S in 13 square

 * S * O * S *   *   *
 *********************
 *   * O *   *   *   *
 *********************
 * S *   * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 2 points.
I am putting a O in 6 square

 * S * O * S *   *   *
 *********************
 * O * O *   *   *   *
 *********************
 * S *   * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 3 points.
I am putting a O in 8 square

 * S * O * S *   *   *
 *********************
 * O * O * O *   *   *
 *********************
 * S *   * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 4 points.
I am putting a O in 12 square

 * S * O * S *   *   *
 *********************
 * O * O * O *   *   *
 *********************
 * S * O * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 5 points.
I am putting a S in 4 square

 * S * O * S * S *   *
 *********************
 * O * O * O *   *   *
 *********************
 * S * O * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 5 points.

Player 1 enter a square:
9
What symbol do you want to enter in square 9? (S or O)
o

 * S * O * S * S *   *
 *********************
 * O * O * O * O *   *
 *********************
 * S * O * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 5 points.
I am putting a S in 5 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O *   *
 *********************
 * S * O * S *   *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 6 points.
I am putting a S in 14 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O *   *
 *********************
 * S * O * S * S *   *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 7 points.
I am putting a S in 15 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O *   *
 *********************
 * S * O * S * S * S *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 8 points.
I am putting a O in 10 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 *   *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 9 points.
I am putting a S in 16 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S *   *   *   *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 9 points.

Player 1 enter a square:
19
What symbol do you want to enter in square 19? (S or O)
s

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S *   *   * S *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 9 points.
I am putting a S in 17 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S *   * S *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 1 points, while I have 9 points.

Player 1 enter a square:
18
What symbol do you want to enter in square 18? (S or O)
o

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S * O * S *   *
 *********************
 *   *   *   *   *   *
 *********************

Player has 2 points, while I have 9 points.

Player 1 enter a square:
23
What symbol do you want to enter in square 23? (S or O)
s

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S * O * S *   *
 *********************
 *   *   * S *   *   *
 *********************

Player has 3 points, while I have 9 points.

Player 1 enter a square:
22
What symbol do you want to enter in square 22? (S or O)
s

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S * O * S *   *
 *********************
 *   * S * S *   *   *
 *********************

Player has 4 points, while I have 9 points.

Player 1 enter a square:
24
What symbol do you want to enter in square 24? (S or O)
o

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S * O * S *   *
 *********************
 *   * S * S * O *   *
 *********************

Player has 4 points, while I have 9 points.
I am putting a S in 25 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S * O * S *   *
 *********************
 *   * S * S * O * S *
 *********************

Player has 4 points, while I have 10 points.
I am putting a O in 20 square

 * S * O * S * S * S *
 *********************
 * O * O * O * O * O *
 *********************
 * S * O * S * S * S *
 *********************
 * S * S * O * S * O *
 *********************
 *   * S * S * O * S *
 *********************

Player has 4 points, while I have 11 points.
I am putting a S in 21 square
Game done!
I won!
Do you want to play again? (y/n)
n

