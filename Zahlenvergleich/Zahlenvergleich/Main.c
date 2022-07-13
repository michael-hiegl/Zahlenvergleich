//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Zahlenvergleich	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 23.11.2021 20:08:53
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Zahl1 = 0;
	int i_Zahl2 = 0;
	int i_Zahl3 = 0;
	int i_Max = 0;


	//Code
	printf("Zahlenvergleich\n");
	printf("Bitte Zahl 1 eingeben\n");
	scanf("%i", &i_Zahl1);

	printf("Bitte Zahl 2 eingeben\n");
	scanf("%i", &i_Zahl2);

	i_Max = i_Zahl1 > i_Zahl2 ? i_Zahl1 : i_Zahl2;

	printf("Die groessere Zahl ist %i\n", i_Max);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}