#include "cards.h"

void InitCards(size_t x, CARD_INDEX& cards) {
	
	cards.capacity = x;
	cards.count = 0;
	cards.pB = new BOOK*[x];
	
}
void PrintCards(const CARD_INDEX& cards) {
	for (int i = 0; i < cards.count; i++) {
		PrintBook(*cards.pB[i]);
	}
}
void AddBookToCards(BOOK& book, CARD_INDEX& cards){
	if (cards.count == cards.capacity) {
		
		BOOK** tmppB = new BOOK * [cards.capacity + 1];
		for (int i = 0; i < cards.capacity; i++) {
			tmppB[i] = cards.pB[i];
		}
		delete[] cards.pB;
		cards.pB = tmppB;
		/*	new BOOK * [cards.capacity + 1];
		for (int i = 0; i < cards.capacity; i++) {
			cards.pB[i] = tmppB[i];
		}
		delete[] tmppB;*/
		cards.capacity++;
	}
	cards.count++;
	BOOK* tmpBook = new BOOK;
	*tmpBook = book;
	cards.pB[cards.count - 1] = tmpBook;
	
	}
void DeleteBookFromCards(size_t index, CARD_INDEX& cards) {
	if (index >= cards.count) { printf("Error! The wrong index. \n"); return; }
	cards.count--;
	delete cards.pB[index];
	for (index; index < cards.count; index++) {
		cards.pB[index] = cards.pB[index + 1];
	}
	cards.pB[cards.count] = nullptr;
}
void SortBy(const int& index, CARD_INDEX& cards) {
	switch (index) {
	case 1: {
		for (int i = 0; i < cards.count; i++) {
			for (int j = 0; j < (cards.count - 1); j++) {
				int cmp = strcmp(cards.pB[j]->author, cards.pB[j + 1]->author);
				if (cmp > 0) {
					BOOK* b = cards.pB[j]; // создали дополнительную переменную
					cards.pB[j] = cards.pB[j + 1]; // меняем местами
					cards.pB[j + 1] = b; // значения элементов
				}
			}
		}
		break;
	}
	case 2: {
		for (int i = 0; i < cards.count; i++) {
			for (int j = 0; j < (cards.count - 1); j++) {
				int cmp = strcmp(cards.pB[j]->name, cards.pB[j + 1]->name);
				if (cmp > 0) {
					BOOK* b = cards.pB[j]; // создали дополнительную переменную
					cards.pB[j] = cards.pB[j + 1]; // меняем местами
					cards.pB[j + 1] = b; // значения элементов
				}
			}
		}
		break;
	}
	case 3: {
		for (int i = 0; i < cards.count; i++) {
			for (int j = 0; j < (cards.count - 1); j++) {
				int cmp = cards.pB[j]->year - cards.pB[j + 1]->year;
					if (cmp > 0) {
					BOOK* b = cards.pB[j]; // создали дополнительную переменную
					cards.pB[j] = cards.pB[j + 1]; // меняем местами
					cards.pB[j + 1] = b; // значения элементов
				}
			}
		}
		break;
	}
	case 4: {
		for (int i = 0; i < cards.count; i++) {
			for (int j = 0; j < (cards.count - 1); j++) {
				float cmp = cards.pB[j]->price - cards.pB[j + 1]->price;
				if (cmp > 0) {
					BOOK* b = cards.pB[j]; // создали дополнительную переменную
					cards.pB[j] = cards.pB[j + 1]; // меняем местами
					cards.pB[j + 1] = b; // значения элементов
				}
			}
		}
		break;
	}case 5: {
		for (int i = 0; i < cards.count; i++) {
			for (int j = 0; j < (cards.count - 1); j++) {
				int cmp = cards.pB[j]->category - cards.pB[j + 1]->category;
				if (cmp > 0) {
					BOOK* b = cards.pB[j]; // создали дополнительную переменную
					cards.pB[j] = cards.pB[j + 1]; // меняем местами
					cards.pB[j + 1] = b; // значения элементов
				}
			}
		}
		break;
	}
	case 0: break;
	}
}