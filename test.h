#pragma once
#include "dataStructures\list.h"


/*****************************************
 ** ������������ ���������� ���������� ***/
void testSort();

/* ������� ��� ������� ���������� (���������)
 * ��������� �������� (�-� ����������)         */
void sortWrap(void sort(int *, int));


/********************************************************
 ** ������������ ���������� ������ ��������� � ������ ***/
void testStringSearch();

/* ������� ��� ������� ������ ��������� � ������ (���������)
 * ��������� �������� (�-� ������)                            */
void stringSearchWrap(List *searchFunc(char *, char *));


/***********************************
 ** ������������ �������� ������ ***/
void testDataStruct();

// ������������ �����
void testStack();

// ������������ �������
void testQueue();

// ������������ ���� (������� �������)
void testDeque();

// ������������ ���-������ (����������������� ���������)
void testAVLTree();


/************************************
 ** ������������ �������� ������� ***/
void testPN();