#include "main.h"

void print_to_98(int n)
{
        int i;
        int tmp;


        if (n < 98)
	{
		for (i = n; i <= 98; i++)
        {
                if (i < 0 && i >= -9)
                {
                        tmp = i * -1;
                        _putchar('-');
                        _putchar(tmp + '0');
                }
                else if (i < -9)
                {
                        tmp = i * -1;
                        _putchar('-');
                        _putchar((tmp / 10) + '0');
                        _putchar((tmp % 10) + '0');
                }
                else if (i < 10 && i >= 0)
                {
                        _putchar(i + '0');
                }
                else if (i >= 10)
                {
                        _putchar((i / 10) + '0');
                        _putchar((i % 10) + '0');
                }
                if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
        }
        _putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				_putchar((i/100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
