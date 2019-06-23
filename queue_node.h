#include "student_queue.h"
class queue_node: public student_queue
{
    friend class student_list;
private:
    queue_node* next;
public:
    queue_node():student_queue() {next=0;}
    queue_node (const queue_node&i): student_queue(i) {next=i.next;}
    queue_node& operator= (const queue_node&i)
    {
        *((student_queue*)this)=i;
        next=i.next;
        return *this;
    }
    /*int operator<(const queue_node& a)
    {
        return strcmp(head->get_name(),a.head->get_name())>0;
    }*/
    queue_node* get_next() const {return next;}
};
