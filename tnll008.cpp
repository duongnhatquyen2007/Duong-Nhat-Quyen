#include <bits/stdc++.h>
using namespace std;
struct Node {
    string masv;
    string hoten;
    float dtb;
    int sotc;
    Node *next;
};
void chencuoi(Node* &head, string ma, string ten, float diem, int tc) {
    Node *x = new Node;
    x->masv = ma;
    x->hoten = ten;
    x->dtb = diem;
    x->sotc = tc;
    x->next = NULL;
    if (head == NULL) {
        head = x;
    } else {
        Node *y = head;
        while (y->next != NULL) {
            y = y->next;
        }
        y->next = x;
    }
}
void xoaNode(Node* &head, string ma) {
    if (head == NULL) return;
    if (head->masv == ma) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->masv != ma) {
        curr = curr->next;
    }
    if (curr->next != NULL) {
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
}
void display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->masv << ", " << temp->dtb << ", " << temp->sotc << ", " << temp->hoten << endl;
        temp = temp->next;
    }
}
void update(Node* &head) {
    string input;
    while (getline(cin, input)) {
        if (input == "fin") break;
        stringstream ss(input);
        string cmd;
        ss >> cmd;
        if (cmd == "insert") {
            string ma, ten;
            float diem;
            int tc;
            if (ss >> ma >> ten >> diem >> tc) {
                chencuoi(head, ma, ten, diem, tc);
            }
        } 
        else if (cmd == "delete") {
            string ma;
            if (ss >> ma) {
                xoaNode(head, ma);
            }
        } 
        else if (cmd == "display") {
            display(head);
        }
    }
}
int main() {
    Node *head = NULL;
    update(head);
    return 0;
}
