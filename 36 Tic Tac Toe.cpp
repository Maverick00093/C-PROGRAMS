//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"       0     1     2   "<<endl<<endl;
//	cout<<"0   | 0 0 | 0 1 | 0 2 |"<<endl;
//	cout<<"    +-----x-----x-----+"<<endl;
//	cout<<"1   | 1 0 | 1 1 | 1 2 |"<<endl;
//	cout<<"    +-----x-----x-----+"<<endl;
//	cout<<"2   | 2 0 | 2 1 | 2 2 |"<<endl<<endl;
//	int i,j;
//	int a[3][3]={
//	{1,2,3},
//	{4,5,6},
//	{7,8,9}
//	};
//	for(i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//			cout<<a[i][j];
//		}
//		cout<<endl;
//	}
//}
//=====================================================================================================
#include <iostream>
using namespace std;

// Function to draw the game board
void drawBoard(char board[3][3]) {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

// Function to check if a player has won
bool checkWin(char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3] = {
	        {' ', ' ', ' '}, 
	        {' ', ' ', ' '}, 
	        {' ', ' ', ' '}
	};
    char player = 'X';
    int row, col;

    while (true) {
        drawBoard(board);
        cout << "Player " << player << ", enter row and column (1-3): ";
        cin >> row >> col;
        row--; col--; // Convert to 0-based index

        if (board[row][col] != ' ') {
            cout << "Invalid move, try again." << endl;
            continue;
        }

        board[row][col] = player;

        if (checkWin(board, player)) {
            drawBoard(board);
            cout << "Player " << player << " wins!" << endl;
            break;
        } else if (checkDraw(board)) {
            drawBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
