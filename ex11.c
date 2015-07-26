#include <stdio.h>

int main(int argc, char *argv[])
{
	// Go through each string in argv.
	
	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	// Let's make our own array of strings.
	char *states[] = {
		"California",
		"Oregon",
		"Washington",
		"Texas"
	};

	int num_states = 4;
	i = 0;  // Watch for this.
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	// Extra credit.
	
	// Backwards looping for.
	// The tricky part is that for call ./ex11 one two three, argc = 4, but
	// you need to start iterating backwards at argv[3].
	int j;
	for (j = argc - 1; j >= 0; j--) {
		printf("arg %d: %s\n", j, argv[j]);
	}
	
	return 0;
}
