class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode dummy; 
    ListNode* tail = &dummy; 

    dummy.next = NULL; 
    while (1) 
    { 
        if (a == NULL) 
        { 
            tail->next = b; 
            break; 
        } 
        else if (b == NULL) 
        { 
            tail->next = a; 
            break; 
        } 
        if (a->val <= b->val) 
            MoveNode(&(tail->next), &a); 
        else
            MoveNode(&(tail->next), &b); 
  
        tail = tail->next; 
    } 
    return(dummy.next); 
} 
  
void MoveNode(ListNode** destRef, ListNode** sourceRef) 
{
    ListNode* newNode = *sourceRef; 
    assert(newNode != NULL);
    *sourceRef = newNode->next; 
    newNode->next = *destRef; 
    *destRef = newNode; 
} 
void push(ListNode** head_ref, int new_data) 
{ 
    ListNode* new_node = new ListNode();
    new_node->val = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
};
