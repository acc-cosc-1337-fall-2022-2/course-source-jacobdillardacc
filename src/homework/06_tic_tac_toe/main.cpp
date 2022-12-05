#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() {
    TicTacToe game;
    TicTacToeManager manager;

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
            cout << game;
            cin >> game;
        }

        cout << game;

        string winner = game.get_winner();
        if (winner == "X") {
            cout << "\nPlayer X Wins!\n";
        } else if (winner == "O") {
            cout << "\nPlayer O wins!\n";
        } else if (winner == "C") {
            cout << "\nTie!\n";
        }

        manager.save_games(game);
        int o, x, t;
        manager.get_winner_total(o, x, t);
        cout << "\nO Wins: " << o
             << "\nX Wins: " << x
             << "\nTies:   " << t << "\n";

        cout << "\nPlay again? (Y/N): ";
        cin >> play_again;
        cout << "\n";
        if (play_again == 'N' || play_again == 'n') {
            break;
        }
    } while (play_again != 'N' && play_again != 'n');

    cout << manager;

    return 0;
}