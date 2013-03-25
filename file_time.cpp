/** 
Программа использует 4 блока для тестирования производительности ПК
В первом блоке числа натуральные, блок состоит из 11 циклом, переменная
остается постоянной. 
Во втором блоке числа натуральные, добавляются разные переменные.
В третьем блоке числа вещественные, снова используется одна переменная
В четвертом блоке числа вещественные, переменные разные.
Блок тест содержит котрольные замеры по времени.
В конце блока тест содержится модуль вывода в файл отчета
который создается или располагается на диске D
Для формирования цепочки вывода используется массив, который затем
передается на запись
**/

#include <stdio.h>
#include <ctime>
#include <conio.h>
#define k 11 
#define N 1000000000

int main (){
	float cel[k],cel1[k],vesh[k],vesh1[k];
	char* filename = "file.txt";
    FILE* fp = fopen(filename, "w+");
	int a,i;
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	float d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
	float d;
	float vremya_Start,vremya_Finish,rezultat;
	
//******************************************************************************************************************************
//****************************BLOCK 1******************BLOCK 1*********************************BLOCK 1**************************	
//******************************************************************************************************************************	
printf("\n*********************************************\n");
//***********************************		
	a=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("01 a+b t=%10.9f \n",rezultat);
	cel[0]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("02 a+b t=%10.9f \n",rezultat);
	cel[1]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("03 a+b t=%10.9f \n",rezultat);
	cel[2]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("04 a+b t=%10.9f \n",rezultat);
	cel[3]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("05 a+b t=%10.9f \n",rezultat);
	cel[4]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("06 a+b t=%10.9f \n",rezultat);
	cel[5]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("07 a+b t=%10.9f \n",rezultat);
	cel[6]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("08 a+b t=%10.9f \n",rezultat);
	cel[7]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("09 a+b t=%10.9f \n",rezultat);
	cel[8]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("10 a+b t=%10.9f \n",rezultat);
	cel[9]=rezultat;
//***********************************
	a=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("11 a+b t=%10.9f \n",rezultat);
	cel[10]=rezultat;
//***********************************
//******************************************************************************************************************************
//****************************BLOCK 1******************BLOCK 1*********************************BLOCK 1**************************	
//******************************************************************************************************************************	



//******************************************************************************************************************************
//****************************BLOCK 2******************BLOCK 2*********************************BLOCK 2**************************	
//******************************************************************************************************************************	
//***********************************
printf("\n*********************************************\n");	
	a=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("01 a+b t=%10.9f \n",rezultat);
	cel1[0]=rezultat;
//***********************************
	a=0;a1=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("02 a+b t=%10.9f \n",rezultat);
	cel1[1]=rezultat;
//***********************************
	a=0;a1=0;a2=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("03 a+b t=%10.9f \n",rezultat);
	cel1[2]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("04 a+b t=%10.9f \n",rezultat);
	cel1[3]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("05 a+b t=%10.9f \n",rezultat);
	cel1[4]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;a5=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	a5=a5+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("06 a+b t=%10.9f \n",rezultat);
	cel1[5]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	a5=a5+3;
	a6=a6+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("07 a+b t=%10.9f \n",rezultat);
	cel1[6]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	a5=a5+3;
	a6=a6+3;
	a7=a7+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("08 a+b t=%10.9f \n",rezultat);
	cel1[7]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	a5=a5+3;
	a6=a6+3;
	a7=a7+3;
	a8=a8+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("09 a+b t=%10.9f \n",rezultat);
	cel1[8]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;a9=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	a5=a5+3;
	a6=a6+3;
	a7=a7+3;
	a8=a8+3;
	a9=a9+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("10 a+b t=%10.9f \n",rezultat);
	cel1[9]=rezultat;
//***********************************
	a=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;a9=0;a10=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	a=a+3;
	a1=a1+3;
	a2=a2+3;
	a3=a3+3;
	a4=a4+3;
	a5=a5+3;
	a6=a6+3;
	a7=a7+3;
	a8=a8+3;
	a9=a9+3;
	a10=a10+3;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("11 a+b t=%10.9f \n",rezultat);
	cel1[10]=rezultat;
//***********************************
//******************************************************************************************************************************
//****************************BLOCK 2******************BLOCK 2*********************************BLOCK 2**************************	
//******************************************************************************************************************************	
//******************************************************************************************************************************
//****************************BLOCK 3******************BLOCK 3*********************************BLOCK 3**************************	
//******************************************************************************************************************************	
//***********************************
printf("\n*********************************************\n");	
	d=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("01 a+b t=%10.9f \n",rezultat);
	vesh[0]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("02 a+b t=%10.9f \n",rezultat);
	vesh[1]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("03 a+b t=%10.9f \n",rezultat);
	vesh[2]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("04 a+b t=%10.9f \n",rezultat);
	vesh[3]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("05 a+b t=%10.9f \n",rezultat);
	vesh[4]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("06 a+b t=%10.9f \n",rezultat);
	vesh[5]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("07 a+b t=%10.9f \n",rezultat);
	vesh[6]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("08 a+b t=%10.9f \n",rezultat);
	vesh[7]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("09 a+b t=%10.9f \n",rezultat);
	vesh[8]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("10 a+b t=%10.9f \n",rezultat);
	vesh[9]=rezultat;
//***********************************
	d=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("11 a+b t=%10.9f \n",rezultat);
	vesh[10]=rezultat;
//***********************************
//******************************************************************************************************************************
//****************************BLOCK 3******************BLOCK 3*********************************BLOCK 3**************************	
//******************************************************************************************************************************	
//******************************************************************************************************************************
//****************************BLOCK 4******************BLOCK 4*********************************BLOCK 4**************************	
//******************************************************************************************************************************	
//***********************************		
printf("\n*********************************************\n");
	d=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("01 a+b t=%10.9f \n",rezultat);
	vesh1[0]=rezultat;
//***********************************
	d=0,d1=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("02 a+b t=%10.9f \n",rezultat);
	vesh1[1]=rezultat;
//***********************************
	d=0,d1=0,d2=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("03 a+b t=%10.9f \n",rezultat);
	vesh1[2]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("04 a+b t=%10.9f \n",rezultat);
	vesh1[3]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("05 a+b t=%10.9f \n",rezultat);
	vesh1[4]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0,d5=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	d5=d5+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("06 a+b t=%10.9f \n",rezultat);
	vesh1[5]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	d5=d5+3.01;
	d6=d6+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("07 a+b t=%10.9f \n",rezultat);
	vesh1[6]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	d5=d5+3.01;
	d6=d6+3.01;
	d7=d7+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("08 a+b t=%10.9f \n",rezultat);
	vesh1[7]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0;
	vremya_Start =  clock();
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	d5=d5+3.01;
	d6=d6+3.01;
	d7=d7+3.01;
	d8=d8+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("09 a+b t=%10.9f \n",rezultat);
	vesh1[8]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	d5=d5+3.01;
	d6=d6+3.01;
	d7=d7+3.01;
	d8=d8+3.01;
	d9=d9+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("10 a+b t=%10.9f \n",rezultat);
	vesh1[9]=rezultat;
//***********************************
	d=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0;
	vremya_Start =  clock();	
	for (i=0;i<N;i++){
	d=d+3.01;
	d1=d1+3.01;
	d2=d2+3.01;
	d3=d3+3.01;
	d4=d4+3.01;
	d5=d5+3.01;
	d6=d6+3.01;
	d7=d7+3.01;
	d8=d8+3.01;
	d9=d9+3.01;
	d10=d10+3.01;
	}
	vremya_Finish = clock();
    rezultat = (vremya_Finish - vremya_Start)/1000;
	printf ("11 a+b t=%10.9f \n",rezultat);
	vesh1[10]=rezultat;
//******************************************************************************************************************************
//****************************BLOCK 4******************BLOCK 4*********************************BLOCK 4**************************	
//******************************************************************************************************************************	
//******************************************************************************************************************************	
//******************************************************************************************************************************
//**********************BLOCK TEST************BLOCK TEST*****************BLOCK TEST*********************************************	
//******************************************************************************************************************************	
//******************************************************************************************************************************
printf("\n*********************************************\n");
//***********************************

//******************************************************************************************************************************
	if ((fp = fopen("file.txt","a")) == NULL)
        printf("Файл невозможно открыть или создать\n");
     else{
		fprintf(fp,"Данные с целыми зависимыми");   
		for (int i=0;i<k;i++){   
		fprintf(fp, "\n t=%10.9f с",cel[i]);
		}
	 }
	if ((fp = fopen("file.txt","a")) == NULL)
        printf("Файл невозможно открыть или создать\n");
     else{
		fprintf(fp,"\n Данные с целыми независимыми");   
		for (int i=0;i<k;i++){   
		fprintf(fp, "\n t=%10.9f с",cel1[i]);
		}
	 }
	 if ((fp = fopen("file.txt","a")) == NULL)
        printf("Файл невозможно открыть или создать\n");
     else{
		fprintf(fp,"\n Данные с вещественными зависимыми");   
		for (int i=0;i<k;i++){   
		fprintf(fp, "\n t=%10.9f с",vesh[i]);
		}
	 }
	if ((fp = fopen("file.txt","a")) == NULL)
        printf("Файл невозможно открыть или создать\n");
     else{
		fprintf(fp,"\n Данные с вещественными независимыми");   
		for (int i=0;i<k;i++){   
		fprintf(fp, "\n t=%10.9f с",vesh1[i]);
		}
	 }
	 //vnosim izmeneniya
	 printf("Hello");
	 printf("hello 234");
	 getch();
	return 0;
}