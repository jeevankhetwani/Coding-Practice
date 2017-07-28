//
// Created by jeevan on 12/24/16.
//

#ifndef TEST1_NODE_H
#define TEST1_NODE_H

#include<iostream>
#include<set>
#include<stack>
template <class T>
class ListNode {
public:
    T data;
    ListNode* next;

    ListNode(T d) {
        data = d;
        next = nullptr;
    }
};

template <class T>
class LL {
public:
    ListNode<T>* head;
//    static int addInsert(LL*, Node*, Node*);

    LL() {
        head = nullptr;
    }

    ListNode<T>* insert(T val) {
        ListNode<T> *node = new ListNode<T>(val);
        if (!head)
            head  = node;
        else {
            ListNode<T> *curr = head;
            while(curr->next)
                curr = curr->next;
            curr->next = node;
        }
        return node;

    }

    bool empty() {
        return (head==nullptr);
    }

    void insert(ListNode<T>* node) {
        if(head == nullptr) {
            head = node;
            return;
        }

        ListNode<T>* curr = head;
        while(curr->next != nullptr)
            curr = curr->next;

        curr->next = node;
    }


    void remove(T val) {
        if (empty())
            return ;

        if (head->data==val)
            head = head->next;

        ListNode<T>* curr = head;

        while(curr->next) {
            if (curr->next->data == val) {
                curr->next = curr->next->next;
                return;
            }
            curr = curr->next;

        }
    }

    void display() {
        ListNode<T> *curr = head;
        std::cout<<std::endl;
        while (curr) {
            std::cout << curr->data << " ";
            curr = curr->next;
        }
        std::cout<<std::endl;
    }

    ListNode<T>* kLast(int k) {
        if (empty())
            return nullptr;

        int i = 0;
        ListNode<T> *curr = head;

        while(curr && i < k) {
            curr = curr->next;
            i++;
        }

        if(i < k)
            return nullptr;

        ListNode<T>* second = head;
        while(curr) {
            second = second->next;
            curr = curr->next;
        }

        return second;
    }


    bool deleteMiddle(ListNode<T>* node) {
        if ( node == nullptr ||  node->next == nullptr )
            return false;

        ListNode<T>* temp = node->next;
        node->data = node->next->data;
        node->next = node->next->next;
        delete(temp);
        return true;
    }

    void reverse() {
        ListNode<T> *temp, *prev = nullptr, *curr = head;
        while(curr) {
            temp = curr->next;
            curr->next = prev;

            prev = curr;
            curr = temp;
        }

        head = prev;
    }

    void partition(T k) {
        T temp;
        ListNode<T> *p = head, *q = head;

        while( q != nullptr ) {
            if( q->data < k ) {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
                p = p->next;
            }

            q = q->next;
        }


    }

    void removeDup() {
        std::set<int> values;

        ListNode<T> *curr = head;
        values.insert(head->data);

        while(curr->next) {
            if(values.find(curr->next->data) == values.end())
                values.insert(curr->next->data);
            else {
                curr->next = curr->next->next;
                if (!curr->next)
                    break;
            }
            curr = curr->next;
        }
    }

    void insertFirst(T k) {
        ListNode<T> *node = new ListNode<T>(k);
        node->next = head;
        head = node;
    }

//    LL* addForward(LL *list) {
//        LL *newlist = new LL();
//        int carry = addInsert(newlist, head, list->head);
//        if ( carry != 0 )
//            newlist->insertFirst(carry);
//        return newlist;
//    }

    bool palindrome() {
        std::stack<int> st;

        ListNode<T> *fast = head, *slow = head;

        while( fast != nullptr && fast->next != nullptr ) {
            st.push(slow->data);
            fast = fast->next->next;
            slow = slow->next;
        }

        if ( fast != nullptr )
            slow = slow->next;

        while(slow != nullptr) {
            if(st.top() != slow->data)
                return false;
            st.pop();
            slow = slow->next;
        }

        return true;
    }

    LL<T>* addBackward(LL<T> *list) {
        LL<T> *newlist = new LL<T>();
        int val, carry = 0;

        ListNode<T> *curr1 = head, *curr2 = list->head;
        while (curr1 != nullptr && curr2 != nullptr) {
            val = curr1->data + curr2->data + carry;
            newlist->insert(val % 10);
            carry = val / 10;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        while (curr1 != nullptr) {
            val = curr1->data + carry;
            newlist->insert(val % 10);
            carry = val / 10;
        }

        while (curr2 != nullptr) {
            val = curr2->data + carry;
            newlist->insert(val % 10);
            carry = val / 10;


            if (carry != 0)
                newlist->insert(carry);
            return newlist;
        }
    }

};


//int LL::addInsert(LL *list, Node* node1, Node* node2) {
//    int val, val1 = 0, val2 = 0;
//
//    Node *child1 = nullptr, *child2 = nullptr;
//
//    if  ( node1 == nullptr && node2 == nullptr )
//        return 0;
//
//    if ( node1 != nullptr ) {
//        val1 = node1->data;
//        child1 = node1->next;
//    }
//
//    if ( node2 != nullptr ) {
//        val2 = node2->data;
//        child2 = node2->next;
//    }
//
//    val = val1 + val2 + addInsert(list, child1, child2);
//    list->insertFirst(val % 10);
//    return val / 10;
//}

#endif //TEST1_NODE_H
