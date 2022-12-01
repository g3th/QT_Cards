#include "gui.h"

MainLoop::MainLoop(){

	
	QMainWindow();
	
	cardOne = new QLabel(this);
	cardTwo = new QLabel(this);
	cardThree = new QLabel(this);
	cardFour = new QLabel(this);
	
	cardOneImage = new QPixmap(":cards/ace_of_spades.png");
	cardTwoImage = new QPixmap(":cards/jack_of_hearts.png");
	cardThreeImage = new QPixmap(":cards/king_of_clubs.png");
	cardFourImage = new QPixmap(":cards/queen_of_diamonds.png");
	
	cardOneButton = new QPushButton(this);
	cardTwoButton = new QPushButton(this);
	cardThreeButton = new QPushButton(this);
	cardFourButton = new QPushButton(this);
	
	int w = cardOneImage->width()/5;
	int h = cardOneImage->height()/5;
	
	// Change Card Buttons
	
	cardOneButton->setText("Draw \n New Card");
	cardOneButton->setGeometry(20,210,100,100); //x,y,w,h
	
	cardTwoButton->setText("Draw \n New Card");
	cardTwoButton->setGeometry(135,210,100,100); //x,y,w,h
	
	cardThreeButton->setText("Draw \n New Card");
	cardThreeButton->setGeometry(250,210,100,100); //x,y,w,h
	
	cardFourButton->setText("Draw \n New Card");
	cardFourButton->setGeometry(365,210,100,100); //x,y,w,h
	
	
	// Card Images
	
	cardOne->setPixmap(QPixmap(*cardOneImage));
	cardOne->setPixmap(cardOneImage->scaled(w,h,Qt::KeepAspectRatio));
	cardOne->setGeometry(20,50,100,150);
	
	cardTwo->setPixmap(QPixmap(*cardTwoImage));
	cardTwo->setPixmap(cardTwoImage->scaled(w,h,Qt::KeepAspectRatio));
	cardTwo->setGeometry(135,50,100,150);
	
	cardThree->setPixmap(QPixmap(*cardThreeImage));
	cardThree->setPixmap(cardThreeImage->scaled(w,h,Qt::KeepAspectRatio));
	cardThree->setGeometry(250,50,100,150);
	
	cardFour->setPixmap(QPixmap(*cardFourImage));
	cardFour->setPixmap(cardFourImage->scaled(w,h,Qt::KeepAspectRatio));
	cardFour->setGeometry(365,50,100,150);

}


