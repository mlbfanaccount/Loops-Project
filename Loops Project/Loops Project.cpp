#include <iostream>
#include <string>

using namespace std;


int factorialCalculator();
void numberPyramid();
int sumEvenOdd();
string reverseString();

int main() {
    int choice;
    do {
        cout << "\n========= Interactive Utility Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: cout << "Factorial: " << factorialCalculator() << "\n"; break;
        case 2: numberPyramid(); break;
        case 3: cout << "Sum: " << sumEvenOdd() << "\n"; break;
        case 4: cout << "Reversed String: " << reverseString() << "\n"; break;
        case 5: cout << "Cya!\n"; break;
        default: cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

int factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return -1;
    }

    long long factorial = 1;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    return factorial;
}

void numberPyramid() {

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int sumEvenOdd() {
    int n, choice, sum = 0;
    cout << "Choose (1) Sum of Even numbers or (2) Sum of Odd numbers: ";
    cin >> choice;
    cout << "Enter the upper limit: ";
    cin >> n;

    int i = (choice == 1) ? 2 : 1;
    do {
        sum += i;
        i += 2;
    } while (i <= n);

    return sum;
}

string reverseString() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;

    int i = str.length() - 1;
    while (i >= 0) {
        reversed += str[i];
        i--;
    }
    return reversed;
}
