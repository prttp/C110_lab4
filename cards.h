#pragma once
#include"book.h"

struct CARD_INDEX
{
	BOOK** pB; //массив указателей на книги
	size_t count; //актуальное количество книг в картотеке
	size_t capacity; //емкость картотеки Цсколько всего зарезервировано пам€ти дл€ указателей => (capacityЦcount) == количество резервных указателей
};

void InitCards(size_t x, CARD_INDEX& cards);
void PrintCards(const CARD_INDEX& cards);
void AddBookToCards(BOOK& book, CARD_INDEX& cards);
void DeleteBookFromCards(size_t index, CARD_INDEX& cards);
void SortBy(const int& index, CARD_INDEX& cards);