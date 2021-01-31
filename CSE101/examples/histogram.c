#include<stdio.h>
void print_histogram(char c, int vals[]);
int len(int arr[]);
void print_line(char c, int num_of_chars);

int main()
{
	int values[100], val=1, count=0;
	printf("Enter positive values. Enter a negative value to print the histogram.\n");
	do
	{
		printf("Enter a value:");
		scanf("%d", &val);
		values[count] = val;
		count++;
	}while(val > 0);
	print_histogram('*', values);
}

void print_histogram(char c, int values[])
{
	for(int i=0;i<len(values);i++){
		print_line(c,values[i]);/////
		printf("\n");
	}
}

void print_line(char c, int num_of_chars)
{
	for(int j=0;j<num_of_chars;j++){
		printf("%c", c);
	}
}

int len(int array[])
{
	int k=0,count2=0;
	while(array[k] > 0){
		k++;
		count2++;
	}
	return count2;
}
