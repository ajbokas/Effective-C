int j;

void f(int i) {
	
	int j = 1;
	i++;
	
	for (int i = 0; i < 2; i++) {
		int j = 2;
		printf("j = %d\n", j);
	}

	printf("j = %d\n", j);
}

void g(int j);