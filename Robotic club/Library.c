#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

// Book structure
struct Book {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int available;
};

// Global array to store books
struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function to add a book
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full, cannot add more books.\n");
        return;
    }

    struct Book newBook;
    newBook.id = bookCount + 1;
    printf("Enter book title: ");
    getchar(); // Consume newline character from previous input
    fgets(newBook.title, MAX_TITLE_LENGTH, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove trailing newline

    printf("Enter book author: ");
    fgets(newBook.author, MAX_AUTHOR_LENGTH, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove trailing newline

    newBook.available = 1; // Book is available when added

    library[bookCount] = newBook;
    bookCount++;

    printf("Book added successfully!\n");
}

// Function to search for a book by title
void searchBook() {
    char searchTitle[MAX_TITLE_LENGTH];
    printf("Enter book title to search: ");
    getchar(); // Consume newline character from previous input
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0'; // Remove trailing newline

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, searchTitle) == 0) {
            printf("Book found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nAvailable: %s\n", 
                   library[i].id, library[i].title, library[i].author,
                   library[i].available ? "Yes" : "No");
            return;
        }
    }

    printf("Book not found.\n");
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("List of books in the library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d\nTitle: %s\nAuthor: %s\nAvailable: %s\n\n", 
               library[i].id, library[i].title, library[i].author,
               library[i].available ? "Yes" : "No");
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                displayBooks();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
