#include <iostream>
#include <stdlib.h>
using namespace std;

void display();
char userChoice();
char computerChoice();
void showChoice(char, char);
char makeDecision(char, char);
void showWinner(char);
int repeatation();

int main()
{
    int k = 1;

    while (k == 1)
    {

        display();
        char user = userChoice();
        char computer = computerChoice();
        showChoice(user, computer);
        char winner = makeDecision(user, computer);
        showWinner(winner);
        k = repeatation();
    }cout<<"Game Ended!"<<endl;
}
void display()
{
    cout << "\n\tRock-paper-scissor game!!\n";
    cout << "******************************************\n";
}
char userChoice()
{

    char ch;

    do
    {
        cout << "\tr for rock\n";
        cout << "\tp for paper\n";
        cout << "\ts for scissor\n";
        cout << "\tEnter your choice: ";
        cin >> ch;

    } while (ch != 'r' && ch != 'p' && ch != 's');

    return ch;
}
char computerChoice()
{

    char chh;

    int z = rand() % 3 + 1;
    switch (z)
    {
    case 1:
        chh = 'r';
        break;
    case 2:
        chh = 'p';
        break;
    case 3:
        chh = 's';
        break;
    }
    return chh;
}
void showChoice(char user, char computer)
{

    if (user == 'r')
    {
        cout << "Your choice is rock";
    }
    else if (user == 'p')
    {
        cout << "Your choice is paper";
    }
    else if (user == 's')
    {
        cout << "Your choice is scissor";
    }
    cout << "\n";
    if (computer == 'r')
    {
        cout << "Computer's choice is rock";
    }
    else if (computer == 'p')
    {
        cout << "Computer's choice is paper";
    }
    else if (computer == 's')
    {
        cout << "Computer's choice is scissor";
    }
    cout << "\n";
}
char makeDecision(char user, char computer)
{
    int u = 0, c = 0;

    if (user == 'r' && computer == 's')
    {
        u = 1;
    }
    else if (user == 'p' && computer == 'r')
    {
        u = 1;
    }
    else if (user == 's' && computer == 'p')
    {
        u = 1;
    }
    else if (user == computer)
    {
        u = c = -1;
    }
    else
    {
        c = 1;
    }

    if (c == 1)
    {
        return 'c';
    }
    else if (u == 1)
    {
        return 'u';
    }
    else
    {
        return 'd';
    }
}

void showWinner(char ch)
{
    if (ch == 'u')
    {
        cout << "Congratulations! you Win!";
    }
    else if (ch == 'c')
    {
        cout << "You Lost!";
    }
    else
    {
        cout << "Draw!";
    }
    cout << "\n";
}

int repeatation()
{
    int p;
    cout << "press 1 to retry and 0 to quit: ";
    cin >> p;

    return p;
}