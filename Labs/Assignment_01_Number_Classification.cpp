// ============================================================================
// CS201 – Programming Fundamentals
// Assignment: Number Classification from Student ID
// Student Name: ZILL E ALI
// Student ID: BC250211064
// GitHub Repo: github.com/Zilleali/CS201-Programming-Fundamentals
// Compiler: Dev-C++
// ============================================================================

#include <iostream>
using namespace std;

// Function to check if a digit is prime
bool isPrime(int digit) {
    switch (digit) {
        case 2:
        case 3:
        case 5:
        case 7:
            return true;
        default:
            return false;
    }
}

// Function to classify digits and count categories
void classifyDigits(long studentId) {
    int digit;
    int countPrime = 0, countEven = 0, countOdd = 0, countZero = 0;
    long tempId = studentId; // copy for processing

    cout << "\nDigit Classification Details:\n";
    cout << "-----------------------------------\n";

    // Extract digits one by one from right to left
    while (tempId > 0) {
        digit = tempId % 10;  // Get last digit

        if (isPrime(digit)) {
            cout << "Digit " << digit << " is Prime\n";
            countPrime++;
        } 
        else if (digit == 0) {
            cout << "Digit " << digit << " is Zero\n";
            countZero++;
        } 
        else if (digit % 2 == 0) {
            cout << "Digit " << digit << " is Even\n";
            countEven++;
        } 
        else {
            cout << "Digit " << digit << " is Odd\n";
            countOdd++;
        }

        tempId = tempId / 10; // Remove last digit
    }

    // Display summary
    cout << "\n-----------------------------------\n";
    cout << "Summary of Classification:\n";
    cout << "Prime digits: " << countPrime << endl;
    cout << "Even digits: " << countEven << endl;
    cout << "Odd digits: " << countOdd << endl;
    cout << "Zero digits: " << countZero << endl;
    cout << "-----------------------------------\n";
}

// Main function
int main() {
    string studentName = "ZILL E ALI";
    string studentID = "BC250211064";
    long numericPart = 250211064;

    cout << "===================================\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "===================================\n";

    classifyDigits(numericPart);

    return 0;
}
