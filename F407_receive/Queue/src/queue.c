/*
 * queue.c
 *
 *  Created on: Jul 11, 2022
 *      Author: Admin
 */

#include "queue.h"


void create( struct queue *q, int size){
	q->size=size;
	q->front=q->rear=-1;
	q->p=(int*)malloc(q->size*sizeof(int));
}
void enqueue( struct queue *q, int x){
	if(q->rear==q->size-1)
		printf("Queue is FULL");
	else{
		q->rear++;
		q->p[q->rear]=x;
	}
}
int dequeue(struct queue *q){
	int x=-1;
	if(q->front==q->rear)
		printf("Queue is EMPTY");
	else{
		q->front++;
		x=q->p[q->front];
	}
	return x;
}
void display(struct queue q){
	int i;
	for(i=q.front+1;i<=q.rear;i++){
		printf("%d", q.p[i]);
	}
}


