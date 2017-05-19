#include "stdafx.h"  //________________________________________ tablaResultado.cpp
#include "tablaResultado.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	tablaResultado app;
	return app.BeginDialog(IDI_tablaResultado, hInstance);
}

void tablaResultado::Window_Open(Win::Event& e)
{
	int temperatura = 22;
	int edad = 19;
	double peso = 57/10;
	wchar_t texto[256];
	_snwprintf_s(texto, 256, _TRUNCATE, L"(%i,%g)", temperatura, peso - 1);
	this->MessageBox(texto, L"Seven", MB_OK);
	edad = 20 + 5;
	_snwprintf_s(texto, 256, _TRUNCATE, L"%d)***(%.2f", edad+2, peso*2);
	this->MessageBox(texto, L"Six", MB_OK);
}

