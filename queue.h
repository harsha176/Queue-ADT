/*
 * This is interface of queue implementation.
 *
 */

#ifndef QUEUE_H
#define QUEUE_H 1

// element data type is configurable
typedef int element_t;

struct _node_t;

typedef struct _node_t node_t;

// each element in the queue is represented by this node.
struct _node_t{
   element_t* elm;
   node_t* next;
};


//queue ADT
typedef struct {
  node_t* head;  // head element of the queue
} queue_t;

/*
 * This method enqueues node on to end of the list.
 */
int enqueue(queue_t* /*q*/, node_t* /*node*/);

/*
 * This method dequeue the node from start of the list.;
 */
node_t* dequeue(queue_t* /*q*/);

#endif
