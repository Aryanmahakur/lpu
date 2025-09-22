  
// void deletedata( int data)
// {
//     if (head == nullptr)
//         return;
//     if (head->data == data)
//     {
//         node* curr = head;
//          curr=curr->next;

//         if (head != nullptr)
//         {

//             head->prev = nullptr;
//         }

//         delete curr;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != nullptr)
//     {
//         if (temp->next->data == data)
//         {
//             node *del = temp->next;
//             temp->next = temp->next->next;
//             if (temp->next != nullptr)
//             {
//                 temp->next->prev = temp;
//             }
//             delete del;
//             return;
//         }
//         temp = temp->next;
//     }
    
// }