#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"windowsetting.h"
#include"playground.h"
#include"lobby.h"
#include"GoToXY.h"

using namespace std;

int main()
{
	FixConsoleWindow();
	DisableCtrButton(0, 0, 1);
	resizeConsole(1050, 620);
	ShowScrollBar(GetConsoleWindow(), SB_BOTH, FALSE);
	ShowCur(0);
	DisableSelection();
	SetConsoleTitle(L"CO CARO");
	lobby();
	//playground();
	_getch();
	return 0;
}
