#include <stdio.h>
#include <string.h>

// Define the Book structure
typedef struct {
    char title[100];
    char author[100];
    float price;
} Book;

// Function to input book details
Book InputBookDetails() {
    Book book;
    
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0; // Remove trailing newline
    
    printf("Enter book author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0; // Remove trailing newline
    
    printf("Enter book price: ");
    scanf("%f", &book.price);
    getchar(); // Consume newline left in buffer
    
    return book;
}

// Function to find the most expensive and the lowest priced books
void FindPriceExtremes(Book book1, Book book2, Book book3, Book *mostExpensive, Book *lowestPrice) {
    // Initialize with the first book
    *mostExpensive = book1;
    *lowestPrice = book1;
    
    // Compare with the second book
    if (book2.price > mostExpensive->price) {
        *mostExpensive = book2;
    }
    if (book2.price < lowestPrice->price) {
        *lowestPrice = book2;
    }
    
    // Compare with the third book
    if (book3.price > mostExpensive->price) {
        *mostExpensive = book3;
    }
    if (book3.price < lowestPrice->price) {
        *lowestPrice = book3;
    }
}

// Function to display book details
void DisplayBookDetails(Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
}

// Main program
int main() {
    Book book1, book2, book3;
    Book mostExpensive, lowestPrice;
    
    // Input details for three books
    printf("Input details for Book 1:\n");
    book1 = InputBookDetails();
    
    printf("Input details for Book 2:\n");
    book2 = InputBookDetails();
    
    printf("Input details for Book 3:\n");
    book3 = InputBookDetails();
    
    // Find the most expensive and the lowest priced books
    FindPriceExtremes(book1, book2, book3, &mostExpensive, &lowestPrice);
    
    // Display the most expensive book
    printf("Most Expensive Book:\n");
    DisplayBookDetails(mostExpensive);
    
    // Display the lowest priced book
    printf("Lowest Priced Book:\n");
    DisplayBookDetails(lowestPrice);
    
    return 0;
}

