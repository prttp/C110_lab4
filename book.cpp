#include "book.h"

void PrintBook(const BOOK& book) {
	printf("Author: %s", book.author);
	printf("\nTitle: %s", book.name);
	printf("\nYear: %d", book.year);
	printf("\nPrice: %.2f", book.price);
	switch (book.category) {
	case 0: printf("\nCategory: Prose"); break;
	case 1: printf("\nCategory: Poetry"); break;
	case 2: printf("\nCategory: Science"); break;
	case 3: printf("\nCategory: Undefined"); break;
	}
	printf("\n____________________________\n");
}
void AddBook(BOOK* book) {
	printf("Enter the author's name:\n");
	scanf("%s", book->author);
	printf("Enter the book's title:\n");
	scanf("%s", book->name);
	do {
		printf("Enter the year of the publication:\n");
		scanf_s("%i", &book->year);
		if (book->year < 500 || book->year > 2021) { printf("Incorrect input\n"); };
	} while (book->year < 500 || book->year > 2021); //проверка
	do {
		printf("Enter the book's price:\n");
		scanf_s("%f", &book->price);
		if (book->price < 0) { printf("Incorrect input\n"); };
	} while (book->price < 0); //проверка
	printf("Enter the book's category: Prose(0), Poetry(1), Science(2) or Undefined(3):\n");
	scanf_s("%d", &book->category);
	if (book->category < 0 || book->category > 2) { book->category = UNDEF; }; //если категория не представлена - undef
}