#include<iostream> 
using namespace std;

#include <iostream>
using namespace std;

void calculateFine() {
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;
    
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (in days, e.g., day of the month): ";
    cin >> dueDate;
    cout << "Enter Return Date (in days, e.g., day of the month): ";
    cin >> returnDate;
    
    daysOverdue = returnDate - dueDate;
    
    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = fineRate * daysOverdue;
    } else {
        fineRate = 0;
        fineAmount = 0;
        daysOverdue = 0;
    }
    
    
    cout << "\nLibrary Fine Details" << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate: Ksh. " << fineRate << " per day" << endl;
    cout << "Total Fine Amount: Ksh. " << fineAmount << endl;
}

int main() {
    calculateFine(); 
    return 0;
}
