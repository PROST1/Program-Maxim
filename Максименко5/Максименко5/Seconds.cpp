#include "Seconds.h"
const int second_in_hour = 3600;
const min_in_hour = 60;
int seconds(const int hour, const int minutes)
{
	return hour * second_in_hour + minutes * min_in_hour;
}
int seconds2(const int hour, const int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		seconds(hour, minutes);
	}
	else
	{
		throw 1;
	}
}
int seconds3(const unsigned int hour, const unsigned int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		seconds(hour, minutes);
	}
	else
	{
		throw invalid_argument{ "Error! Minutes/hours less then zero, standard exception" };
	}
}
int seconds4(const unsigned int hour, const unsigned int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		seconds(hour, minutes);
	}
	else
	{
		throw empty_class();
	}
}
int seconds5(const unsigned int hour, const unsigned int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		seconds(hour, minutes);
	}
	else
	{
		throw independent_class("Error! Minutes/hours less than 0, independent class with function parameter fields");
	}
}
int seconds6(const unsigned int hour, const unsigned int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		seconds(hour, minutes);
	}
	else
	{
		throw successor_class("Error! Minutes/hours less than 0, successor class");
	}
}