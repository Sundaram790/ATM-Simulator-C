#include<stdio.h>

int main()
{
int Balance = 10000;
int Pin = 7909;
int EnteredPin;
int choice;
int Amount; 
int TotalWithdrawn = 0;

printf("=== ATM Machine ===\n");

printf("Enter your 4-digit PIN : "); //Pin verification
scanf("%d", &EnteredPin);
if (EnteredPin != Pin) {
    printf("Incorrect PIN! Access denied.\n");
    return 0;
} 
printf("PIN verified. Welcome!\n");

do {
    printf("\n---Main Menu---\n");
    printf("1. Withdraw Cash\n");
    printf("2.Check Balance\n");
    printf("3. Mini Statement\n");
    printf("4. Exit!\n");
    printf("Choose an option : \n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter amount to withdraw : \n$");
        scanf("%d", &Amount); 
        
        if (Amount <= 0) {
            printf("Invalid amount.\n");
        } else if (Amount % 100 != 0) {
            printf("Amount must be in multiples of $100.\n");
        } else if (Amount > Balance) {
            printf("Insufficient balance.\n");
        } else {
            Balance -= Amount;
            TotalWithdrawn += Amount;
            printf("Please collect your cash : $%d\n", Amount);
            }
            
        } else if (choice == 2) {
            printf("Your current Balance : $%d\n",Balance);
        } else if (choice == 3) {
            printf("===Mini Statement===\n");
            printf("Total withdrawn so far $%d\n", TotalWithdrawn);
            printf("Current Balance : $%d\n", Balance);
        } 
          else if (choice == 4) {
            printf("Thank you for using our ATM. Goodbye!\n");
        } 
        else {
            printf("Invalid choice. Please try again.\n");
        }
        } while (choice !=4);
    

return 0;
}