/*
 * task.h
 *
 *  Created on: Dec 7, 2023
 *      Author: DELL
 */

#ifndef INC_TASK_H_
#define INC_TASK_H_

#include "main.h"

void blink_led1();//tasks running periodically in 0.5 second
void blink_led2();//tasks running periodically in 1 second
void blink_led3();//tasks running periodically in 1.5 second
void blink_led4();//tasks running periodically in 2 second

void blink_led5();// one-shot task


#endif /* INC_TASK_H_ */
