#include <iostream>
using namespace std;

int gamesPlayed = 0, playerOneWins = 0, playerTwoWins = 0;

enum choice
{
    rock,
    paper,
    scissors
};
// function to display results
void displayResults()
{
    cout << "Total games played: " << gamesPlayed << endl;
    cout << "Player One won: " << playerOneWins << " times." << endl;
    cout << "Player Two won: " << playerTwoWins << " times." << endl;
}
// function to display rules
void displayRules()
{
    cout << "  Welcome to the game of Rock, Paper, "
         << "and Scissors." << endl;
    cout << "  This is a game for two players. For each "
         << "game, each" << endl;
    cout << " player selects one of the objects, Rock, "
         << "Paper or Scissors." << endl;
    cout << " The rules for winning the game are: " << endl;
    cout << "1. If both players selects the same object, it "
         << "is a tie." << endl;
    cout << "2. Rock breaks Scissors: So player who selects "
         << "Rock wins." << endl;
    cout << "3. Paper covers Rock: So player who selects "
         << "Paper wins." << endl;
    cout << "4. Scissors cuts Paper: So player who selects "
         << "Scissors wins." << endl
         << endl;
    cout << "Enter R or r to select Rock, P or p to select "
         << "Paper, and S or s to select Scissors." << endl;
}
bool validSelection(char c)
{
    return (c == 'r' || c == 'R' || c == 's' || c == 'S' || c == 'p' || c == 'P');
}
// Function to determine the winner
void gameResult(choice c1, choice c2)
{
    // dtermine if we have a tie
    if (c1 == c2)
    {
        cout << "It's a tie!" << endl;
    }

    // Cases where Player one wins
    else if ((c1 == rock && c2 == scissors) ||
             (c1 == paper && c2 == rock) ||
             (c1 == scissors && c2 == paper))
    {
        cout << "Player One wins this round!" << endl;
        playerOneWins += 1;
    }

    // Player two wins
    else
    {
        cout << "Player Two wins this round!" << endl;
        playerTwoWins += 1;
    }
    gamesPlayed++;
}
choice determineChoice(char c)
{
    if (c == 'r' || c == 'R')
        return rock;
    else if (c == 'p' || c == 'P')
        return paper;
    else
        return scissors;
}

int main()
{
    displayRules();
    char playerOneC, playerTwoC;

    while (true)
    {
        // Ask for Player 1 input
        cout << "Player one, please enter your choice (r for Rock, s for Scissors, p for Paper), and Player 2 looks away: ";
        cin >> playerOneC;

        // Ask for Player 2 input
        cout << "Player two, please enter your choice (r for Rock, s for Scissors, p for Paper): ";
        cin >> playerTwoC;

        // detrmine if we have valid selections
        if (!validSelection(playerOneC) || !validSelection(playerTwoC))
        {
            cout << "One or more players entered an invalid choice, please try again." << endl;
            continue;
        }

        // Map the inputs to the enum values
        choice p1 = determineChoice(playerOneC);
        choice p2 = determineChoice(playerTwoC);

        // Determine and print the winner
        gameResult(p1, p2);

        // Ask if they want to play another game
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y')
        {
            break;
        }
    }

    // Print the final game stats
    displayResults();
    return 0;
}
