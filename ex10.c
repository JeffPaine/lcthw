#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// Go through each string in argv.
	// Why am I skipping argv[0]?
	for(i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// Let's make our own array of strings.
	char *states[] = {
		"California",
		"Oregon",
		"Washington",
		"Texas"
	};
	int num_states = 4;
	int j = 0;

	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
		// // Print out all chars.
		// for(j = 0; j < strlen(states[i]); j++){
		// 	printf("index %d: %c\n", j, states[i][j]);
		// }
	}

	return 0;
}
