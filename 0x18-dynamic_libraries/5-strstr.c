/**
 * _strstr - searchs for a substr in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the first occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;

	while (*(needle + i) != '\0')
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(needle + i) == *(haystack + j))
			{
				k = 1;
				while (*(needle + i + k) != '\0')
				{
					if (*(needle + i + k) == *(haystack + j + k))
					{
						k++;
						continue;
					}
					else
					{
						break;
					}
				}
				if (*(needle + i + k) == *(haystack + j + k))
				{
					return ((haystack + j));
				}
				break;
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
