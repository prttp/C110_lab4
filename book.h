#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include <string.h>

enum eCategory{ PROSE, POETRY , SCIENCE , UNDEF };
struct BOOK {
	char author[30]; //�����
	char name[80];//��������
	unsigned short year;//��� �������
	float price;//����
	eCategory category;//���������
};
void PrintBook(const BOOK& book);
void AddBook(BOOK* book);
