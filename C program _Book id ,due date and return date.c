#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    // Input bookID, dueDate, and returnDate
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (integer): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate fine amount
    fineAmount = daysOverdue * fineRate;

    // Display output
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}