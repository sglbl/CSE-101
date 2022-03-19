#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){ //veya char **argv da olur.

//argc parametresi argv'nin eleman sayýsýný gösterir.


	char names[100][100];
	int count = 0;
	int i;
	for( i=0; i<argc-1;i++){

		strcpy(names[i],argv[i+1]); //argv0 programýn adý olan 3. argv1 berk,argv2 suly oluyor.
		count +=1;
	}

	printf("There are %d students.And their names are:\n",count);
	//int i;
	for (i=0;i<argc;i++)
	{
		printf("%s\n",names[i]);
	}

}

// ./str3 ten sonra Berk suly yaz. 2 isim yazdÄ±rÄ±cak.  argv[1]= berk , argv[2]= suly
