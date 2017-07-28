////
//// Created by jeevan on 5/10/17.
////
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *next;
//    Node(int d) : data(d), next(nullptr){}
//};
//
//void removeDup(Node *head) {
////    using set buffer
//    Node *prev = nullptr;
//    unordered_set<int> myset;
//
//    while(head) {
//
//        if(myset.find(head->data) == myset.end()) {
//            myset.insert(head->data);
//            prev = head;
//        }
//        else {
//            prev->next = head->next;
//            delete(head);
//        }
//
//        head = prev->next;
//    }
//}
//
//void printList(Node *head) {
//
////    int n = 10;
//    while(head) {
//        cout << head->data << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//void removeDupNoBuffer(Node *head) {
//
//    Node *tmp;
//    while(head) {
//
//        Node *runner = head;
//
//        while(runner->next) {
//
//            if(runner->next->data == head->data) {
//                tmp = runner->next;
//                runner->next = runner->next->next;
//                delete(tmp);
//            }
//            runner = runner->next;
//        }
//
//        head = head->next;
//    }
//}
//
//void partition(Node **head, int x) {
//
//    int i = 0, n = 1;
//    Node *curr = *head, *prev = nullptr, *tail = *head, *next, *newHead = nullptr;
//
//    while(tail->next) {
//        n++;
//        tail = tail->next;
//    }
//
//    while(i < n) {
//
//        if(curr->data < x) {
//
//            if(newHead == nullptr)
//                newHead = curr;
//
//            prev = curr;
//            curr = curr->next;
//
//        } else {
//
//            next = curr->next;
//
//            if(prev)
//                prev->next = next;
//
//            curr->next = nullptr;
//            tail->next = curr;
//            tail = curr;
//            curr = next;
//        }
//
//        i++;
//    }
//
//    if(newHead == nullptr)
//        newHead = curr;
//
//    *head = newHead;
//}
//
//void push(Node **head, int x) {
//    Node *node = new Node(x);
//    node->next = *head;
//    *head = node;
//}
//
//Node* insertBefore(Node *head, int x) {
//
//    Node* node = new Node(x);
//    node->next = head;
//    return node;
//}
//
//int length(Node* head) {
//
//    int len = 0;
//    while(head) {
//        head = head->next;
//        len++;
//    }
//
//    return len;
//}
//
//Node* padding(Node *head, int n) {
//
//    for(int i = 0; i < n; i++)
//        head = insertBefore(head, 0);
//
//    return head;
//
//}
//
//Node* sumHelper(Node* head1, Node* head2, int& carry) {
//
//    if(head1 == nullptr && head2 == nullptr) {
//        carry = 0;
//        return nullptr;
//    }
//
//    int val = 0;
//
//    if(head1) {
//        val += head1->data;
//        head1 = head1->next;
//    }
//
//    if(head2) {
//        val += head2->data;
//        head2 = head2->next;
//    }
//
//    Node *newHead = sumHelper(head1, head2, carry);
//
//    val += carry;
//
//    carry = val / 10;
//    val = val % 10;
//
//    newHead = insertBefore(newHead, val);
//    return newHead;
//}
//
//Node* deletePadding(Node* head, int n) {
//    Node *next;
//    for(int i = 0; i < n; i++) {
//        next = head->next;
//        delete(head);
//        head = next;
//    }
//
//    return head;
//}
//
//Node* sumLists(Node* head1, Node* head2) {
//
//    int carry;
//
//    int len1 = length(head1), len2 = length(head2);
//
//    if(len1 < len2)
//        head1 = padding(head1, len2 - len1);
//    else if(len2 < len1)
//        head2 = padding(head2, len1 - len2);
//
//    Node *newHead = sumHelper(head1, head2, carry);
//
//    if(carry)
//        newHead = insertBefore(newHead, carry);
//
//    if (len1 < len2)
//        deletePadding(head1, len2 - len1);
//    else if (len2 < len1)
//        deletePadding(head2, len1 - len2);
//
//    return newHead;
//}
//
//Node* checkPalindromeUtil(Node* head, int len, bool& flag) {
//
//    if(len == 0)
//        return head;
//
//    if(len == 1)
//        return head->next;
//
//    Node* rightHead = checkPalindromeUtil(head->next, len - 2, flag);
//
//    if(flag && head->data != rightHead->data)
//        flag = false;
//
//    return rightHead->next;
//
//}
//
//
//Node* reverseList(Node *head) {
//
//    Node *prev = nullptr, *next;
//
//
//    while(head) {
//
//        next = head->next;
//        head->next = prev;
//
//        prev = head;
//        head = next;
//    }
//
//    return prev;
//}
//
//bool checkPalindrome3(Node* head) {
////     by reversing second half
//
//    if(!head || !head->next)
//        return true;
//
//    Node *fast = head->next, *slow = head;
//
//    while(fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    Node* tail1 = slow;
//    Node* head2 = reverseList(slow->next);
//
//    Node *curr1 = head, *curr2 = head2;
//    while(curr2 && curr1->data == curr2->data) {
//        curr1 = curr1->next;
//        curr2 = curr2->next;
//    }
//
//    head2 = reverseList(head2);
//    tail1->next = head2;
//
//    return curr2 == nullptr;
//
//}
//void checkPalindromeUtil2(Node** left, Node* right, bool& flag) {
//
//    if(right == nullptr)
//        return;
//
//    checkPalindromeUtil2(left, right, flag);
//
//    if(flag && (*left)->data != right->data)
//        flag = false;
//
//    (*left) = (*left)->next;
//
//}
//
//bool checkPalindrome2(Node* head) {
////    without length
//    bool flag = true;
//    Node *left = head;
//    checkPalindromeUtil2(&left, head, flag);
//    return flag;
//}
//
//bool checkPalindrome(Node* head) {
//
//    bool flag = true;
//    int len = length(head);
//    checkPalindromeUtil(head, len, flag);
//    return flag;
//}
//
//Node* sortAbsoluteList(Node *head) {
//
//    if(!head || !head->next)
//        return head;
//
//    Node* prev = head, *curr = head->next, *next;
//
//    while(curr) {
//
//        if(curr->data < 0) {
//
//            next = curr->next;
//
//            prev->next = next;
//            curr->next = head;
//            head = curr;
//            curr = next;
//        } else {
//            prev = curr;
//            curr = curr->next;
//        }
//    }
//
//    return head;
//}
//
//Node* findIntersect(Node* head) {
//
//    Node *fast = head, *slow = head;
//
//    while(fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//
//        if(fast == slow)
//            break;
//    }
//
//    if(fast != slow)
//        return nullptr;
//
//    return slow;
//}
//
//bool removeLoop(Node* head) {
//
//    Node* intersect = findIntersect(head);
//
//    if(intersect == nullptr)
//        return false;
//
//    while(head->next != intersect->next) {
//        head = head->next;
//        intersect = intersect->next;
//    }
//
//    intersect->next = nullptr;
//
//    return true;
//}
//
//Node* rotateList(Node* head, int k) {
//
//    Node *curr = head;
//
//    k = k % length(head);
//
//    if(k == 0)
//        return head;
//
//    while(k > 1) {
//        curr = curr->next;
//        k--;
//    }
//
//    Node *newHead = curr->next;
//    curr->next = nullptr;
//
//    curr = newHead;
//    while(curr->next)
//        curr = curr->next;
//
//    curr->next = head;
//    return newHead;
//}
//
//Node* traverse(Node *head1, Node** head) {
//
//    Node* node = new Node(head1->data);
//
//    if(head1->next == nullptr) {
//        *head = node;
//        return node;
//    }
//
//    Node* tail = traverse(head1->next, head);
//    tail->next = node;
//    return node;
//}
//
//Node* mergeHelper(Node* head1, Node* head2, Node** head) {
//
//    if(head1 == nullptr)
//        return traverse(head2, head);
//
//
//    if(head2 == nullptr)
//        return traverse(head1, head);
//
//    Node* big = head1->data > head2->data ? head1 : head2;
//    Node *small = big == head1 ? head2 : head1;
//
//    Node* tail = mergeHelper(big, small->next, head);
//
//    Node* node = new Node(small->data);
//    tail->next = node;
//
//    return node;
//}
//
//Node* mergeSortedListsReverse(Node *head1, Node* head2) {
//// recursive
//    Node* head ;
//    Node* tail = mergeHelper(head1, head2, &head);
//    tail->next = nullptr;
//    return head;
//}
//
//Node* mergeSorted(Node* head1, Node* head2) {
//
//    Node* mergedHead = nullptr, *tmp;
//
//    while(head1 && head2) {
//
//        if(head1->data < head2->data) {
//            tmp = head1->next;
//            head1->next = mergedHead;
//            mergedHead = head1;
//            head1 = tmp;
//        } else {
//            tmp = head2->next;
//            head2->next = mergedHead;
//            mergedHead = head2;
//            head2 = tmp;
//        }
//    }
//
//    while(head1) {
//        tmp = head1->next;
//        head1->next = mergedHead;
//        mergedHead = head1;
//        head1 = tmp;
//    }
//
//    while(head2) {
//        tmp = head2->next;
//        head2->next = mergedHead;
//        mergedHead = head2;
//        head2 = tmp;
//    }
//
//    return mergedHead;
//}
//
//void rearrange(Node* head) {
//
//    if(head == nullptr || head->next == nullptr)
//        return;
//
//    Node *oddEnd = head;
//    Node *evenStart = head->next, *evenEnd = head->next;
//
//    Node* curr = head->next->next;
//
//    while(curr) {
//        oddEnd->next = curr;
//        oddEnd = curr;
//        curr = curr->next;
//
//        if(curr) {
//            evenEnd->next = curr;
//            evenEnd = curr;
//            curr = curr->next;
//        }
//    }
//
//    oddEnd->next = evenStart;
//    evenEnd->next = nullptr;
//}
//
//void rearrange2(Node* head) {
//
//    if(head == nullptr || head->next == nullptr)
//        return;
//
//    Node *odd = head;
//    Node *evenStart = head->next, *even = evenStart;
//
//    while(1) {
//
//        if(even->next == nullptr)
//            break;
//
//        odd->next = even->next;
//        odd = even->next;
//
//        if(odd->next == nullptr)
//            break;
//
//        even->next = odd->next;
//        even = odd->next;
//
//    }
//
//    odd->next = evenStart;
//    even->next = nullptr;
//}
//
//Node* reverse(Node* head, int k, Node** nextTail) {
//
//    Node *prev = nullptr, *next;
//
//    while(head && k) {
//
//        next = head->next;
//        head->next = prev;
//
//        prev = head;
//        head = next;
//        k--;
//    }
//
//    *nextTail = head;
//    return prev;
//
//}
//
//Node* reverseRecurse(Node *head, int k)
//{
//    Node* current = head;
//    Node* next = NULL;
//    Node* prev = NULL;
//    int count = 0;
//
//    /*reverse first k nodes of the linked list */
//    while (current != NULL && count < k)
//    {
//        next  = current->next;
//        current->next = prev;
//        prev = current;
//        current = next;
//        count++;
//    }
//
//    /* next is now a pointer to (k+1)th node
//       Recursively call for the list starting from current.
//       And make rest of the list as next of first node */
//    if (next !=  NULL)
//        head->next = reverseRecurse(next, k);
//
//    /* prev is new head of the input list */
//    return prev;
//}
//
//Node* reverseInGroup(Node* head, int k) {
//
//    Node *newHead = nullptr, *prevTail = nullptr;
//    Node *currTail = head, *currHead, *nextTail;
//
//    while(currTail) {
//
//        currHead = reverse(currTail, k, &nextTail);
//
//        if(newHead == nullptr)
//            newHead = currHead;
//
//        if(prevTail)
//            prevTail->next = currHead;
//
//        prevTail = currTail;
//        currTail = nextTail;
//    }
//
//    return newHead;
//}
//
//int main() {
//
////    Node *root = new Node(5);
////    root->next = new Node(7);
////    root->next->next = new Node(13);
////    root->next->next->next = new Node(14);
////    root->next->next->next->next = new Node(8);
////    printList(root);
//
////    removeDup(root);
////    removeDupNoBuffer(root);
////    partition(&root, 4);
////    printList(root);
//
////    Node* head1 = nullptr;
////    push(&head1, -11);
////    push(&head1, 10);
////    push(&head1, 9);
////    push(&head1, -7);
////    push(&head1, -5);
////    push(&head1, 3);
////    push(&head1, -2);
////    push(&head1, 1);
////    printList(head1);
//
////    Node* head2 = nullptr;
////    push(&head2, 7);
////    push(&head2, 6);
////    push(&head2, 5);
////    push(&head2, 4);
////    push(&head2, 3);
////    push(&head2, 2);
////    push(&head2, 1);
////    printList(head2);
//
////    Node* sumHead = sumLists(head1, head2);
////    printList(head1);
////    printList(head2);
////    printList(sumHead);
//
////    cout << checkPalindrome3(head1) << endl;
////    head1 = sortAbsoluteList(head1);
////    printList(head1);
//
////    Node *head = new Node(1);
////    head->next = new Node(2);
////    head->next->next = new Node(3);
////    head->next->next->next = new Node(4);
////    head->next->next->next->next = new Node(5);
////    head->next->next->next->next->next = head->next;
////    printList(head);
//
////    removeLoop(head);
////    printList(head);
//
////    head2 = rotateList(head2, 15);
////    printList(head2);
//
//    Node* head1 = nullptr;
////    push(&head1, 9);
////    push(&head1, 8);
//    push(&head1, 7);
//    push(&head1, 6);
//    push(&head1, 5);
//    push(&head1, 4);
//    push(&head1, 3);
//    push(&head1, 2);
//    push(&head1, 1);
//    printList(head1);
//
////    Node* head2 = nullptr;
////    push(&head2, 5);
////    push(&head2, 3);
////    push(&head2, 2);
////    printList(head2);
//
////    Node* mergedHead = mergeSortedListsReverse(head1, head2);
////    Node* mergedHead = mergeSorted(head1, head2);
////    printList(mergedHead);
//
////    rearrange(head1);
////    rearrange2(head1);
//
//    head1 = reverseInGroup(head1, 8);
//    printList(head1);
//    return 0;
//}
