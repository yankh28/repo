int factorial(int a){
	int b=1;
	if (a==0) printf("\tФакториал %d!=%d",a,b);
	else {
	for (int i=1; i<=a; i++)
		b*=i;
	//printf("\tФакториал %d!=%d",a,b);
	return b;
  }
