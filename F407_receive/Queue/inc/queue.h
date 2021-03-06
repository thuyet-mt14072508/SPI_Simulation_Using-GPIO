/*
 * queue.h
 *
 *  Created on: Jul 11, 2022
 *      Author: Admin
 */

#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_

#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
	int size, front, rear;
	int *p;
}queue;

void create( struct queue *q, int size);
void enqueue( struct queue *q, int x);
int dequeue(struct queue *q);

#endif /* INC_QUEUE_H_ */
