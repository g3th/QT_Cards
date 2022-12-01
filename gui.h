#ifndef GUI_H
#define GUI_H


#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>

class MainLoop : public QMainWindow{

	Q_OBJECT

	
public:
	
	MainLoop();
	
private:

	QPushButton *cardOneButton, *cardTwoButton, *cardThreeButton, *cardFourButton;
	QLabel *cardOne, *cardTwo, *cardThree, *cardFour;
	QPixmap *cardOneImage, *cardTwoImage, *cardThreeImage, *cardFourImage;

};
#endif
