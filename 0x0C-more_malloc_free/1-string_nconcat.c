#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concat;
unsigned int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1]; len1++)
;
for (len2 = 0; s2[len2]; len2++)
;

if (n >= len2)
n = len2;

concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < n; j++)
concat[i++] = s2[j];

concat[i] = '\0';
return (concat);
}
