#include "gui.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[]){

	QApplication MyApplication(argc, argv);
	
	MainLoop GUI;
	
	QFile guiStylesheet(":/gui_style.qss");
	guiStylesheet.open(QFile::ReadOnly);
	QString css(guiStylesheet.readAll());
	MyApplication.setStyleSheet(css);
	
	GUI.setFixedSize(480,700);
	GUI.setWindowTitle("Pick A Card, Any Card");
	GUI.show();
	
	return MyApplication.exec();

}
