/* main.c */
#include <stdio.h>
#include <string.h>

int remove_even_chars(char *str) {
		int len = strlen(str);
		int count = 0;
		int j = 0;

		for (int i = 0; i < len; i++) {
				if (i % 2 != 0) {
						str[j++] = str[i];
				} else {
						count++;
				}
		}

		str[j] = '\0';
		return count;
}

int main() {
		char str[100];

		printf("Enter a string: ");
		fgets(str, sizeof(str), stdin);

		size_t len = strlen(str);
		if (len > 0 && str[len - 1] == '\n') {
				str[len - 1] = '\0';
		}

		printf("Original string: \"%s\"\n", str);

		int removed_count = remove_even_chars(str);
		printf("Modified string: \"%s\"\n", str);
		printf("Number of removed characters: %d\n", removed_count);

		return 0;
}