# dinamicProgramming-choiceToBet
dinamic Programming - choice algorithm for bet game
Bet games are based on choosing. This solves one type of bet game: here we start with an integer V inside an interval [0, X] and the player needs to choose if they are going to sum or subtract the next value to the current amount. The goal is to acquire the largest number possible, but never leave the interval. If you get something higher than a minimum M, you win.

The entry here needs to be a txt file like this:

N //the number of test cases that are used in this entry

S V X M //the size of the vector, the initial value, the max value and the minimum value to win

a1 a2 ... aS //the sequence of values in the vector //the last two lines repeat N times with different values

The output is S if you can win the game or N if you cannot, followed by the largest value you can achieve here.

This was also a college project.
