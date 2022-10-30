#import "tic_tac_toe.h"

int main() {
    TicTacToe game;

    string first_player;
    int end = 0;
    char player_choice;
    int position;

    std::cout << "1|2|3\n"
                 "4|5|6\n"
                 "7|8|9\n";

    do {
        std::cout << "Player 1, Choose X or O:\n";
        std::cin >> first_player;

        game.start_game(first_player);

        while (!game.game_over()) {
            game.display_board();
            std::cout << "Player " << game.get_player() << ", select a position 1-9: \n";
            std::cin >> position;
            game.mark_board(position);
        }

        game.display_board();
        std::cout << "\nWould you like to exit? (Y/N): ";
        std::cin >> player_choice;
        std::cout << "\n";
        if (player_choice == 'Y' || player_choice == 'y') {
            end = 1;
        }
    } while (end != 1);

    return 0;
}