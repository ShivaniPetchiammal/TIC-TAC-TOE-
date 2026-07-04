#include <iostream>
using namespace std;
char board[3][3];
void initializeBoard()
{
    char ch = '1';
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ch++;
        }
    }
}
void displayBoard()
{
    cout << "\n";
    for(int i = 0; i < 3; i++)
    {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
        if(i != 2)
            cout << "---|---|---" << endl;
    }
    cout << endl;
}
bool checkWin()
{
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;
    return false;
}
bool checkDraw()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }
    return true;
}
int main()
{
    char playAgain;
    do
    {
        initializeBoard();
        char player = 'X';
        while(true)
        {
            displayBoard();
            int choice;
            cout << "Player " << player << ", Enter position (1-9): ";
            cin >> choice;
            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;
            if(choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O')
            {
                cout << "Invalid Move! Try Again.\n";
                continue;
            }
            board[row][col] = player;
            if(checkWin())
            {
                displayBoard();
                cout << "Player " << player << " Wins!\n";
                break;
            }
            if(checkDraw())
            {
                displayBoard();
                cout << "Game Draw!\n";
                break;
            }
            if(player == 'X')
                player = 'O';
            else
                player = 'X';
        }
        cout << "\nPlay Again? (Y/N): ";
        cin >> playAgain;
    } while(playAgain == 'Y' || playAgain == 'y');
   cout << "\nThank You for Playing!\n";
    return 0;
}
