#include <stdio.h>
#include <stdlib.h>

char *multiply(char *num1, char *num2);
int is_digit(char *str);
int _strlen(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int _atoi(char *s);
void print_number(char *num);

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	char *result = multiply(argv[1], argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	print_number(result);
	printf("\n");

	free(result);

	return (0);
}

char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int carry, product;

	char *result = _calloc(len_result + 1, sizeof(char));

	if (result == NULL)
		return (NULL);

	for (int i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (int j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}

		result[i] += carry;
	}

	for (int i = 0; i < len_result; i++)
		result[i] += '0';

	return (result);
}

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int _strlen(char *str)
{
	int length = 0;
	while (*str++)
		length++;
	return (length);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}

void print_number(char *num)
{
	while (*num == '0')
		num++;

	if (*num == '\0')
	{
		printf("0");
		return;
	}

	while (*num)
	{
		printf("%c", *num);
		num++;
	}
}

