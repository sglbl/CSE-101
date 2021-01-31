#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "arduino-serial-lib.c" //It is in the same folder with this c file.
#include "arduino-serial-lib.h" //It is in the same folder with this c file.
int main(){

    /*Before you compile and run the program, arduino Serial-monitor should 
     be close for that c program can connect to non-busy port*/

	int dev =serialport_init("/dev/ttyUSB0",9600); //Port adress.(If yours is different,please change it.)
	int a;
	int choice=-1;
	const char* choice1="a"; //Serial communication with arduino will be provide when choice1 sent to the arduino.
	const char* choice2="b"; //Serial communication with arduino will be provide when choice2 sent to the arduino.
	const char* choice3="c"; //Serial communication with arduino will be provide when choice3 sent to the arduino.
	const char* choice4="d"; //Serial communication with arduino will be provide when choice4 sent to the arduino.
	uint8_t num_4;  //type of unsigned integer of length 8 bits
	
	printf("\n## WELCOME TO GTU ARDUINO LAB         ## \n");
	printf("## STUDENT NAME: SULEYMAN GOLBOL      ## \n");
	printf("## SCHOOL NUMBER: 1801042656          ## \n");
	printf("## PLEASE SELECT FROM THE FOLLOWING   ## \n");
	while (1){
	printf("\n## MENU :  ## \n");
	printf("(1) TURN ON LED ON ARDUINO\n");
	printf("(2) TURN OFF LED ON ARDUINO\n");
	printf("(3) FLASH ARDUINO LED 3 TIMES\n");
	printf("(4) SEND A NUMBER TO ARDUINO TO COMPUTE SQUARE BY ARDUINO\n");
	printf("(0) EXIT \n");
	printf("Your choice?(If not, open S.Monitor for communication.) ");  //(Arduino Monitor should be open to connect.)
	scanf("%d",&choice);


		if(choice==0)
		{
			printf("Goodbye.");
			break;
		}
		else if(choice==1)
		{
			serialport_write(dev,choice1); //inform Arduino that apply choice1
		}
		else if (choice==2)
		{
			serialport_write(dev,choice2); //inform Arduino that apply choice4
		}
		else if(choice==3)
		{
			serialport_write(dev,choice3); //inform Arduino that apply choice3
		}
		else if(choice==4)
		{
			int i;
			char databuffer[256]={0};       //arduino will send the 4.answer to that array.
			printf("Please wait for 1 second."); //for communicate in same time.
			printf("Enter number:");
			scanf("%hhd",&num_4);  //hhd is variable of unsigned integer.
			serialport_write(dev,choice4);     //send choice4(d character to understand) to arduino.
			serialport_writebyte(dev,num_4);   //send number that you entered.
			serialport_read_until(dev,databuffer,'.',256,300);//Read from serial port until "." character seen in arduino.
			//256 is max buffer size and 300 is timeout.
            printf("Ascii Number that sent:%s \n", databuffer);  //databuffer is temporarily stored data.It would be sent from arduino to c as an array. 
        }
        else
        {
        	printf("\nPlease enter a valid number from menu!\n\n");
        }
	}

	return 1; //Returning to menu.

}