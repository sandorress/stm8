/*
 A simple character queue implementation
*/

#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <string.h>		// for memset
#define QUEUE_BIT 5
#define QUEUE_SIZE (1 << QUEUE_BIT)
#define QUEUE_MASK (QUEUE_SIZE - 1)

typedef volatile struct charqueue {
	unsigned char rd;
	unsigned char wr;
	unsigned char buffer[QUEUE_SIZE];
} charqueue;

#define queue_init(q) memset((&q), 0, sizeof(charqueue))
#define queue_isempty(q) ((q).rd == (q).wr)
#define queue_enqueue(q, v) (q).buffer[(q).wr++ & QUEUE_MASK]= v
#define queue_dequeue(q) (q).buffer[(q).rd++ & QUEUE_MASK]

#endif