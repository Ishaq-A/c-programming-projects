#include <stdio.h>
#include <stdlib.h>

struct Item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *item) {
    printf("Input Item Name: ");
    scanf("%s", item -> itemName);

    printf("Input Item Quantity: ");
    scanf("%d", &item -> quantity);

    printf("Input Item Price: ");
    scanf("%f", &item -> price);

    item -> amount = (float) (item -> quantity) * (item -> price);
}

void printItem(struct Item *item) {
    printf("\nItem Name: %s\n", item -> itemName);
    printf("Item Quantity: %d\n", item -> quantity);
    printf("Item Price: %.2f\n", item -> price);
    printf("Total Amount: %.2f\n", item -> amount);
}

int main() {

    struct Item item;
    struct Item *itemPtr;

    itemPtr = &item;

    itemPtr -> itemName = (char*) malloc(30 * sizeof(char));

    readItem(itemPtr);
    printItem(itemPtr);

    printf("\n");
    return 0;
}

