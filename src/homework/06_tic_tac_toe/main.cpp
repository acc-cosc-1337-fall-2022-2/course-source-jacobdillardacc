#import "tic_tac_toe.h"

int main() {
    TicTacToe game;

    string first_player;
    char play_again;
    int position;

    cout << "Legal Positions:\n";
    cout << "1|2|3\n"
            "4|5|6\n"
            "7|8|9\n";

    do {
        cout << "Player 1, Choose X or O: ";
        cin >> first_player;
        cout << "\n";

        game.start_game(first_player);

        while (!game.game_over()) {
            game.display_board();
            cout << "\nPlayer " << game.get_player() << ", select a position 1-9: ";
            cin >> position;
            cout << "\n";
            game.mark_board(position);
        }

        game.display_board();

        string winner = game.get_winner();
        if (winner == "X") {
            cout << "\nPlayer X Wins!\n";
        } else if (winner == "O") {
            cout << "\nPlayer O wins!\n";
        } else if (winner == "C") {
            cout << "\nTie!\n";
        }

        cout << "\nPlay again? (Y/N): ";
        cin >> play_again;
        cout << "\n";
    } while (play_again != 'N' && play_again != 'n');

    return 0;
}