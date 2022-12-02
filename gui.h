#ifndef GUI_H
#define GUI_H


#include <QMainWindow>
#include <QLabel>
#include <QPixmap>

class MainLoop : public QMainWindow{

	Q_OBJECT

	
public:
	
	MainLoop();

private slots:
	void drawCard(QString& card);
	
private:

	QLabel *label1, *label2, *label3, *label4,  *label5,  *label6,  *label7,  *label8,  *label9,  *label10,  *label11,  *label12,  *label13,  *label14,  *label15,  *label16,  *label17,  *label18, *label19, *label20, *label21, *label22, *label23, *label24, *label25, *label26, *label27, *label28;

	QPixmap *card1, *card2, *card3, *card4, *card5,  *card6,  *card7,  *card8,  *card9,  *card10,  *card11,  *card12,  *card13,  *card14,  *card15,  *card16,  *card17,  *card18, *card19, *card20, *card21, *card22, *card23, *card24, *card25, *card26,  *card27,  *card28;

};
#endif
