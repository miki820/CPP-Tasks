/*
#include <iostream>
#include <string>

template<typename T>
struct Node {
    T data;
    Node *next;
};

template<typename T>
void showList(const Node<T> *head) {
    const Node<T>* current = head;
    while(current){
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template<typename T>
Node<T> *arrayToList(const T a[], size_t size) {
    Node<T> *head = new Node<T>(a[0]);
    Node<T> *curr = head;
    for (size_t i = 1; i < size; i++) {
        curr->next = new Node<T>(a[i]);
        curr = curr->next;
    }
    return head;
}

template<typename T, typename Pred>
Node<T> *extract(Node<T> *&head, Pred pred) {
    Node<T> *newHead = nullptr;
    Node<T> *newTail = nullptr;
    Node<T> *current = head;
    Node<T> *prev = nullptr;

    while (current != nullptr) {
        if (pred(current->data)) {
            Node<T>* node = current;
            current = current->next;
            if(prev != nullptr){
                prev->next = current;
            } else {
                head = current;
            }

            if(!newHead){
                newHead = node;
                newTail = node;
            } else {
                newTail->next = node;
                newTail = newTail->next;
            }
            node->next = nullptr;
        } else {
            prev = current;
            current = current->next;
        }
    }
    return newHead;
}

template<typename T>
void deleteList(Node<T> *&head){
    while(head){
        std::cout << "DEL " << head->data << "; ";
        head = head->next;
    }

    std::cout << std::endl;
    head = nullptr;
}

bool isLong(const std::string &s) { return s.size() >= 5; }

int main() {
    int tabi[] = {2, 1, 4, 3, 6, 5, 7, 8};
    size_t sizei = sizeof(tabi) / sizeof(tabi[0]);
    Node<int> *listAi = arrayToList(tabi, sizei);
    showList(listAi);
    Node<int> *listBi = extract(listAi,
                                [](int n) {
                                    return n % 2 == 0;
                                });
    showList(listBi);
    showList(listAi);
    deleteList(listBi);
    deleteList(listAi);

    std::string tabs[]{"Kasia", "Ola", "Ala",
                       "Zosia", "Ela", "Basia"};
    size_t sizes = sizeof(tabs) / sizeof(tabs[0]);
    Node<std::string> *listAs = arrayToList(tabs, sizes);
    showList(listAs);
    Node<std::string> *listBs = extract(listAs, isLong);
    showList(listBs);
    showList(listAs);
    deleteList(listBs);
    deleteList(listAs);
}*/
