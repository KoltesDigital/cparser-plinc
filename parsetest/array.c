int main(void)
{
	int array[4];
	unsigned st = sizeof(array + 1);
	printf("Res: %d %d %d %d (should be 4, 16, 16, 16 if sizeof(int*)==4)\n",
	       sizeof(array+1), sizeof(array), sizeof(*&array), sizeof( (array) ));
	return 0;
}