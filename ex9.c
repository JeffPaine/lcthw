#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	// char name[4] = {'a'};
	char *name = "Zed";

	// First, print them out raw.
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	// Setup the numbers.
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// Setup the name.
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	// Then print them out initialized.
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	// Another way to use name.
	char *another = "Zed";

	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

	// Extra credit.
	numbers[0] = 'T';
	numbers[1] = 'E';
	numbers[2] = 83;
	numbers[3] = 'T';
	printf("numbers: %c %c %c %c\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	name[0] = 100;
	name[1] = 101;
	name[2] = 102;
	// If we assign to name[3] it overwrites the \0 string end indicator.
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name each: %d %d %d %d\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	// If an array of characters is 4 bytes long, and an integer is 4 bytes
	// long, then can you treat the whole name array like it's just an
	// integer? How might you accomplish this crazy hack?
	int combined_name = name[0] + name[1] + name[2];
	printf("sizeof name: %ld\n", sizeof(name));
	printf("sizeof combined_name: %ld\n", sizeof(combined_name));
	printf("combined_name: %d\n", combined_name);
	return 0;
}
