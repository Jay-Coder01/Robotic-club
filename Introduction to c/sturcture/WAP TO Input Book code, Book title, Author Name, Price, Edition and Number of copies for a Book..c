#include <stdio.h>

struct Book {
    int code;
    char title[100];
    char author[100];
    float price;
    char edition[50];
    int copies;
};

int main() {
    struct Book book;

    // Input book details
    printf("Enter Book Code: ");
    scanf("%d", &book.code);

    printf("Enter Book Title: ");
    getchar(); // To consume the newline character left by scanf
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter Price: ");
    scanf("%f", &book.price);

    printf("Enter Edition: ");
    getchar(); // To consume the newline character left by scanf
    fgets(book.edition, sizeof(book.edition), stdin);

    printf("Enter Number of Copies: ");
    scanf("%d", &book.copies);

    // Print book details
    printf("\nBook Details:\n");
    printf("Code: %d\n", book.code);
    printf("Title: %s", book.title);
    printf("Author: %s", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Edition: %s", book.edition);
    printf("Number of Copies: %d\n", book.copies);

    return 0;
}
