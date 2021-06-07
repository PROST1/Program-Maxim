#pragma once
#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "Independent_class.h"
#include "Successor_class.h"

/**
* \brief Функция считающая количество секунд 
*/
int seconds(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, спецификатор throw()
*/
int seconds2(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, с конкретной спецификацией с подходящим стандартным исключением
*/
int seconds3(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
*/
int seconds4(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, со спецификацией с собственным реализованным исключением. (исключение как независимый класс с полями-параметрами функции)
*/
int seconds5(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключени¤ с полями)
*/
int seconds6(const int hour, const int minutes);