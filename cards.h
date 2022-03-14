#pragma once
#include"book.h"

struct CARD_INDEX
{
	BOOK** pB; //������ ���������� �� �����
	size_t count; //���������� ���������� ���� � ���������
	size_t capacity; //������� ��������� �������� ����� ��������������� ������ ��� ���������� => (capacity�count) == ���������� ��������� ����������
};

void InitCards(size_t x, CARD_INDEX& cards);
void PrintCards(const CARD_INDEX& cards);
void AddBookToCards(BOOK& book, CARD_INDEX& cards);
void DeleteBookFromCards(size_t index, CARD_INDEX& cards);
void SortBy(const int& index, CARD_INDEX& cards);