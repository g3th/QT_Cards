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

private slots:
	void drawCard(QString& card);
	
private:
	QPushButton *cardOneButton, *cardTwoButton, *cardThreeButton, *cardFourButton;

	QLabel *label1, *label2, *label3, *label4,  *label5,  *label6,  *label7,  *label8,  *label9,  *label10,  *label11,  *label12,  *label13,  *label14,  *label15,  *label16,  *label17,  *label18, *label19, *label20;

	QPixmap *card1, *card2, *card3, *card4, *card5,  *card6,  *card7,  *card8,  *card9,  *card10,  *card11,  *card12,  *card13,  *card14,  *card15,  *card16,  *card17,  *card18, *card19, *card20;

};
#endif
