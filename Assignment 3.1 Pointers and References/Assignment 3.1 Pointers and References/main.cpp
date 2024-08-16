#include <iostream>  // Preprocessor directive.
using namespace std;

// Function declarations
void checkBalance(int balance); // Check balance function with balance parameters.
void swapBalances(int* userAccount, int* hackerAccount); // Swap function 
void gameEngine(int& userAccount, int& hackerAccount);

int main() // Main function.
{
    int userAccount = 1000000000;  // variable int initialized with the initial balance of the user's account. Name declared here as userAccount.
    int hackerAccount = 0;         // Initial balance of the hacker's account... 

    // Start of the game engine function.
    gameEngine(userAccount, hackerAccount);

    return 0;
}

// Function definition to display the current balance of the criminal user.
void checkBalance(int balance)
{
    cout << "Current Account Balance: $" << balance << endl;
}

// Function definition to swap balances between user and hacker accounts by use of pointers.
void swapBalances(int* userAccount, int* hackerAccount)
{
    int temp = *userAccount;
    *userAccount = *hackerAccount;
    *hackerAccount = temp;
    cout << "Your bank account has been hacked." << endl;
}

// GameEngine function definition passing variables by reference.
void gameEngine(int& userAccount, int& hackerAccount)
{
    int choice;

    // Welcome message for the user followed by a the user choice selection to begin the game engine function.
    cout << "Welcome to Bank of Saturn!" << endl;
    cout << "Please make a selection to view your balance." << endl;

    while (true) // While true loop until user triggers choice 2 break statement to exit the loop. 
    {
        // 2 Choices for the user.  The program will loop until option 2 is selected.  
        cout << endl << "Please choose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Double-check Balance For Good Measure" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) // Conditional statements to give the user 2 options. 
        {
            checkBalance(userAccount);
        }
        else if (choice == 2)  // This second choice calls the swap function.  
        {
            swapBalances(&userAccount, &hackerAccount);  // Function that performs the swap using pointers.
            checkBalance(userAccount);  // Check balance after swap.
            cout << "Hacker Account Balance: $" << hackerAccount << endl;  // Display hacker's new balance.
            break;  // Exit the loop.
        }
        else  // Else statement incase user selects anything other than 1 or 2. 
        {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    cout << " FREEZE!!! The authorities are on their way.  Don't move or the penalties will be higher!" << endl; // Last output comment for the gameEngine.
}
