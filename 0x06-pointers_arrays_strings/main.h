#ifndef MAIN_H
#define MAIN_H

/* 
 * _strcat - concatenates two strings
 * @dest: destination string to which src is appended
 * @src: source string to append to dest
 * 
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);

/* 
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string to which src is appended
 * @src: source string to append to dest
 * @n: maximum number of bytes to be used from src
 * 
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);

/* 
 * _strncpy - copies a string
 * @dest: destination string where src is copied
 * @src: source string to copy
 * @n: maximum number of bytes to be copied from src
 * 
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n);

/* 
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * 
 * Return: an integer less than, equal to, or greater than zero if s1 is found
 *         to be less than, to match, or be greater than s2, respectively
 */
int _strcmp(char *s1, char *s2);

/* 
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to reverse
 * @n: number of elements in the array
 * 
 * Return: void
 */
void reverse_array(int *a, int n);

/* 
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to modify
 * 
 * Return: pointer to the modified string
 */
char *string_toupper(char *str);

/* 
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 * 
 * Return: pointer to the modified string
 */
char *cap_string(char *str);

/* 
 * leet - encodes a string into 1337
 * @str: string to encode
 * 
 * Return: pointer to the encoded string
 */
char *leet(char *str);

#endif /* MAIN_H */

