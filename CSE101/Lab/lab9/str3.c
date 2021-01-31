#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){

	char names[100][100];
	int count = 0;
	for(int i=0; i<argc-1;i++){

		strcpy(names[i],argv[i+1]);
		count +=1;
	}

	printf("There are %d students.And their names are:\n",count);
	for (int i=0;i<argc;i++)
	{
		printf("%s\n",names[i]);
	}

}

// ./str3 ten sonra Berk suly yaz. 2 isim yazdırıcak.  argv[1]= berk , argv[2]= suly
