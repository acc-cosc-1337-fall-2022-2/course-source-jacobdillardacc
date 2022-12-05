#include "func.h"

int main() {

    char quit = 'N';

    while (quit == 'N' || quit == 'n') {
        int selection;
        cout << "\n          MENU\n"
                "1 - Get GC Content\n"
                "2 - Get DNA Complement\n"
                "3 - Exit\n\n"
                "Menu Selection: ";
        cin >> selection;

        if (selection == 1) {
            string dna;
            cout << "\nEnter DNA string: ";
            cin >> dna;

            for (char &i: dna) {
                i = toupper(i);
            }

            cout << "\n" << get_gc_content(dna) << "\nExit? (Y/N): ";
            cin >> quit;
        }

        else if (selection == 2) {
            string dna;
            cout << "\nEnter DNA string: ";
            cin >> dna;

            for (char &i: dna) {
                i = toupper(i);
            }

            cout << "\n" << get_dna_complement(dna) << "\nExit? (Y/N): ";
            cin >> quit;
        }

        else if (selection == 3) {
            exit(0);
        }
    }
    return 0;
}