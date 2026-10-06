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

  do {
    cout << "Enter 1-3: ";
    cin >> num;
    
    if (num == 1){
      cout << "What is your name?" << endl;
      cin >> name;
      cout << "Hello " << name << "." << endl;

    } else if (num == 2) {
      for (int i=15; i>=0; --i){
        cout << i << " ";
      }
      cout << endl;
    } else if (num == 3) {
      cout << "Exit." << endl;
    } else {
      cout << "Please choose a number from 1-3." << endl;
    }

    } while (num != 3);
  cout << "The Menu is closed.";

  return 0;
}
