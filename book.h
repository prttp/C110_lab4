#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include <string.h>

enum eCategory{ PROSE, POETRY , SCIENCE , UNDEF };
struct BOOK {
	char author[30]; //автор
	char name[80];//название
	unsigned short year;//год издания
	float price;//цена
	eCategory category;//категория
};
void PrintBook(const BOOK& book);
void AddBook(BOOK* book);
