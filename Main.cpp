/************************************************************************************************
	Name:		CoachLDEW
	Date:		06.22.2024
	Purpose:	This program will demonstrate playing sound in C++ console application.  This will
				only work with .WAV files and on a Windows based machine.
*************************************************************************************************/


#include <iostream>			//This library contains standard input and output processes
#include <Windows.h>		//This library contains functions for the Windows API
#include <mmsystem.h>		//This library contains Windows Multi-Media Functions
#include <string>			//This library contains functions that can be used to manipulate a string

#pragma comment(lib, "winmm.lib")			//This links the Windows Multi-Media Library to our program


using namespace std;


int main()
{
	cout << "Playing sound.  Press enter to stop the sound..." << endl;
	PlaySound(TEXT("MYSOUND.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	string userInput;
	getline(cin, userInput);
	PlaySound(0, 0, 0);
	cout << "The sound has stopped" << endl;


	return 0;
}