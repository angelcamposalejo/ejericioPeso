#include "stdafx.h"  //________________________________________ tablaResultado.cpp
#include "tablaResultado.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	tablaResultado app;
	return app.BeginDialog(IDI_tablaResultado, hInstance);
}

void tablaResultado::Window_Open(Win::Event& e)
{
	const double temperatura = 24.3;
	int peso = 60;
	wstring info;
	wstring detalles;
	peso=50;
	Sys::Format(info, L"La temperatura es %.1f C", temperatura/3);
	Sys::Format(detalles, L"El peso es %d Kg", peso / 2);
	this->MessageBox(info,detalles, MB_OK);
}

