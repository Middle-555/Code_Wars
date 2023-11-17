/*DESCRIPTION:
Given two strings comprised of + and -, return a new string which shows how the two strings interact in the following way:

When positives and positives interact, they remain positive.
When negatives and negatives interact, they remain negative.
But when negatives and positives interact, they become neutral, and are shown as the number 0. */

#include <unistd.h>

void neutralize(const char *s1, const char *s2, char *s3) 
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') 
    {
        if (s1[i] == '-' && s2[i] == '-') 
            s3[i] = '-';
        else if (s1[i] == '+' && s2[i] == '+')
            s3[i] = '+';
        else 
	{
            s3[i] = '0';
     	}
        i++;
    }
    s3[i] = '\0';
}
