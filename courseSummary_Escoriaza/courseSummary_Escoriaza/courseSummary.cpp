#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int menuOption = 0;

    // Title
    cout << "Course Summary App ..." << endl;

    while (true) {
        // Menu Of Options
        cout << "Choose one of the following options:" << endl;
        cout << "1. Process Grades Summary Report." << endl;
        cout << "2. Quit" << endl;

        // User inputs Option
        cout << "Option: ";
        cin >> menuOption;

        if (menuOption == 1) {
            string filename;  // Declare filename
            cout << "Enter the Filename: ";
            cin >> filename;

            // Declare file streams
            ifstream inputFile;
            ofstream outputFile;

            // Open files
            inputFile.open(filename);
            outputFile.open("COP1334c.txt");

            // Check to see if file is open
            if (!inputFile.is_open()) {
                cout << "Error opening the input file." << endl;

                // Exit the program due to the error
                return 1;
            }
            else {
                cout << "Processing the file..." << endl;
                // Read and process the file (Add your logic here)
                // ...

                // Close the files
                inputFile.close();
                outputFile.close();

                cout << "Grades summary report has been processed successfully." << endl;
            }
        }
        else if (menuOption == 2) {
            // Quit the Program
            cout << "Goodbye!" << endl;
            break; // Exit loop
        }
        else {
            cout << "Invalid menu option. Please choose 1 or 2." << endl;
        }
    }

    return 0;
}
