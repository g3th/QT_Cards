#include "gui.h"
#include <iostream>

MainLoop::MainLoop(){

	
	QMainWindow();

	// Images Boxes (QLabel)

	label1 = new QLabel(this);
	label2 = new QLabel(this);
	label3 = new QLabel(this);
	label4 = new QLabel(this);
	label5 = new QLabel(this);
	label6 = new QLabel(this);
	label7 = new QLabel(this);
	label8 = new QLabel(this);
	label9 = new QLabel(this);
	label10 = new QLabel(this);
	label11 = new QLabel(this);
	label12 = new QLabel(this);
	label13 = new QLabel(this);
	label14 = new QLabel(this);
	label15 = new QLabel(this);
	label16 = new QLabel(this);
	label17 = new QLabel(this);
	label18 = new QLabel(this);
	label19 = new QLabel(this);
	label20 = new QLabel(this);

	// Card Images (QPixmap)

	QString card_name = ":cards/back.png";	

	card1 = new QPixmap(card_name);
	card2 = new QPixmap(":cards/back.png");
	card3 = new QPixmap(":cards/back.png");
	card4 = new QPixmap(":cards/back.png");
	card5 = new QPixmap(":cards/back.png");
	card6 = new QPixmap(":cards/back.png");
	card7 = new QPixmap(":cards/back.png");
	card8 = new QPixmap(":cards/back.png");
	card9 = new QPixmap(":cards/back.png");
	card10 = new QPixmap(":cards/back.png");
	card11 = new QPixmap(":cards/back.png");
	card12 = new QPixmap(":cards/back.png");
	card13 = new QPixmap(":cards/back.png");
	card14 = new QPixmap(":cards/back.png");
	card15 = new QPixmap(":cards/back.png");
	card16 = new QPixmap(":cards/back.png");
	card17 = new QPixmap(":cards/back.png");
	card18 = new QPixmap(":cards/back.png");
	card19 = new QPixmap(":cards/back.png");
	card20 = new QPixmap(":cards/back.png");

	// Draw-Card Buttons	
	
	cardOneButton = new QPushButton(this);
	cardTwoButton = new QPushButton(this);
	cardThreeButton = new QPushButton(this);
	cardFourButton = new QPushButton(this);

	connect( cardOneButton, SIGNAL(clicked()), card_name, SLOT(drawCard()) );

	// Place Buttons
	
	cardOneButton->setText("Draw");
	cardOneButton->setGeometry(20,650,100,40); //x,y,w,h
	
	cardTwoButton->setText("Draw");
	cardTwoButton->setGeometry(135,650,100,40); //x,y,w,h
	
	cardThreeButton->setText("Draw");
	cardThreeButton->setGeometry(250,650,100,40); //x,y,w,h
	
	cardFourButton->setText("Draw");
	cardFourButton->setGeometry(365,650,100,40); //x,y,w,h
	
	
	// Place Cards

	int w = card1->width()/5;
	int h = card1->height()/5;
	
	label1->setPixmap(QPixmap(*card1));
	label1->setPixmap(card1->scaled(w,h,Qt::KeepAspectRatio));
	label1->setGeometry(20,10,100,250);
	
	label2->setPixmap(QPixmap(*card2));
	label2->setPixmap(card2->scaled(w,h,Qt::KeepAspectRatio));
	label2->setGeometry(135,10,100,250);
	
	label3->setPixmap(QPixmap(*card3));
	label3->setPixmap(card3->scaled(w,h,Qt::KeepAspectRatio));
	label3->setGeometry(250,10,100,250);

	label4->setPixmap(QPixmap(*card4));
	label4->setPixmap(card4->scaled(w,h,Qt::KeepAspectRatio));
	label4->setGeometry(365,10,100,250);
// --------	
	label5->setPixmap(QPixmap(*card5));
	label5->setPixmap(card5->scaled(w,h,Qt::KeepAspectRatio));
	label5->setGeometry(20,115,99,250);

	label6->setPixmap(QPixmap(*card6));
	label6->setPixmap(card6->scaled(w,h,Qt::KeepAspectRatio));
	label6->setGeometry(135,115,99,250);

	label7->setPixmap(QPixmap(*card7));
	label7->setPixmap(card7->scaled(w,h,Qt::KeepAspectRatio));
	label7->setGeometry(250,115,99,250);

	label8->setPixmap(QPixmap(*card8));
	label8->setPixmap(card8->scaled(w,h,Qt::KeepAspectRatio));
	label8->setGeometry(365,115,99,250);
// --------
	label9->setPixmap(QPixmap(*card9));
	label9->setPixmap(card9->scaled(w,h,Qt::KeepAspectRatio));
	label9->setGeometry(20,220,99,250);
	
	label10->setPixmap(QPixmap(*card10));
	label10->setPixmap(card10->scaled(w,h,Qt::KeepAspectRatio));
	label10->setGeometry(135,220,99,250);
	
	label11->setPixmap(QPixmap(*card11));
	label11->setPixmap(card11->scaled(w,h,Qt::KeepAspectRatio));
	label11->setGeometry(250,220,99,250);
	
	label12->setPixmap(QPixmap(*card12));
	label12->setPixmap(card12->scaled(w,h,Qt::KeepAspectRatio));
	label12->setGeometry(365,220,99,250);
// --------	
	label13->setPixmap(QPixmap(*card13));
	label13->setPixmap(card13->scaled(w,h,Qt::KeepAspectRatio));
	label13->setGeometry(20,325,99,250);
	
	label14->setPixmap(QPixmap(*card14));
	label14->setPixmap(card14->scaled(w,h,Qt::KeepAspectRatio));
	label14->setGeometry(135,325,99,250);
	
	label15->setPixmap(QPixmap(*card15));
	label15->setPixmap(card15->scaled(w,h,Qt::KeepAspectRatio));
	label15->setGeometry(250,325,99,250);
	
	label16->setPixmap(QPixmap(*card16));
	label16->setPixmap(card16->scaled(w,h,Qt::KeepAspectRatio));
	label16->setGeometry(365,325,99,250);
// --------	
	label17->setPixmap(QPixmap(*card17));
	label17->setPixmap(card17->scaled(w,h,Qt::KeepAspectRatio));
	label17->setGeometry(20,430,99,250);
	
	label18->setPixmap(QPixmap(*card18));
	label18->setPixmap(card18->scaled(w,h,Qt::KeepAspectRatio));
	label18->setGeometry(135,430,99,250);
	
	label19->setPixmap(QPixmap(*card19));
	label19->setPixmap(card19->scaled(w,h,Qt::KeepAspectRatio));
	label19->setGeometry(250,430,99,250);
	
	label20->setPixmap(QPixmap(*card20));
	label20->setPixmap(card20->scaled(w,h,Qt::KeepAspectRatio));
	label20->setGeometry(365,430,99,250);

}

void MainLoop::drawCard(QString& card){
	card = ":cards/ace_of_spades.png";
}
