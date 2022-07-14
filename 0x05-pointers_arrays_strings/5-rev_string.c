#include <stdio.h>
/**
 * rev_string - Function prototype
 * Description: Reverse a string
 * @s: Pointer variable of type char
 * Return: void
 */
void rev_string(char *s)
{
char rev = s[0];
int wcounter = 0; /* This variable would hold the characters counted */
int x;

/* The word count is effectively handled here */
while (s[wcounter] != '\0')
wcounter++;

/* This would ensure that the words are returned in reverse*/
for (x = 0; x < wcounter; x++)
{
wcounter--;

/*
 * Using the pointer
 * we manipulate the results stored in their respective addresses accordingly
*/
rev = s[x];
s[x] = s[wcounter];
s[wcounter] = rev;
}
}
