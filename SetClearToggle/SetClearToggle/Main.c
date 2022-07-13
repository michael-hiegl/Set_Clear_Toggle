//**************************************************************************
//**************************************************************************
//**
//**	Projekt: SetClearToggle	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 3/17/2022 10:04:18 AM
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
#include "functions.h"

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int job = 0;
	int variable = 0;
	int bit = 0;



	//Code
	printf("[1] Set Bit\n");
	printf("[2] Clear Bit\n");
	printf("[3] Toggle Bit\n");
	printf("Bitte Operation auswählen\n");
	scanf("%i", &job);
	printf("Bitte Variable eingeben\n");
	scanf("%i", &variable);
	printf("Bitte das zu manipulierendes Bit angeben\n");
	scanf("%i", &bit);

	switch (job)
	{
	case 1:
		printf("Setzen\n");
		printf("Ergebnis ist %i", setBit(variable, bit));
		printf("\n");
		break;
	case 2:
		printf("Löschen\n");
		printf("Ergebnis ist %i", clearBit(variable, bit));
		printf("\n");
		break;
	case 3:
		printf("Toggeln\n");
		printf("Ergebnis ist %i", toggleBit(variable, bit));
		printf("\n");
		break;
	default:
		printf("Angaben ungültig\n");
		break;
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}