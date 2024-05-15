#pragma once
/**
	@file		Parygina_Class_Word.h
	@brief		������������ ���� ������ Word
	@copyright	����
	@author		�������� �.�.
	@date		15-05-2024
	@version	1.0.0
\par ���������� ������:
	@ref Parygina_Class_Word
\par �������� �����:
	@ref Parygina_Class_Word
*/

/// ����� �������� �������
/** �������� ������ Word � ������ ��� ������ � ����
*/

class Parygina_Class_Word
{
protected:
	char* _word;			///< �����
	int _pageNumber;		///< ������ �������, �� ������� ����� ����������� (�� 1 �� 10)
	char* _numberOfPages;	///< ����� �������
public:
	/// ����������� �� ���������
	/** ������� Word ��� ������������� �����
	*/
	Parygina_Class_Word(void);

	/// ����������� � ����������� ����� ������
	/** ������� Word � �������������� �� ����
	\param word �����
	\param pageNumber ������ �������, �� ������� ����� ����������� (�� 1 �� 10)
	\param numberOfPages ����� �������
	*/
	Parygina_Class_Word(char* word, int PageNumber, char* NumberOfPages);
	
	/// ���������� ����������� �������
	~Parygina_Class_Word(void);

	/// ���������� �����, ������� ����������� ����� ��� �� N ���������
	/** ���� �������� ���, �� ���������� ��������� �� ������
	\return ������ � ������� � ������� (������ �� ����) 
	*/
	char* ShowWords(int _pageNumber);

	/// ���������� ����� � ���������� �������
	/** ���� �������� ���, �� ���������� ��������� �� ������
	\return ������ � ������� � ������� (������ �� ���� � ���������� �������)
	*/
	int AlphabetOrder(char* _word);

	/// ���������� ��� ��������� ����� ������ �������, �� ������� ��� �����������
	/** ���� �������� ���, �� ���������� ��������� �� ������
	\return ������ � ������� � ������� (������ �������)
	*/
	char* ShowPageNumders(char* _word, char* _numberOfPages);
};