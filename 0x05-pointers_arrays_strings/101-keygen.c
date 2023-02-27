#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define PASSWORD_LENGTH 10
/**
 * *generate_password - generates a valid password
 * Return: The generated password
 */
char *generate_password()
{
	char *password = malloc(sizeof(char) * (PASSWORD_LENGTH + 1));
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;
	
	srand(time(NULL));

	while (1)
	{
		for (i = 0; i < PASSWORD_LENGTH; i++)
		{
			password[i] = charset[rand() % strlen(charset)];
		}
		password[PASSWORD_LENGTH] = '\0';
		if (strcspn(password, "0123456789") != PASSWORD_LENGTH) {
			break;
		}
	}
	return (password);
}

/** 
 * main - prints the generated password
 * Return: 0
 */
int main(void)
{
	char *password = generate_password();
	printf("Generated password: %s\n", password);
	free(password);
	return (0);
}
