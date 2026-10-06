#include <iostream>
#include <string>

// Homework 6 — Betsy Caudel
// CIS 5 Week 06 · Menu

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

int num = 0;
string name = "";
int countdown = 0;

// Prints what each number option does.
cout << "=== Menu ===" << endl;
    cout << "1. Print 'Hello {user}'" << endl;
    cout << "2. Count down from a number." << endl;
    cout << "3. Exit Program." << endl;

  do {
    cout << "Enter 1-3: ";
    cin >> num;
    
    if (num == 1){
      cout << "What is your name?" << endl;
      cin >> name;
      cout << "Hello " << name << "." << endl;

    } else if (num == 2) {
      cout << "Choose a number to count down from." << endl;
      cin >> countdown;

      for (int i=countdown; i>=0; --i){
        cout << i << " ";
      }
      cout << endl;
    } else if (num == 3) {
      cout << "Exiting." << endl;
    } else {
      cout << "Please choose a number from 1-3." << endl;
    }

    } while (num != 3);
  cout << "The Menu is closed." << endl;

  return 0;
}
