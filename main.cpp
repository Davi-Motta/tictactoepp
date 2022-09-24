#include <iostream>
using namespace std;
char pos[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int victory = 0;
int input = 0;
int playerIndex = 5;
char player = 'X';
void board()
{
    cout << "\n \nPick a Number\n" << endl;
    cout << " " << pos[0] << " | " << pos[1] << " | " << pos[2] << endl;
    cout << "-----------" << endl;
    cout << " " << pos[3] << " | " << pos[4] << " | " << pos[5] << endl;
    cout << "-----------" << endl;
    cout << " " << pos[6] << " | " << pos[7] << " | " << pos[8] << "\n" << endl;
}
int winCondition()
{
    if (pos[0] == pos[1] && pos[1] == pos[2])
    {
        return 1;
    }
    else if (pos[3] == pos[4] && pos[4] == pos[5])
    {
        return 1;
    }
    else if (pos[6] == pos[7] && pos[7] == pos[8])
    {
        return 1;
    }
    else if (pos[0] == pos[3] && pos[3] == pos[6])
    {
        return 1;
    }
    else if (pos[1] == pos[4] && pos[4] == pos[7])
    {
        return 1;
    }
    else if (pos[2] == pos[5] && pos[5] == pos[8])
    {
        return 1;
    }
    else if (pos[0] == pos[4] && pos[4] == pos[8])
    {
        return 1;
    }
    else if (pos[6] == pos[4] && pos[4] == pos[2])
    {
        return 1;
    }
  return 0;
}
int main()
{
    board();
    while (victory == 0){
        player = (playerIndex % 2) ? 'X' : 'O';
        cin >> input;
        pos[input - 1] = player;
        victory = winCondition();
        board();
        playerIndex++;
    }
    return 0;
}
