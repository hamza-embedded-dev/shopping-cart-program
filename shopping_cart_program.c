#include <stdio.h>
#include <string.h>

int main() {
    // shopping cart program

    // user input variables
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;
    char paymentmethod[10] = "";

    // Get item name from user
    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    // Get price per item
    printf("What is the price for each? ");
    scanf("%f", &price);

    // Get quantity
    printf("How many would you like? ");
    scanf("%d", &quantity);

    // Calculate total
    total = price * quantity;

    // Show cart summary
    printf("\n%d %s added to cart\n", quantity, item);
    printf("Total cart cost %c%.2f\n", currency, total);

    // Payment
    printf("\nPlease select payment method (cash or card): ");
    scanf("%s", paymentmethod);

    printf("\nAnswer waiting...\nIt's completed.\nThanks for paying!\n");

    return 0;
}
