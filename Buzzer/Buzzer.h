/*
 * Buzzer.h
 *
 *  Created on: 17 Feb 2018
 *      Author: stephanzuiderwijk
 */

#ifndef LIBRARIES_BUZZER_BUZZER_H_
#define LIBRARIES_BUZZER_BUZZER_H_

class Buzzer {
private:
	int buzzerPin;
public:
	Buzzer();
	virtual ~Buzzer();

	void attach(int pin);
	void playMelody(const int size, const int melody[], const int noteDurations[]);
	void singleTone(const int tone, const int length);
};

#endif /* LIBRARIES_BUZZER_BUZZER_H_ */


