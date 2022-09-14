#include "main.h"
/**
 * _abs - function to print value
 * @qabs: the input value
 * Return: Nothing
 */
int _abs(int qabs)
{
	int val;

	if (qabs >= 0)
	{
		val = qabs * 1;
		return (val);
	}
	else
	{
		val = qabs * -1;
		return (val);
	}
}
