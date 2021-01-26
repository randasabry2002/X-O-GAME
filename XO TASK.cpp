#include<iostream>
#include<string>
#include<string.h>
using namespace std;
char box[10]{'0','1','2','3','4','5','6','7','8','9' };
void board();
void markingboard( int, char);
int winner ();
int main() {
	int choise,player=1,i;
	char mark;
    do {
        board();
        player = (player % 2) ? 1 : 2;
        cout << "player" << player << "..enter a number:";
        cin >> choise;
        mark = (player == 1) ? 'X' : 'O';
        markingboard(choise, mark);
        i = winner();
        player++;

    } while (i == -1);
    board();
    if (i == 1)
        cout << "==>\aplayer"<<" "<< --player<<" "<< "win"<<endl;
    else
        cout << "==>\adraw"<<endl;
    
    return 0;

}
void board() {
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

    cout << "     |     |     " << endl << endl;
}
void markingboard( int choise ,char mark ) {
    if (choise == 1 && box[1] == '1')
        box[1] = mark;
    else if (choise == 2 && box[2] == '2')
        box[2] = mark;
    else if (choise == 3 && box[3] == '3')
        box[3] = mark;
    else  if (choise == 4 && box[4] == '4')
        box[4] = mark;
    else  if (choise == 5 && box[5] == '5')
        box[5] = mark;
    else if (choise == 6 && box[6] == '6')
        box[6] = mark;
    else  if (choise == 7&& box[7] == '7')
        box[7] = mark;
    else if (choise == 8 && box[8] == '8')
        box[8] = mark;
    else  if (choise == 9 && box[9] == '9')
        box[9] = mark;
    else {
        cout << "Invalid move"<<endl;
        system("pause");
    }
  
}
int winner() 
{
    if (box[1] == box[2] && box[2] == box[3]) return 1;
    else  if (box[4] == box[5] && box[5] == box[6]) return 1;
    else if (box[7] == box[8] && box[8] == box[9]) return 1;
    else if (box[1] == box[4] && box[4] == box[7]) return 1;
    else if (box[2] == box[5] && box[5] == box[8]) return 1;
    else if (box[3] == box[6] && box[6] == box[9]) return 1;
    else if (box[1] == box[5] && box[5] == box[9]) return 1;
    else if (box[3] == box[5] && box[5] == box[7]) return 1;
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9') return 0;
    else 
        return -1;
}



