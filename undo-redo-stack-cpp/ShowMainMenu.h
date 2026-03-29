#include"Global.h"

class ShowMainMenu
{
private:
    enum enChoice { eWrite = 1, eUndo, eRedo, eDisplay, eExit };

    static void PerformMainMenueOption(enChoice choice)
    {
        cin.ignore();
        string input;

        switch (choice) {
        case enChoice::eWrite:
            cout << "Enter text to add: ";
            getline(cin, input);
            _editor.write(input);
            break;
        case enChoice::eUndo:
            _editor.undo();
            break;
        case enChoice::eRedo:
            _editor.redo();
            break;
        case enChoice::eDisplay:
            _editor.displayText();
            break;
        case enChoice::eExit:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    static enChoice ReadChoice()
    {
        short choice;
        do
        {
            cin >> choice;
            if (choice < 1 || choice > 5)
                cout << "Not in range, try again : ";
        } while (choice < 1 || choice > 5);
        return static_cast<enChoice>(choice);
    }

public:
    static void showMenu() {
        enChoice choice;
        do {
            system("cls");
            cout << "\n====================================\n";
            cout << "      UNDO/REDO TEXT EDITOR       \n";
            cout << "====================================\n";
            cout << " [1] Write New Text\n";
            cout << " [2] Undo\n";
            cout << " [3] Redo\n";
            cout << " [4] Display Text\n";
            cout << " [5] Exit\n";
            cout << "====================================\n";
            cout << "Choose an option: ";

            choice = ReadChoice();
            PerformMainMenueOption(choice);

            if (choice != enChoice::eExit) {
                cout << "\nPress Enter to return to the main menu...";
                cin.get();
            }
        } while (choice != enChoice::eExit);
    }
};