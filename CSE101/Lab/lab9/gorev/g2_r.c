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

void print_line(char c, int num_of_chars)
{
	int i;
	for( i=0; i<num_of_chars; i++)
	{
	printf("%c", c);
	}
	printf("\n");
}

void print_histogram(char c, int values[])
{
	int i;
	for( i = 0; i<len(values); i++)
	{
	print_line(c, values[i]);
	}
}

int len(int array[])
{
	int len=0, i=0;
	while(array[i]>0)
	{
		len++;
		i++;
	}
return len;
}
