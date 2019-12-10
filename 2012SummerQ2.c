#include <stdio.h>

//A
int diff_str(char* s, char* t)
{
	int i = -1, index = 0;
	while (t[++i] != '\0')
	{
		if (s[index] == t[i] && s[index] != '\0')
			index++;
	}
	if (s[index] == t[i])
		return i - index;
	return -1;
}

//B
int main()
{
	char s[21], t[21], stopSign[] = "stop";
	int i;
	while (1)
	{
		printf("Please enter string 1 (max 20 characters enter stop to exit):\n");
		scanf_s("%s", s, 21);
		for (i = 0; stopSign[i] != '\0'; i++)
			if (s[i] != stopSign[i])
				break;
		if (s[i] == stopSign[i])
			return 0;
		printf("Please enter string 2 (max 20 characters):\n");
		scanf_s("%s", t, 21);

		printf("%d\n", diff_str(s, t));
	}
}