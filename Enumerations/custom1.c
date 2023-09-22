#include <stdio.h>

// Define an enumeration representing suit values in a deck of cards
enum Suit {
    Hearts, Diamonds, Clubs, Spades
};

int main() {
    int suitChoice;

    printf("Enter a suit choice (0 for Hearts, 1 for Diamonds, 2 for Clubs, 3 for Spades): ");
    scanf("%d", &suitChoice);

    if (suitChoice >= Hearts && suitChoice <= Spades) {
        printf("Selected suit: ");
        switch (suitChoice) {
            case Hearts:
                printf("Hearts\n");
                break;
            case Diamonds:
                printf("Diamonds\n");
                break;
            case Clubs:
                printf("Clubs\n");
                break;
            case Spades:
                printf("Spades\n");
                break;
        }
    } else {
        printf("Invalid suit choice.\n");
    }

    return 0;
}
