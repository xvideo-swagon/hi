main () {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { //0,1,2...,n-1
        for (int j = 0; j < n-i; j++) {
            if (i % 2 == 0) {
            	printf("*");   		
            } else {
            	printf("+");
            }
        }
        printf("\n");
    }
}
