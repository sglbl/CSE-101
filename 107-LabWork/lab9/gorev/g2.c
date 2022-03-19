#include<stdio.h>
void print_histogram(char c,int vals[]);
int len(int arr[]);
void print_line(char c,int num_of_chars);

int main()
{
	
	int values[100],val=1, count=0;
	printf("Enter positive values. Enter a negative value to print the histogram.\n");
	
	do                       //direkt yapiyor. while'ýn içindeki dogru oldugu muddetce devam ediyor.
	{
		printf("Enter a value:");
		scanf("%d", &val);
		values[count] = val;
		count++;
	}while (val > 0);
	print_histogram('*',values);  //calling my function.
}
	



void print_line(char c, int num_of_chars){
	int i,j,val;
	
	for(j=0;j<num_of_chars;j++){
		printf("*");
	}
}


void print_histogram(char c, int values[]){
	int i,j,val;
		for(i=0; values[i]>0; i++){
					print_line(c,values[i]);  //PRINT_LINE'I cagiriyorum.
			printf("\n");
		}
	
}

int len(int array[]){
	
	int uzunluk=0,i;
}
	

