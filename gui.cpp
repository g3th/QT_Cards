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
	label21 = new QLabel(this);
	label22 = new QLabel(this);
	label23 = new QLabel(this);
	label24 = new QLabel(this);
	label25 = new QLabel(this);
	label26 = new QLabel(this);
	label27 = new QLabel(this);
	label28 = new QLabel(this);

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
	card21 = new QPixmap(":cards/back.png");
	card22 = new QPixmap(":cards/back.png");
	card23 = new QPixmap(":cards/back.png");
	card24 = new QPixmap(":cards/back.png");
	card25 = new QPixmap(":cards/back.png");
	card26 = new QPixmap(":cards/back.png");
	card27 = new QPixmap(":cards/back.png");
	card28 = new QPixmap(":cards/back.png");
	
	// Place Cards

	int w = card1->width()/5;
	int h = card1->height()/5;

	
// --------	
	label1->setPixmap(QPixmap(*card1));
	label1->setPixmap(card1->scaled(w,h,Qt::KeepAspectRatio));
	label1->setGeometry(20,90,100,250);
	
// --------		
	label2->setPixmap(QPixmap(*card2));
	label2->setPixmap(card2->scaled(w,h,Qt::KeepAspectRatio));
	label2->setGeometry(135,90,100,250);
	
	label3->setPixmap(QPixmap(*card3));
	label3->setPixmap(card3->scaled(w,h,Qt::KeepAspectRatio));
	label3->setGeometry(135,130,100,250);
	
// --------	
	label4->setPixmap(QPixmap(*card4));
	label4->setPixmap(card4->scaled(w,h,Qt::KeepAspectRatio));
	label4->setGeometry(250,90,100,250);

	label5->setPixmap(QPixmap(*card5));
	label5->setPixmap(card5->scaled(w,h,Qt::KeepAspectRatio));
	label5->setGeometry(250,130,99,250);

	label6->setPixmap(QPixmap(*card6));
	label6->setPixmap(card6->scaled(w,h,Qt::KeepAspectRatio));
	label6->setGeometry(250,170,99,250);
	
// --------	
	label7->setPixmap(QPixmap(*card7));
	label7->setPixmap(card7->scaled(w,h,Qt::KeepAspectRatio));
	label7->setGeometry(365,90,99,250);

	label8->setPixmap(QPixmap(*card8));
	label8->setPixmap(card8->scaled(w,h,Qt::KeepAspectRatio));
	label8->setGeometry(365,130,99,250);

	label9->setPixmap(QPixmap(*card9));
	label9->setPixmap(card9->scaled(w,h,Qt::KeepAspectRatio));
	label9->setGeometry(365,170,99,250);
	
	label10->setPixmap(QPixmap(*card10));
	label10->setPixmap(card10->scaled(w,h,Qt::KeepAspectRatio));
	label10->setGeometry(365,210,99,250);

// --------	
	label11->setPixmap(QPixmap(*card11));
	label11->setPixmap(card11->scaled(w,h,Qt::KeepAspectRatio));
	label11->setGeometry(480,90,99,250);
	
	label12->setPixmap(QPixmap(*card12));
	label12->setPixmap(card12->scaled(w,h,Qt::KeepAspectRatio));
	label12->setGeometry(480,130,99,250);
	
	label13->setPixmap(QPixmap(*card13));
	label13->setPixmap(card13->scaled(w,h,Qt::KeepAspectRatio));
	label13->setGeometry(480,170,99,250);
	
	label14->setPixmap(QPixmap(*card14));
	label14->setPixmap(card14->scaled(w,h,Qt::KeepAspectRatio));
	label14->setGeometry(480,210,99,250);
	
	label15->setPixmap(QPixmap(*card15));
	label15->setPixmap(card15->scaled(w,h,Qt::KeepAspectRatio));
	label15->setGeometry(480,250,99,250);
	
// --------	
	label16->setPixmap(QPixmap(*card16));
	label16->setPixmap(card16->scaled(w,h,Qt::KeepAspectRatio));
	label16->setGeometry(595,90,99,250);

	label17->setPixmap(QPixmap(*card17));
	label17->setPixmap(card17->scaled(w,h,Qt::KeepAspectRatio));
	label17->setGeometry(595,130,99,250);
	
	label18->setPixmap(QPixmap(*card18));
	label18->setPixmap(card18->scaled(w,h,Qt::KeepAspectRatio));
	label18->setGeometry(595,170,99,250);
	
	label19->setPixmap(QPixmap(*card19));
	label19->setPixmap(card19->scaled(w,h,Qt::KeepAspectRatio));
	label19->setGeometry(595,210,99,250);
	
	label20->setPixmap(QPixmap(*card20));
	label20->setPixmap(card20->scaled(w,h,Qt::KeepAspectRatio));
	label20->setGeometry(595,250,99,250);
		
	label21->setPixmap(QPixmap(*card21));
	label21->setPixmap(card21->scaled(w,h,Qt::KeepAspectRatio));
	label21->setGeometry(595,290,99,250);
	
// --------			
	label22->setPixmap(QPixmap(*card22));
	label22->setPixmap(card22->scaled(w,h,Qt::KeepAspectRatio));
	label22->setGeometry(710,90,99,250);
		
	label23->setPixmap(QPixmap(*card23));
	label23->setPixmap(card23->scaled(w,h,Qt::KeepAspectRatio));
	label23->setGeometry(710,130,99,250);
		
	label24->setPixmap(QPixmap(*card24));
	label24->setPixmap(card24->scaled(w,h,Qt::KeepAspectRatio));
	label24->setGeometry(710,170,99,250);
		
	label25->setPixmap(QPixmap(*card25));
	label25->setPixmap(card25->scaled(w,h,Qt::KeepAspectRatio));
	label25->setGeometry(710,210,99,250);
			
	label26->setPixmap(QPixmap(*card26));
	label26->setPixmap(card26->scaled(w,h,Qt::KeepAspectRatio));
	label26->setGeometry(710,250,99,250);
				
	label27->setPixmap(QPixmap(*card27));
	label27->setPixmap(card27->scaled(w,h,Qt::KeepAspectRatio));
	label27->setGeometry(710,290,99,250);
				
	label28->setPixmap(QPixmap(*card28));
	label28->setPixmap(card28->scaled(w,h,Qt::KeepAspectRatio));
	label28->setGeometry(710,330,99,250);
	
}

void MainLoop::drawCard(QString& card){
	card = ":cards/ace_of_spades.png";
}
