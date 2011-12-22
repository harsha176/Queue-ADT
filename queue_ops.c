#include "queue.h"
#include <stdio.h>

/*
 * Insert at end of the list.
 *
 * check if queue is empty. if so initiliaze it as head of the queue.
 * else move to the end of list and insert it at the end
 *
 */
int enqueue(queue_t* q, node_t* node) {
   if(q == NULL) {
      return -1;
   }
   // if list is empty add it to head of the queue.
   if(q->head == NULL) {
      q->head = node;
      node->next = NULL;
      return 0;
   }

  // go to the end of list
  node_t* curr_node = q->head;
  
  while(curr_node->next != NULL) {
     curr_node = curr_node->next;
  }

  curr_node->next = node;
  node->next = NULL;
  
  return 0;
}

/*
 * if queue is empty return NULL
 * remove first element and change head to next element and return it.
 */
node_t* dequeue(queue_t* q) {
   if(q == NULL) {
      return NULL;
   }

   // check if queue is empty
   if(q->head == NULL) {
      return NULL;
   } 

   // remove first element
   node_t* first_node = q->head;
   q->head = q->head->next;
   first_node->next = NULL;

   return first_node;
}
