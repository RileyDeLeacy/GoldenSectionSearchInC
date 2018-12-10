#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <program.h>
#define PI 3.14159265
float a1;
float a2;
float a3;
float a4;
float a5;
int i;
float numberArray[626];
int f;

main(int argc, char** argv){
	FILE *myFile;
	myFile = fopen("ass_numbers.txt", "r");
	
	for (i = 0; i < 627; i++){
        	fscanf(myFile, "%f", &numberArray[i]);
	}
	if(argv[1]==NULL){
		printf("No function number input\n");
		printf("To test function 1 type ./runprogram 1\n");
		return 1;
	}
	f = atoi(argv[1]);
	if(f==1){
		a1=0.015;
		a2=0.8;
		a3=310;
		a4=3.4;
		a5=0.05;
		a1=gss(&func1a1,0.0,315,1000);
		a2=gss(&func1a2,0.0,315,1000);
		a3=gss(&func1a3,0.0,315,1000);
		a4=gss(&func1a4,0.0,315,1000);
		a5=gss(&func1a5,0.0,315,1000);
		printf("this is the first function\n");
	}else if(f==2){
		a1=1.2/3;
                a2=1.3;
                a3=310;
                a4=3.0;
                a5=0.12;
		a1=gss(&func2a1,0.0,315,1000);
                a2=gss(&func2a2,0.0,20,1000);
                a3=gss(&func2a3,0.0,400,1000);
                a4=gss(&func2a4,0.0,7,1000);
                a5=gss(&func2a5,0.0,1,1000);
                //printf("0:%f 1:%f 4:%f 315:%f\n",func2a2(0),func2a2(1),func2a2(4),func2a2(315));
		printf("this is the second function\n");
	}else if(f==3){
		a1=270.0;
                a2=38.0;
                a3=0.025;
                a4=3.0;
                a5=0.13;
		a1=gss(&func3a1,0.0,600,1000);
                a2=gss(&func3a2,0.0,100,1000);
                a3=gss(&func3a3,0.0,1,1000);
                a4=gss(&func3a4,0.0,40,1000);
                a5=gss(&func3a5,0.0,40,1000);
                //printf("0:%f 100:%f 200:%f 280:%f 300:%f\n", func3a1(0), func3a1(100), func3a1(200), func3a1(280), func3a1(300));
		printf("this is the third function\n");
	}else{
		printf("A valid function number was not input\nEither input 1, 2 or 3 after ./runprogram\n");
		return 1;
	}
	printf("a1:%f a2:%f a3:%f a4:%f a5:%f\n",a1, a2, a3, a4, a5);
	//printf("argc:%d argv[1]:%s\n",argc,argv[1]);
	return 0;
}


