#pragma once
/**
	@file		Parygina_Class_Word.h
	@brief		Заголовочный файл класса Word
	@copyright	Вогу
	@author		Парыгина А.Д.
	@date		15-05-2024
	@version	1.0.0
\par Использует классы:
	@ref Parygina_Class_Word
\par Содержит класс:
	@ref Parygina_Class_Word
*/

/// Класс описания персоны
/** Содержит данные Word и методы для работы с ними
*/

class Parygina_Class_Word
{
protected:
	char* _word;			///< Слово
	int _pageNumber;		///< Номера страниц, на которых слово встречается (от 1 до 10)
	char* _numberOfPages;	///< Число страниц
public:
	/// Конструктор по умолчанию
	/** Создает Word без инициализации полей
	*/
	Parygina_Class_Word(void);

	/// Конструктор с заполнением полей класса
	/** Создает Word и инициализирует ее поля
	\param word слово
	\param pageNumber номера страниц, на которых слово встречается (от 1 до 10)
	\param numberOfPages число страниц
	*/
	Parygina_Class_Word(char* word, int PageNumber, char* NumberOfPages);
	
	/// Деструктор освобождает ресурсы
	~Parygina_Class_Word(void);

	/// Показывает слова, которые встречаются более чем на N страницах
	/** Если сведений нет, то возвращает сообщение об ошибке
	\return строку с данными в формате (массив из слов) 
	*/
	char* ShowWords(int _pageNumber);

	/// Возвращает слова в алфавитном порядке
	/** Если сведений нет, то возвращает сообщение об ошибке
	\return строку с данными в формате (массив из слов в алфавитном порядке)
	*/
	int AlphabetOrder(char* _word);

	/// Возвращает для заданного слова номера страниц, на которых оно встречается
	/** Если сведений нет, то возвращает сообщение об ошибке
	\return строку с данными в формате (номера страниц)
	*/
	char* ShowPageNumders(char* _word, char* _numberOfPages);
};