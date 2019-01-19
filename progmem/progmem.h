/*
 * progmem.h
 *
 *  Created on: 10 Dec 2018
 *      Author: stephanzuiderwijk
 */

#ifndef LIBRARIES_PROGMEM_PROGMEM_H_
#define LIBRARIES_PROGMEM_PROGMEM_H_

#include <Arduino.h>  // for type definitions

template <typename T> void PROGMEM_readAnything (const T * sce, T& dest)
  {
  memcpy_P (&dest, sce, sizeof (T));
  }

template <typename T> T PROGMEM_getAnything (const T * sce)
  {
  static T temp;
  memcpy_P (&temp, sce, sizeof (T));
  return temp;
  }


#endif /* LIBRARIES_PROGMEM_PROGMEM_H_ */
