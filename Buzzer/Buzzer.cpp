/*
 * Buzzer.cpp
 *
 *  Created on: 17 Feb 2018
 *      Author: stephanzuiderwijk
 */

#include <Buzzer.h>
#include <arduino.h>

Buzzer::Buzzer() {
	// TODO Auto-generated constructor stub
}

Buzzer::~Buzzer() {
	// TODO Auto-generated destructor stub
}

void Buzzer::attach(int buzzerPin) {
	this->buzzerPin = buzzerPin;
	pinMode(buzzerPin, OUTPUT);
}

void Buzzer::playMelody(const int size, const int melody[], const int noteDurations[]) {

	int numberOfNotes = size;
	Serial.print("Playing melody. Number of notes: ");
	Serial.println(numberOfNotes);
	for (int thisNote = 0; thisNote < numberOfNotes; thisNote++) {
	    // to calculate the note duration, take one second divided by the note type.
	    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
	    int noteDuration = 1000 / noteDurations[thisNote];
	    tone(buzzerPin, melody[thisNote], noteDuration);

	    // to distinguish the notes, set a minimum time between them.
	    // the note's duration + 30% seems to work well:
	    int pauseBetweenNotes = noteDuration * 1.30;
	    delay(pauseBetweenNotes);
	    // stop the tone playing:
	    noTone(buzzerPin);
	}
}

void Buzzer::singleTone(const int note, const int length) {
	tone(this->buzzerPin, note, length);
}

