#include <stdio.h>
#include <stdlib.h>
struct Node
{
  void * info; //data
  Node * next; //used to point to next node
  Node * prev; //used to point to previous node 
};

//insert before a known node and return the inserted node
Node *insertbefore(Node *before, void *data)
{
  Node* n;
  n = (Node *) malloc (sizeof(Node));
  n->info = data;
  //incase header node is not created
  if (!before)
  {
    n->prev = n;
    n->next = n;
    return n;
  }
  n->prev = before->prev;
  n->next = before;
  before->prev->next = n;
  before->prev = n;

  return n;
}
//insert after a known node and return the inserted node
Node *insertafter(Node *after, void *data)
{
  Node* n;
  n = (Node *) malloc (sizeof(Node));
  n->info = data;
  //incase header node is not created
  if (!after)
  {
    n->prev = n;
    n->next = n;
    return n;
  }
  n->prev = after;
  n->next = after->next;
  if (after->prev) /*just to take care when list is broken*/
  {
    after->next->prev = n;
  }
  after->next = n;
  return n;
}
//delete before a known node and return the node before deleted node
Node *deletebefore(Node *before)
{
  Node* tmp;

  tmp = before->prev;
  before->prev = tmp->prev;
  if (tmp->prev) /*just to take care when list is broken*/
  {
    tmp->prev->next = before;
  }
  free(tmp);

  return before->prev;
}
//delete after a known node and return the node after deleted node
Node *deleteafter(Node *after)
{
  Node* tmp;

  tmp = after->next;
  after->next = tmp->next;
  tmp->next->prev = after;
  free(tmp);
  return after->next;

}
//given any node in list, deletes entire double linked list
int deletelist(Node *n)
{
  void *taddr = n;
  Node *tmp;
  Node* after = n;
  Node* before = n->prev;
  //delete all nodes after n (if any)
  do
  {
    tmp = after->next;
    free(after);
    after = tmp;
  }while (after && (taddr != after));
  return 0;
}

//given any node in list, prints entire list
int printlist(Node *h)
{
  Node* t = h;

  do
  {
    printf(" %d <->", t->info);
    t = t->next;
  }while(t && (t != h));
  printf(" NULL\n");
  return 0;
}

//given any node in list, search entire list
Node *searchlist(Node *h, void *info)
{
  Node* after = h;
    
  //search all nodes after n (if any)
  do
  {
    if (after->info == info)
    {
      return after;
    }
    after = after->next;
  }while(after && (after != h));
 
  return NULL;
}
int main(){
    return 0;
}
