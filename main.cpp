#include "gui.h"
#include <QApplication>

int main(int argc, char *argv[]){

	QApplication MyApplication(argc, argv);
	
	MainLoop GUI;

	GUI.setFixedSize(480,350);
	GUI.setWindowTitle("Draw A Card, Any Card");
	GUI.show();
	
	return MyApplication.exec();

}
