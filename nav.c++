//CONSTRUCTORS,ENCAPSULATION,OVERLOADING

// Default Constructor
/*
Q: Write a program to demonstrate default constructor.
#include<iostream>
using namespace std;
class A{
int x;
public:
A(){x=0;}
int get(){return x;}
};
int main(){A a; cout<<a.get();}
*/
// Parameterized Constructor
/*
Q: Program using parameterized constructor.

#include<iostream>
using namespace std;
class A{
int x;
public:
A(int a){x=a;}
int get(){return x;}
};
int main(){A a(5); cout<<a.get*/
// Constructor Overloading
/*
Q: Demonstrate constructor overloading.

#include<iostream>
using namespace std;
class A{
int x;
public:
A(){x=1;}
A(int a){x=a;}
int get(){return x;}
};
int main(){A a1,a2(5); cout<<a1.get()<<" "<<a2.get();}
*/
//Two Parameter Constructor
/*
Q: Add two numbers using constructor.

#include<iostream>
using namespace std;
class A{
int x;
public:
A(int a,int b){x=a+b;}
int get(){return x;}
};
int main(){A a(2,3); cout<<a.get();}
*/
//Copy Constructor
/*

#include<iostream>
using namespace std;
class A{
int x;
public:
A(int a){x=a;}
A(A &o){x=o.x;}
int get(){return x;}
};
int main(){A a1(5); A a2=a1; cout<<a2.get();}
*/
// Encapsulation
/*
Q: Show encapsulation using private variable.

#include<iostream>
using namespace std;
class B{
private:int y;
public:B(){y=10;}
int get(){return y;}
};
int main(){B b; cout<<b.get();}
*/
// Parameterized + Encapsulation
/*
Q: Use parameterized constructor with encapsulation.

#include<iostream>
using namespace std;
class B{
int y;
public:B(int a){y=a;}
int get(){return y;}
};
int main(){B b(9); cout<<b.get();}
*/
// Default + Parameterized
/*
Q: Use multiple constructors.

#include<iostream>
using namespace std;
class B{
int y;
public:B(){y=0;} B(int a){y=a;}
int get(){return y;}
};
int main(){B b1,b2(3); cout<<b1.get()+b2.get();}
*/
//Multiplication Constructor
/*Q: Multiply values using constructor.

#include<iostream>
using namespace std;
class B{
int y;
public:B(int a,int b){y=a*b;}
int get(){return y;}
};
int main(){B b(2,4); cout<<b.get();}
*/
//Copy Constructor (Another)
/*
Q: Copy object using constructor.

#include<iostream>
using namespace std;
class B{
int y;
public:B(int a){y=a;}
B(B &b){y=b.y;}
int get(){return y;}
};
int main(){B b1(6); B b2(b1); cout<<b2.get();}
*/
// Subtraction using constructor.
/*
#include<iostream>
using namespace std;
class C{int z;public:C(int a,int b){z=a-b;}int get(){return z;}};
int main(){C c(9,5); cout<<c.get();}
*/


//ARRAYS

// Input & Output Array
/*
#include<iostream>
using namespace std;
int main(){
int a[5];
for(int i=0;i<5;i++) cin>>a[i];
for(int i=0;i<5;i++) cout<<a[i]<<" ";
}
*/
// Sum of Array
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5},sum=0;
for(int i=0;i<5;i++) sum+=a[i];
cout<<sum;
}
*/
// Maximum Element
/*#include<iostream>
using namespace std;
int main(){
int a[5]={2,9,1,6,3},max=a[0];
for(int i=1;i<5;i++) if(a[i]>max) max=a[i];
cout<<max;
}
*/
// Minimum Element
/*#include<iostream>
using namespace std;
int main(){
int a[5]={2,9,1,6,3},min=a[0];
for(int i=1;i<5;i++) if(a[i]<min) min=a[i];
cout<<min;
}
*/
// Linear Search
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5},key=3;
for(int i=0;i<5;i++)
if(a[i]==key) cout<<"Found";
}
*/
// Reverse Array
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
for(int i=4;i>=0;i--) cout<<a[i]<<" ";
}
*/
// Insert Element
/*#include<iostream>
using namespace std;
int main(){
int a[6]={1,2,3,4,5},pos=2,val=9;
for(int i=5;i>pos;i--) a[i]=a[i-1];
a[pos]=val;
for(int i=0;i<6;i++) cout<<a[i]<<" ";
}
*/
// Delete Element
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5},pos=2;
for(int i=pos;i<4;i++) a[i]=a[i+1];
for(int i=0;i<4;i++) cout<<a[i]<<" ";
}
*/
// Count Even Numbers
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,6},c=0;
for(int i=0;i<5;i++) if(a[i]%2==0) c++;
cout<<c;
}
*/
//. Count Odd Numbers
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5},c=0;
for(int i=0;i<5;i++) if(a[i]%2!=0) c++;
cout<<c;
}
*/
//Copy Array
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5},b[5];
for(int i=0;i<5;i++) b[i]=a[i];
for(int i=0;i<5;i++) cout<<b[i]<<" ";
}*/
// Frequency of Element
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,2,3,2},key=2,c=0;
for(int i=0;i<5;i++) if(a[i]==key) c++;
cout<<c;
}*/
// Palindrome Array
/*#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,2,1},flag=1;
for(int i=0;i<2;i++)
if(a[i]!=a[4-i]) flag=0;
cout<<(flag?"Yes":"No");
}*/


//  CLASSWORK
//wap to perform arithmetic operation
/*
#include<iostream>
using namespace std;
int main()
{
    int x,y,sum=0;
    std::cout<<"Enter the value of x&y" <<endl;;
    std::cin>> x >> y;
    sum=x+y;
    std::cout << "The sum of x and y is" << sum << std::endl;
    return 0;
}
*/
//Encapsulation
/*#include <iostream>
using namespace std;

class test {
public: // Members need to be public to be accessed from outside the class
    int x, y, sum;

    void calculate_sum() { // Member function to perform the calculation
        cout << "Enter values for x and y: ";
        cin >> x >> y;
        sum = x + y; // Perform the addition
    }

    void display_sum() { // Member function to display the result
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    test t1;
    t1.calculate_sum(); // Call the input and calculation function
    t1.display_sum();   // Call the display function
    return 0;
}*/

/*#include <iostream>
using namespace std;

class student 
{
    int id, markstotal, percentage;
    char name[30]; char g;
    int arr[5];

public:
    void input();
    void cal();
    void print();
};

void student::input()
{
    cout << "Enter the student id: ";
    cin >> id;

    cout << "Enter student name: ";
    cin >> name;   // For names without spaces

    cout << "Enter marks of five subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
}

void student::cal()
{
    markstotal = 0;
    for (int i = 0; i < 5; i++)
    {
        markstotal += arr[i];
    }

    percentage = (markstotal * 100.0) / 500.0;
}

void student::print()
{
    cout << "\n--- Student Details ---\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << markstotal << endl;
    cout << "Percentage: " << percentage << "%\n";

    if (percentage > 90)
        cout << "Grade: O\n";
    else if (percentage > 80)
        cout << "Grade: A\n";
    else if (percentage > 70)
        cout << "Grade: B\n";
    else if (percentage > 60)
        cout << "Grade: C\n";
    else
        cout << "Grade: D\n";
}

int main()
{
    student s;

    s.input();   // Take data
    s.cal();     // Calculate total & percentage
    s.print();   // Display result

    return 0;
}*/
/*
#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    Student(int r, string n) {
        id = r;
        name = n;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Navya");
    s1.display();
    return 0;
}*/

/*#include <iostream>
using namespace std;

class Student {
    int id;

public:
    Student(int r) {
        id = r;
    }
    Student(const Student &s) {
        id = s.id;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Id: " << id << endl;
    }
};

int main() {
    Student s1(104);     
    Student s2 = s1;    

    s2.display();
    return 0;
}
*/

/*#include <iostream>
using namespace std;

class BankAccount {
    string accountHolder;
    long accountNumber;
    double balance;

    // Private helper function
    bool isValidAmount(double amount) {
        return amount > 0;
    }

public:
    // Constructor
    BankAccount(string n, long a, double ibal) {
        accountHolder = n;
        accountNumber = a;

        if (ibal >= 0) {
            balance = ibal;
        } else {
            balance = 0;
        }
    }

    // Getters
    string getAccountHolder() {
        return accountHolder;
    }

    long getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    // Function declarations
    void deposit(double amt);
    void withdraw(double amt);
    void display();
};

// Deposit definition
void BankAccount::deposit(double amt) {
    if (isValidAmount(amt)) {
        balance += amt;
        cout << "Deposit successful. New balance: " << balance << endl;
    } else {
        cout << "Invalid amount. Deposit failed." << endl;
    }
}

// Withdraw definition
void BankAccount::withdraw(double amt) {
    if (isValidAmount(amt) && amt <= balance) {
        balance -= amt;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    } else {
        cout << "Invalid amount or insufficient funds. Withdrawal failed." << endl;
    }
}

// Display definition
void BankAccount::display() {
    cout << "\nAccount Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: " << balance << endl;
}

// Main function to test
int main() {
    BankAccount acc("Navya",2345123567, 5000);

    acc.display();

    acc.deposit(1500);
    acc.withdraw(2000);
    acc.withdraw(10000);  

    acc.display();

    return 0;
}*/

//DIsplay
/*#include <iostream>
using namespace std;

class Inventory
{
private:
    int item[100];   // Encapsulated array (private)
    int size;
    int capacity;

    bool isValidIndex(int index)
    {
        return index >= 0 && index < size;
    }

public:
    Inventory(int cap = 100)
    {
        capacity = cap;
        size = 0;
    }

    void insert(int value)
    {
        if (size >= capacity)
        {
            cout << "Fail\n";
            return;   // stop execution
        }
        item[size++] = value;
        cout << "Success\n";
    }

    void display()
    {
        for (int i = 0; i < size; i++)
            cout << item[i] << " ";
        cout << endl;
    }
};

int main()
{
    Inventory obj(5);

    obj.insert(10);
    obj.insert(20);
    obj.insert(30);

    obj.display();

    return 0;
}*/

/*#include <iostream>
using namespace std;

class Inventory {
private:
    int arr[100];
    int size;
    int capacity;

public:
    // Constructor
    Inventory(int cap = 100) {
        capacity = cap;
        size = 0;
    }

    // Function to insert element at given position
    void insert(int element, int position) {
        
        for (int i = size; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        size++;
    }

    // Function to add elements at end
    void add(int element) {
        if (size < capacity) {
            arr[size++] = element;
        }
    }

    
    void display() {
        cout << "Inventory Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Inventory inv;

    int n, value, pos;

    cout << "Enter number of initial elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        inv.add(value);
    }

    inv.display();

    cout << "Enter element to insert: ";
    cin >> value;

    cout << "Enter position to insert: ";
    cin >> pos;

    inv.insert(value, pos);

    inv.display();

    return 0;
}*//*
#include <iostream>
using namespace std;

class Inventory {
private:
    int arr[100];
    int size;
    int capacity;

public:
    // Constructor
    Inventory(int cap = 100) {
        capacity = cap;
        size = 0;
    }

    // Add element at end
    void add(int element) {
        if (size < capacity) {
            arr[size++] = element;
        } else {
            cout << "Array is Full.\n";
        }
    }

    // Delete element at given position
    void deleteElement(int position) {
        if (position < 1 || position > size) {
            cout << "Invalid Position.\n";
            return;
        }

        // Shift elements to left
        for (int i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
        cout << "Element Deleted Successfully.\n";
    }

    // Display elements
    void display() {
        cout << "Inventory Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Inventory inv;
    int n, value, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        inv.add(value);
    }

    inv.display();

    cout << "Enter position to delete: ";
    cin >> pos;

    inv.deleteElement(pos);

    inv.display();

    return 0;
}*/

/*#include <iostream>
using namespace std;

class PatientQueue
{
    struct Node
    {
        int patientId;
        Node* next;

        Node(int id, Node* nxt = nullptr)
        {
            patientId = id;
            next = nxt;
        }
    };

    Node* head;

    bool isEmpty()
    {
        return head == nullptr;
    }

public:
    PatientQueue()
    {
        head = nullptr;
    }


    void addRegular(int id)
    {
        Node* newNode = new Node(id, nullptr);

        if (isEmpty())
        {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    
    void insertAt(int id, int pos)
    {
        if (pos <= 0 || isEmpty())
        {
            Node* newNode = new Node(id, head);
            head = newNode;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < pos - 1 && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Invalid Position\n";
            return;
        }

        Node* newNode = new Node(id, temp->next);
        temp->next = newNode;
    }

    // Display list
    void display()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->patientId << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    PatientQueue pq;

    pq.addRegular(101);
    pq.addRegular(102);
    pq.addRegular(103);

    pq.insertAt(100, 0);   
    pq.insertAt(105, 2);   

    pq.display();

    return 0;
}*/

/*#include <iostream>
using namespace std;

class BankAcc
{
protected:
    double balance;

public:
    BankAcc(double bal)
    {
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;   
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;  
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    void checkBal()
    {
        cout << "Balance: " << balance << endl;
    }
};

class SavingAcc : public BankAcc
{
public:
    SavingAcc(double bal) : BankAcc(bal) {}
    void intRate()
    {
        balance += balance * 0.05;   
    }
};
int main()
{
    SavingAcc SA(10000);

    SA.checkBal();       // 10000
    SA.deposit(5000);
    SA.checkBal();       // 15000
    SA.withdraw(2000);
    SA.checkBal();       // 13000
    SA.intRate();
    SA.checkBal();       // 13650

    return 0;
}
*/


/*#include <iostream>
using namespace std;

template <class T>
class BaseStack {
protected:
    T arr[100];
    int top;

public:
    BaseStack() {
        top = -1;
    }

    void push(T x) {
        if (top == 99) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    T pop() {
        if (top == -1) {
            cout << "Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
class BrowserStack : public BaseStack<int> {
public:
    void visitPage(int page) {
        push(page);
        cout << "Visited page: " << page << endl;
    }
};
class SecureBrowserStack : public BrowserStack {
public:
    void secureVisitPage(int page) {
        cout << "Secure browsing...\n";
        visitPage(page); 
    }
};

class UndoStack : public BaseStack<int> {
public:
    void undo() {
        int last = pop();
        if (last != -1)
            cout << "Undo page: " << last << endl;
    }
};
int main() {
    BrowserStack b;
    b.visitPage(10);
    b.visitPage(20);

    cout << "Browser History: ";
    b.display();

    SecureBrowserStack sb;
    sb.secureVisitPage(30);
    sb.secureVisitPage(40);

    cout << "Secure Browser History: ";
    sb.display();

    UndoStack u;
    u.push(100);
    u.push(200);

    u.undo();

    cout << "Undo Stack: ";
    u.display();

    return 0;
}*/
//Text editor
/*#include <iostream>
#include <stack>
using namespace std;

class TextEditor {
    stack<string> undoStack;
    stack<string> redoStack;
    string currentText;

public:
    void performAction(string action) {
        undoStack.push(currentText);   
        currentText += action;        


        while (!redoStack.empty()) {
            redoStack.pop();
        }

        cout << "Action performed: " << action << endl;
    }

    void undo() {
        if (!undoStack.empty()) {
            redoStack.push(currentText);  
            currentText = undoStack.top();
            undoStack.pop();
            cout << "Undo performed\n";
        } else {
            cout << "Nothing to undo\n";
        }
    }

    void redo() {
        if (!redoStack.empty()) {
            undoStack.push(currentText);   
            currentText = redoStack.top();
            redoStack.pop();
            cout << "Redo performed\n";
        } else {
            cout << "Nothing to redo\n";
        }
    }

    void display() {
        cout << "Current Text: " << currentText << endl;
    }
};

int main() {
    TextEditor editor;

    editor.performAction("Hello ");
    editor.performAction("World!");

    editor.display();

    editor.undo();
    editor.display();

    editor.redo();
    editor.display();

    return 0;
}*/
//Function overloading
/*#include <iostream>
using namespace std;

class Test
{
    int x = 10;
    double y = 10.1;

public:
    void add(int a)
    {
        cout << "The sum of x + a is: " << x + a << endl;
    }

    void add(double b)
    {
        cout << "The sum of y + b is: " << y + b << endl;
    }

    void add(int c, int d)
    {
        cout << "The sum of x + c + d is: " << x + c + d << endl;
    }
};

int main()
{
    Test t;   

    t.add(20);        
    t.add(20.2);      
    t.add(20, 30);   

    return 0;
}*/





//LINKED LIST
//1. Create & Display Linked List
/*#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp, *newNode;

    for(int i=1;i<=3;i++){
        newNode = new Node();
        cin >> newNode->data;
        newNode->next = NULL;

        if(head==NULL) head = temp = newNode;
        else { temp->next = newNode; temp = newNode; }
    }

    temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}*/
//2. Insert at Beginning
/*#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

int main() {
    Node* head = NULL;

    for(int i=1;i<=3;i++){
        Node* n = new Node();
        cin >> n->data;
        n->next = head;
        head = n;
    }

    for(Node* t=head;t;t=t->next)
        cout << t->data << " ";
}*/
//3. Insert at End
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL,*temp;

    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=NULL;

        if(!head) head=temp=n;
        else{ temp->next=n; temp=n; }
    }

    for(temp=head;temp;temp=temp->next)
        cout<<temp->data<<" ";
}*/
// 4. Count Nodes
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL,*t;
    int count=0;

    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=head;
        head=n;
    }

    for(t=head;t;t=t->next) count++;

    cout<<"Count="<<count;
}*/
// 5. Search Element
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL;
    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=head;
        head=n;
    }

    int key; cin>>key;
    for(Node* t=head;t;t=t->next){
        if(t->data==key){
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Not Found";
}*/
// 6. Delete First Node
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL;

    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=head;
        head=n;
    }

    Node* temp=head;
    head=head->next;
    delete temp;

    for(Node* t=head;t;t=t->next)
        cout<<t->data<<" ";
}*/
// 7. Delete Last Node
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL,*temp;

    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=NULL;
        if(!head) head=temp=n;
        else{ temp->next=n; temp=n; }
    }

    temp=head;
    while(temp->next->next)
        temp=temp->next;

    delete temp->next;
    temp->next=NULL;

    for(temp=head;temp;temp=temp->next)
        cout<<temp->data<<" ";
}*/
// 8. Reverse Linked List
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL;

    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=head;
        head=n;
    }

    Node *prev=NULL,*curr=head,*next;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    for(Node* t=prev;t;t=t->next)
        cout<<t->data<<" ";
}*/
// 9. Find Middle
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL;

    for(int i=0;i<5;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=head;
        head=n;
    }

    Node *slow=head,*fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    cout<<"Middle="<<slow->data;
}*/
// 10. Sum of Elements
/*#include <iostream>
using namespace std;

struct Node{int data; Node* next;};

int main(){
    Node *head=NULL;
    int sum=0;

    for(int i=0;i<3;i++){
        Node* n=new Node();
        cin>>n->data;
        n->next=head;
        head=n;
    }

    for(Node* t=head;t;t=t->next)
        sum+=t->data;

    cout<<"Sum="<<sum;
}*/
//11. Max Element
/*#include <iostream>
using namespace std;
struct Node{int d;Node* n;};
int main(){
Node* h=NULL;
for(int i=0;i<3;i++){Node* x=new Node();cin>>x->d;x->n=h;h=x;}
int mx=h->d;
for(Node* t=h;t;t=t->n) if(t->d>mx) mx=t->d;
cout<<mx;
}*/
//12. Min Element
/*#include <iostream>
using namespace std;
struct Node{int d;Node* n;};
int main(){
Node* h=NULL;
for(int i=0;i<3;i++){Node* x=new Node();cin>>x->d;x->n=h;h=x;}
int mn=h->d;
for(Node* t=h;t;t=t->n) if(t->d<mn) mn=t->d;
cout<<mn;
}*/
// 13. Length Recursion
/*#include <iostream>
using namespace std;
struct Node{int d;Node* n;};
int len(Node* h){ return h?1+len(h->n):0; }
int main(){
Node* h=NULL;
for(int i=0;i<3;i++){Node* x=new Node();cin>>x->d;x->n=h;h=x;}
cout<<len(h);
}*/
// 14. Insert at Position
/*#include <iostream>
using namespace std;
struct Node{int d;Node* n;};
int main(){
Node *h=NULL,*t;
for(int i=0;i<3;i++){
Node* x=new Node();cin>>x->d;x->n=NULL;
if(!h)h=t=x; else{t->n=x;t=x;}
}
int pos=2,val=99;
t=h;
for(int i=1;i<pos-1;i++) t=t->n;
Node* x=new Node();x->d=val;
x->n=t->n; t->n=x;
for(t=h;t;t=t->n) cout<<t->d<<" ";
}*/
//15. Delete by Value
/*#include <iostream>
using namespace std;
struct Node{int d;Node* n;};
int main(){
Node* h=NULL;
for(int i=0;i<3;i++){Node* x=new Node();cin>>x->d;x->n=h;h=x;}
int val; cin>>val;
Node* t=h;
while(t->n && t->n->d!=val) t=t->n;
if(t->n){Node* d=t->n; t->n=d->n; delete d;}
for(t=h;t;t=t->n) cout<<t->d<<" ";
}*/


//SINGLE INHERITEENCE

// Basic Single Inheritance
/*#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public A {
};

int main() {
    B obj;
    obj.show();
}*/
// Access Base Class Function
/*#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Parent class\n";
    }
};

class Child : public Parent {
};

int main() {
    Child c;
    c.display();
}*/
// Adding Child Function
/*#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A class\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "B class\n";
    }
};

int main() {
    B obj;
    obj.showA();
    obj.showB();
}*/
// Constructor in Inheritance
/*#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor A\n";
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor B\n";
    }
};

int main() {
    B obj;
}*/
// Area Calculation
/*#include <iostream>

using namespace std;

class Shape {
protected:
    int l, b;
};

class Rectangle : public Shape {
public:
    void input() {
        cin >> l >> b;
    }
    void area() {
        cout << "Area: " << l * b;
    }
};

int main() {
    Rectangle r;
    r.input();
    r.area();
}*/
//Student Marks
/*#include <iostream>
using namespace std;

class Student {
protected:
    int marks;
public:
    void getMarks() {
        cin >> marks;
    }
};

class Result : public Student {
public:
    void display() {
        cout << "Marks: " << marks;
    }
};

int main() {
    Result r;
    r.getMarks();
    r.display();
}*/

//MULTIPLE INHERITENCE

//Basic Multiple Inheritance
/*#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
}*/
// Access Functions from Two Base Classes
/*#include <iostream>
using namespace std;

class Father {
public:
    void skill() {
        cout << "Driving\n";
    }
};

class Mother {
public:
    void talent() {
        cout << "Cooking\n";
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child c;
    c.skill();
    c.talent();
}*/
// Adding Derived Class Function
/*#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A\n";
    }
};

class B {
public:
    void showB() {
        cout << "B\n";
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "C\n";
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
}*/
//Constructor in Multiple Inheritance
/*#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor A\n";
    }
};

class B {
public:
    B() {
        cout << "Constructor B\n";
    }
};

class C : public A, public B {
public:
    C() {
        cout << "Constructor C\n";
    }
};

int main() {
    C obj;
}*/
// Student Result System
/*#include <iostream>
using namespace std;

class Marks {
protected:
    int m1, m2;
public:
    void getMarks() {
        cin >> m1 >> m2;
    }
};

class Sports {
protected:
    int score;
public:
    void getScore() {
        cin >> score;
    }
};

class Result : public Marks, public Sports {
public:
    void total() {
        cout << "Total: " << m1 + m2 + score;
    }
};

int main() {
    Result r;
    r.getMarks();
    r.getScore();
    r.total();
}*/
//Perimeter of rectangle
/*#include <iostream>
using namespace std;

class Length {
protected:
    int l;
public:
    void getLength() {
        cout << "Enter length: ";
        cin >> l;
    }
};

// Second base class
class Breadth {
protected:
    int b;
public:
    void getBreadth() {
        cout << "Enter breadth: ";
        cin >> b;
    }
};

// Derived class
class Rectangle : public Length, public Breadth {
public:
    void perimeter() {
        cout << "Perimeter = " << 2 * (l + b);
    }
};

int main() {
    Rectangle r;
    r.getLength();
    r.getBreadth();
    r.perimeter();
}*/

//MIX CONSTRUCTORS CONCEPTS

// Average of Numbers
/*#include <iostream>
using namespace std;

class Average {
    int sum = 0, n;
public:
    Average(int x) {
        n = x;
        for(int i=1;i<=n;i++) {
            sum += i;
        }
    }
    void display() {
        cout << "Average: " << (float)sum / n;
    }
};

int main() {
    Average a(5);
    a.display();
}*/
// Find Maximum Number
/*#include <iostream>
using namespace std;

class Max {
    int a, b;
public:
    Max(int x, int y) {
        a = x;
        b = y;
    }
    void show() {
        if(a > b)
            cout << "Max: " << a;
        else
            cout << "Max: " << b;
    }
};

int main() {
    Max m(10, 20);
    m.show();
}*/
// Perimeter of Square
/*#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) {
        side = s;
    }
    void perimeter() {
        cout << "Perimeter: " << 4 * side;
    }
};

int main() {
    Square s(5);
    s.perimeter();
}*/
//Area of Square
/*#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) {
        side = s;
    }
    void area() {
        cout << "Area: " << side * side;
    }
};

int main() {
    Square s(5);
    s.area();
}*/
//Area of Rectangle
/*#include <iostream>
using namespace std;

class Rectangle {
    int l, b;
public:
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }
    void area() {
        cout << "Area: " << l * b;
    }
};

int main() {
    Rectangle r(4, 6);
    r.area();
}*/
//Perimeter of Square
/*#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) {
        side = s;
    }
    void perimeter() {
        cout << "Perimeter: " << 4 * side;
    }
};

int main() {
    Square s(5);
    s.perimeter();
}*/
//Area of Circle
/*#include <iostream>
using namespace std;

class Circle {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }
    void area() {
        cout << "Area: " << 3.14 * r * r;
    }
};

int main() {
    Circle c(5);
    c.area();
}*/
// Perimeter of Circle (Circumference)
/*#include <iostream>
using namespace std;

class Circle {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }
    void perimeter() {
        cout << "Perimeter: " << 2 * 3.14 * r;
    }
};

int main() {
    Circle c(5);
    c.perimeter();
}*/

//MULTILEVEL INHERITENCE

// Sum
/*#include <iostream>
using namespace std;

class A {
protected:
    int a, b;
public:
    void get() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};

class B : public A {
public:
    int sum() {
        return a + b;
    }
};

class C : public B {
public:
    void show() {
        cout << "Sum = " << sum();
    }
};

int main() {
    C obj;
    obj.get();
    obj.show();
    return 0;
}*/
//. Subtraction
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:int sub(){return a-b;}
};

class C:public B {
public:void show(){cout<<"Subtraction="<<sub();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Multiplication
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:int mul(){return a*b;}
};

class C:public B {
public:void show(){cout<<"Multiplication="<<mul();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Division
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:float div(){return (float)a/b;}
};

class C:public B {
public:void show(){cout<<"Division="<<div();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
//Average
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:float avg(){return (a+b)/2.0;}
};

class C:public B {
public:void show(){cout<<"Average="<<avg();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Maximum
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:int max(){return (a>b)?a:b;}
};

class C:public B {
public:void show(){cout<<"Max="<<max();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Minimum
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:int min(){return (a<b)?a:b;}
};

class C:public B {
public:void show(){cout<<"Min="<<min();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Square
/*#include <iostream>
using namespace std;

class A {
protected:int a;
public:void get(){cin>>a;}
};

class B:public A {
public:int square(){return a*a;}
};

class C:public B {
public:void show(){cout<<"Square="<<square();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Cube
/*#include <iostream>
using namespace std;

class A {
protected:int a;
public:void get(){cin>>a;}
};

class B:public A {
public:int cube(){return a*a*a;}
};

class C:public B {
public:void show(){cout<<"Cube="<<cube();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
//Even / Odd
/*#include <iostream>
using namespace std;

class A {
protected:int a;
public:void get(){cin>>a;}
};

class B:public A {
public:void check(){
    if(a%2==0) cout<<"Even";
    else cout<<"Odd";
}
};

class C:public B {
public:void show(){check();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
//Swap
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:void swap(){
    int t=a; a=b; b=t;
}
};

class C:public B {
public:void show(){
    swap();
    cout<<"After Swap: "<<a<<" "<<b;
}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Largest of 3
/*#include <iostream>
using namespace std;

class A {
protected:int a,b,c;
public:void get(){cin>>a>>b>>c;}
};

class B:public A {
public:int largest(){
    if(a>b && a>c) return a;
    else if(b>c) return b;
    else return c;
}
};

class C:public B {
public:void show(){cout<<"Largest="<<largest();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Sum of 3 Numbers
/*#include <iostream>
using namespace std;

class A {
protected:int a,b,c;
public:void get(){cin>>a>>b>>c;}
};

class B:public A {
public:int sum(){return a+b+c;}
};

class C:public B {
public:void show(){cout<<"Sum="<<sum();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Average of 3 Numbers
/*#include <iostream>
using namespace std;

class A {
protected:int a,b,c;
public:void get(){cin>>a>>b>>c;}
};

class B:public A {
public:float avg(){return (a+b+c)/3.0;}
};

class C:public B {
public:void show(){cout<<"Average="<<avg();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Reverse Number
/*#include <iostream>
using namespace std;

class A {
protected:int n;
public:void get(){cin>>n;}
};

class B:public A {
public:int reverse(){
    int r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
};

class C:public B {
public:void show(){cout<<"Reverse="<<reverse();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/
// Modulus
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:public A {
public:int mod(){return a%b;}
};

class C:public B {
public:void show(){cout<<"Modulus="<<mod();}
};

int main(){
    C obj; obj.get(); obj.show();
}*/

//HERARCHICAL INHERITANCE

// Simple Hierarchical Inheritance
/*#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base class\n"; }
};

class A : public Base {
public:
    void displayA() { cout << "Class A\n"; }
};

class B : public Base {
public:
    void displayB() { cout << "Class B\n"; }
};

int main() {
    A a; B b;
    a.show(); a.displayA();
    b.show(); b.displayB();
}*/
// Sum
/*#include <iostream>
using namespace std;

class Number {
public:
    int a=10, b=5;
};

class Sum : public Number {
public:
    void calc() { cout << "Sum = " << a + b; }
};

class Dummy : public Number {};

int main() {
    Sum s;
    s.calc();
}*/
// Multiply
/*#include <iostream>
using namespace std;

class Num { public: int a=4, b=3; };

class Mul : public Num {
public:
    void calc() { cout << "Mul = " << a*b; }
};

class Test : public Num {};

int main() {
    Mul m; m.calc();
}*/
// Division
/*#include <iostream>
using namespace std;

class Num { public: int a=20, b=4; };

class Div : public Num {
public:
    void calc() { cout << "Div = " << a/b; }
};

class Test : public Num {};

int main() {
    Div d; d.calc();
}*/
// Even Number
/*#include <iostream>
using namespace std;

class Num { public: int n=6; };

class Even : public Num {
public:
    void check() {
        if(n%2==0) cout << "Even";
    }
};

class Odd : public Num {};

int main() {
    Even e; e.check();
}*/
// Odd Number
/*#include <iostream>
using namespace std;

class Num { public: int n=7; };

class Odd : public Num {
public:
    void check() {
        if(n%2!=0) cout << "Odd";
    }
};

class Even : public Num {};

int main() {
    Odd o; o.check();
}*/
// Maximum
/*#include <iostream>
using namespace std;

class Num { public: int a=10, b=15; };

class Max : public Num {
public:
    void find() {
        cout << "Max = " << (a>b?a:b);
    }
};

class Min : public Num {};

int main() {
    Max m; m.find();
}*/
// Minimum
/*#include <iostream>
using namespace std;

class Num { public: int a=10, b=5; };

class Min : public Num {
public:
    void find() {
        cout << "Min = " << (a<b?a:b);
    }
};

class Max : public Num {};

int main() {
    Min m; m.find();
}*/
// Square
/*#include <iostream>
using namespace std;

class Num { public: int n=5; };

class Square : public Num {
public:
    void calc() { cout << "Square = " << n*n; }
};

class Cube : public Num {};

int main() {
    Square s; s.calc();
}*/
// Cube
/*#include <iostream>
using namespace std;

class Num { public: int n=3; };

class Cube : public Num {
public:
    void calc() { cout << "Cube = " << n*n*n; }
};

class Square : public Num {};

int main() {
    Cube c; c.calc();
}*/

//HYBRID INHERTANCE

//Sum
/*#include <iostream>
using namespace std;

class A {
protected:int a,b;
public:void get(){cin>>a>>b;}
};

class B:virtual public A {};
class C:virtual public A {};

class D:public B, public C {
public:void show(){cout<<"Sum="<<a+b;}
};

int main(){
    D obj; obj.get(); obj.show();
}*/
// Subtraction
/*#include <iostream>
using namespace std;

class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Sub="<<a-b;}
};

int main(){D obj; obj.get(); obj.show();}*/
// Multiplication
/*#include <iostream>
using namespace std;

class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Mul="<<a*b;}
};

int main(){D obj; obj.get(); obj.show();}*/
// Division
/*#include <iostream>
using namespace std;

class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Div="<<(float)a/b;}
};

int main(){D obj; obj.get(); obj.show();}*/
// Average
/*#include <iostream>
using namespace std;

class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Avg="<<(a+b)/2.0;}
};

int main(){D obj; obj.get(); obj.show();}*/
// Maximum
/*#include <iostream>
using namespace std;

class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Max="<<(a>b?a:b);}
};

int main(){D obj; obj.get(); obj.show();}*/
// Minimum
/*#include <iostream>
using namespace std;

class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Min="<<(a<b?a:b);}
};

int main(){D obj; obj.get(); obj.show();}*/

//Square
/*#include <iostream>
using namespace std;

class A{protected:int a; public:void get(){cin>>a;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Square="<<a*a;}
};

int main(){D obj; obj.get(); obj.show();}*/
// Cube
/*#include <iostream>
using namespace std;

class A{protected:int a; public:void get(){cin>>a;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){cout<<"Cube="<<a*a*a;}
};

int main(){D obj; obj.get(); obj.show();}*/
// Even / Odd
/*#include <iostream>
using namespace std;

class A{protected:int a; public:void get(){cin>>a;}};
class B:virtual public A{};
class C:virtual public A{};

class D:public B,public C{
public:void show(){
    if(a%2==0) cout<<"Even";
    else cout<<"Odd";
}
};

int main(){D obj; obj.get(); obj.show();}*/

//Operator overloadding
/*#include <iostream>
using namespace std;

class test {
    int x;

public:
    test(int x) {
        this->x = x;
    }

    test operator++() {
        test t(0);
        t.x = ++x;
        return t;
    }

    void display() {
        cout << "Value of x = " << x;
    }
};

int main() {
    test t(5);
    ++t;
    t.display();
    return 0;
}*/
//Sum operator overloading
/*#include <iostream>
using namespace std;

class Account {
    int bal;

public:
    Account(int b) {
        bal = b;
    }
    Account operator+(Account obj) {
        return Account(bal + obj.bal);
    }
    void display() {
        cout << "Balance = " << bal << endl;
    }
};

int main() {
    Account a(1000);
    Account b(2000);

    Account sum = a + b;

    sum.display();

    return 0;
}*/
/*#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }
    friend ostream& operator<<(ostream &out, Student s);
};
ostream& operator<<(ostream &out, Student s) {
    out << "Marks = " << s.marks;
    return out;
}

int main() {
    Student s(95);
    cout << s;

    return 0;
}*/

//TERM 2 PAPER
/*#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m) {
        marks = m;
    }

    bool operator==(Student s) {
        return marks == s.marks;
    }
};

int main() {
    Student s1(90), s2(90);

    if (s1 == s2)
        cout << "Equal Marks";
    else
        cout << "Not Equal";

    return 0;
}*/
//5 MARK QUESTION
/*#include <iostream>


using namespace std;

// Base class
class Person {
public:
    string name;
};


class Student : public Person {
public:
    int marks[5];

    void calculate() {
        int sum = 0;
        for(int i = 0; i < 5; i++)
            sum += marks[i];

        float gpa = sum / 5.0;
        cout << "Student GPA: " << gpa << endl;
    }
};


class Professor : public Person {
public:
    int salary;

    void calculate() {
        cout << "Professor Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    s.name = "Navya";
    s.marks[0]=80; s.marks[1]=85; s.marks[2]=90; s.marks[3]=88; s.marks[4]=92;
    s.calculate();

    Professor p;
    p.name = "Dr. Sharma";
    p.salary = 50000;
    p.calculate();

    return 0;
}

// Undo Feature in Text Editor

 Real-world: Like Ctrl+Z in Word/Notepad

#include <iostream>
#include <stack>
using namespace std;

class StackBase {
protected:
    stack<string> s;
public:
    void push(string x) { s.push(x); }
    void pop() { if(!s.empty()) s.pop(); }
};

class TextEditor : public StackBase {
public:
    void write(string text) {
        push(text);
        cout << "Written: " << text << endl;
    }
    void undo() {
        if(!s.empty()) {
            cout << "Undo: " << s.top() << endl;
            pop();
        }
    }
};

int main() {
    TextEditor t;
    t.write("Hello");
    t.write("World");
    t.undo();
}

2. Redo System
#include <iostream>
#include <stack>
using namespace std;

class StackBase {
protected:
    stack<string> undoS, redoS;
};

class RedoSystem : public StackBase {
public:
    void action(string x) {
        undoS.push(x);
    }
    void undo() {
        if(!undoS.empty()) {
            redoS.push(undoS.top());
            undoS.pop();
        }
    }
    void redo() {
        if(!redoS.empty()) {
            cout << "Redo: " << redoS.top() << endl;
            redoS.pop();
        }
    }
};

int main() {
    RedoSystem r;
    r.action("Edit");
    r.undo();
    r.redo();
}
✅ 3. Browser Back
#include <iostream>
#include <stack>
using namespace std;

class StackBase {
protected:
    stack<string> s;
};

class BrowserBack : public StackBase {
public:
    void visit(string page) {
        s.push(page);
    }
    void back() {
        if(!s.empty()) {
            s.pop();
            cout << "Back\n";
        }
    }
};

int main() {
    BrowserBack b;
    b.visit("A");
    b.visit("B");
    b.back();
}

1. Function Overloading (Sum)
#include <iostream>
using namespace std;

class Calc {
public:
    int sum(int a, int b) { return a + b; }
    int sum(int a, int b, int c) { return a + b + c; }
};

int main() {
    Calc c;
    cout << c.sum(2,3) << endl;
    cout << c.sum(1,2,3);
}
✅ 2. Function Overloading (Area)
#include <iostream>
using namespace std;

class Area {
public:
    int calc(int s) { return s*s; }
    int calc(int l, int b) { return l*b; }
};

int main() {
    Area a;
    cout << a.calc(4) << endl;
    cout << a.calc(4,5);
}
✅ 3. Operator Overloading (+)
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) { x = a; }
    Num operator + (Num n) {
        return Num(x + n.x);
    }
    void show() { cout << x; }
};

int main() {
    Num n1(5), n2(10);
    Num n3 = n1 + n2;
    n3.show();
}
✅ 4. Operator Overloading (-)
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) { x = a; }
    Num operator - (Num n) {
        return Num(x - n.x);
    }
    void show() { cout << x; }
};

int main() {
    Num n1(10), n2(4);
    Num n3 = n1 - n2;
    n3.show();
}
✅ 5. Operator Overloading (*)
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) { x = a; }
    Num operator * (Num n) {
        return Num(x * n.x);
    }
    void show() { cout << x; }
};

int main() {
    Num n1(3), n2(4);
    Num n3 = n1 * n2;
    n3.show();
}

6. Operator Overloading (==)
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) { x = a; }
    bool operator == (Num n) {
        return x == n.x;
    }
};

int main() {
    Num n1(5), n2(5);
    if(n1 == n2) cout << "Equal";
}
✅ 7. Function Overloading (Max)
#include <iostream>
using namespace std;

class Max {
public:
    int find(int a, int b) { return (a>b)?a:b; }
    float find(float a, float b) { return (a>b)?a:b; }
};

int main() {
    Max m;
    cout << m.find(2,3) << endl;
    cout << m.find(2.5f,3.5f);
}
✅ 8. Operator Overloading (++)
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) { x = a; }
    void operator ++ () {
        x++;
    }
    void show() { cout << x; }
};

int main() {
    Num n(5);
    ++n;
    n.show();
}
✅ 9. Function Overloading (Print)
#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) { cout << a << endl; }
    void show(string s) { cout << s; }
};

int main() {
    Print p;
    p.show(10);
    p.show("Hello");
}
✅ 10. Operator Overloading (>)
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) { x = a; }
    bool operator > (Num n) {
        return x > n.x;
    }
};

int main() {
    Num n1(10), n2(5);
    if(n1 > n2) cout << "Greater";
}

11. Basic Function Overriding
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived"; }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
}
✅ 12. Shape Example
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout << "Shape"; }
};

class Circle : public Shape {
public:
    void draw() { cout << "Circle"; }
};

int main() {
    Shape* s = new Circle();
    s->draw();
}
✅ 13. Animal Sound
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal sound"; }
};

class Dog : public Animal {
public:
    void sound() { cout << "Bark"; }
};

int main() {
    Animal* a = new Dog();
    a->sound();
}
✅ 14. Vehicle
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void run() { cout << "Vehicle running"; }
};

class Car : public Vehicle {
public:
    void run() { cout << "Car running"; }
};

int main() {
    Vehicle* v = new Car();
    v->run();
}
✅ 15. Bank
#include <iostream>
using namespace std;

class Bank {
public:
    virtual void rate() { cout << "Base rate"; }
};

class SBI : public Bank {
public:
    void rate() { cout << "SBI rate"; }
};

int main() {
    Bank* b = new SBI();
    b->rate();
}*/

/*#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    void input() {
        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student marks: ";
        cin >> marks;

        cout << "Enter student name: ";
        cin >> name;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks << endl;
        cout << "Name: " << name << endl;
    }
};

// Add Student
void addStudent() {
    Student s;
    ofstream file("student.txt", ios::app); 

    s.input();

    file.write((char*)&s, sizeof(s));
    file.close();

    cout << "Details entered successfully!\n";
}
void viewStudent() {
    Student s;
    ifstream file("student.txt");

    while (file.read((char*)&s, sizeof(s))) {
        s.display();
    }

    file.close();
}

void searchStudent() {
    int searchId;
    cout << "Enter ID to search: ";
    cin >> searchId;

    Student s;
    ifstream file("student.txt");

    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.id == searchId) {
            cout << "Student Found:\n";
            s.display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!\n";
    }

    file.close();
}
int main() {
    int ch;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: addStudent(); break;
            case 2: viewStudent(); break;
            case 3: searchStudent(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (ch != 4);

    return 0;
}\

.

🔹 1–10: Basic ofstream (write files)
// 1
#include <fstream>
using namespace std;
int main() {
    ofstream file("a.txt");
    file << "Hello";
}
// 2
#include <fstream>
using namespace std;
int main() {
    ofstream f("b.txt");
    f << 100;
}
// 3
#include <fstream>
using namespace std;
int main() {
    ofstream f("c.txt");
    f << "Line1\nLine2";
}
// 4
#include <fstream>
using namespace std;
int main() {
    ofstream f("d.txt");
    for(int i=1;i<=5;i++) f<<i<<" ";
}
// 5
#include <fstream>
using namespace std;
int main() {
    ofstream f("e.txt");
    f<<"Navya";
}
// 6
#include <fstream>
using namespace std;
int main() {
    ofstream f("f.txt");
    f<<3.14;
}
// 7
#include <fstream>
using namespace std;
int main() {
    ofstream f("g.txt");
    f<<"C++ File Handling";
}
// 8
#include <fstream>
using namespace std;
int main() {
    ofstream f("h.txt");
    char ch='A';
    f<<ch;
}
// 9
#include <fstream>
using namespace std;
int main() {
    ofstream f("i.txt");
    f<<"Test";
}
// 10
#include <fstream>
using namespace std;
int main() {
    ofstream f("j.txt");
    f<<"Done";
}
🔹 11–20: ifstream (read files)
// 11
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("a.txt");
    string s;
    f>>s;
    cout<<s;
}
// 12
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("b.txt");
    int x;
    f>>x;
    cout<<x;
}
// 13
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("c.txt");
    string line;
    getline(f,line);
    cout<<line;
}
// 14
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("d.txt");
    int x;
    while(f>>x) cout<<x<<" ";
}
// 15
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("e.txt");
    char ch;
    f>>ch;
    cout<<ch;
}
// 16
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("f.txt");
    float x;
    f>>x;
    cout<<x;
}
// 17
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("g.txt");
    string s;
    getline(f,s);
    cout<<s;
}
// 18
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("h.txt");
    char ch;
    f>>ch;
    cout<<ch;
}
// 19
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("i.txt");
    string s;
    f>>s;
    cout<<s;
}
// 20
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream f("j.txt");
    string s;
    f>>s;
    cout<<s;
}
🔹 21–30: fstream (read + write)
// 21
#include <fstream>
using namespace std;
int main() {
    fstream f("x.txt", ios::out);
    f<<"Hello";
}
// 22
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    fstream f("x.txt", ios::in);
    string s; f>>s;
    cout<<s;
}
// 23
#include <fstream>
using namespace std;
int main() {
    fstream f("y.txt", ios::out);
    f<<123;
}
// 24
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    fstream f("y.txt", ios::in);
    int x; f>>x;
    cout<<x;
}
// 25
#include <fstream>
using namespace std;
int main() {
    fstream f("z.txt", ios::out);
    f<<"Test";
}
// 26
#include <fstream>
using namespace std;
int main() {
    fstream f("z.txt", ios::app);
    f<<"Append";
}
// 27
#include <fstream>
using namespace std;
int main() {
    fstream f("a1.txt", ios::out);
    f<<3.5;
}
// 28
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    fstream f("a1.txt", ios::in);
    float x; f>>x;
    cout<<x;
}
// 29
#include <fstream>
using namespace std;
int main() {
    fstream f("file.txt", ios::out);
    f<<"Done";
}
// 30
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    fstream f("file.txt", ios::in);
    string s; f>>s;
    cout<<s;
}
🔹 30

Q. Read a string from a file using fstream and display it.

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream f("file.txt", ios::out);
    f << "Hello";
    f.close();

    fstream f2("file.txt", ios::in);
    string s;
    f2 >> s;
    cout << s;
}

Output:

Hello
🔹 31

Q. Insert an element into a vector using push_back() and print it.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(5);
    cout << v[0];
}

Output:

5
🔹 32

Q. Add two elements to a vector and access using at().

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    cout << v.at(1);
}

Output:

20
🔹 33

Q. Remove last element using pop_back().

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1,2,3};
    v.pop_back();
    cout << v.size();
}

Output:

2
🔹 34

Q. Access vector element using at().

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {5,6,7};
    cout << v.at(2);
}

Output:

7
🔹 35

Q. Insert 5 elements using loop and push_back().

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    for(int i=1;i<=5;i++)
        v.push_back(i);

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
}

Output:

1 2 3 4 5
🔹 36

Q. Remove last element and display size.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1,2,3};
    v.pop_back();
    cout << v.size();
}

Output:

2
🔹 37

Q. Print first element using at().

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {2,4,6};
    cout << v.at(0);
}

Output:

2
🔹 38

Q. Insert one element into vector.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(100);
    cout << v[0];
}

Output:

100
🔹 39

Q. Add element to existing vector.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1,2};
    v.push_back(3);

    for(int i : v)
        cout << i << " ";
}

Output:

1 2 3
🔹 40

Q. Remove last element from vector.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {9,8,7};
    v.pop_back();

    for(int i : v)
        cout << i << " ";
}

Output:

9 8
🔹 41

Q. Write vector elements to a file.

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3};
    ofstream f("v.txt");

    for(int x : v)
        f << x << " ";
}

Output (file):

1 2 3
🔹 42

Q. Read numbers from file into vector.

#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    ifstream f("v.txt");
    vector<int> v;
    int x;

    while(f >> x)
        v.push_back(x);

    for(int i : v)
        cout << i << " ";
}

Output:

1 2 3
🔹 43

Q. Write first vector element to file using at().

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5,10};
    ofstream f("a.txt");
    f << v.at(0);
}

Output (file):

5
🔹 44

Q. Store vector element and write to file.

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);

    ofstream f("b.txt");
    f << v[0];
}

Output (file):

1
🔹 45

Q. Remove element and store size in file.

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2};
    v.pop_back();

    ofstream f("c.txt");
    f << v.size();
}

Output (file):

1
🔹 46

Q. Read file into vector and print size.

#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    ifstream f("d.txt");
    vector<int> v;
    int x;

    while(f >> x)
        v.push_back(x);

    cout << v.size();
}

Output (depends on file)

🔹 47

Q. Write second element using at().

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3,4};
    ofstream f("e.txt");
    f << v.at(1);
}

Output (file):

4
🔹 48

Q. Write vector element using index.

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(8);

    ofstream f("f.txt");
    f << v[1];
}

Output (file):

8
🔹 49

Q. Remove element and write remaining value.

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {7,6};
    v.pop_back();

    ofstream f("g.txt");
    f << v[0];
}

Output (file):

7
🔹 50

Q. Store and write element using at().

#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(100);

    ofstream f("h.txt");
    f << v.at(0);
}

Output (file):

100
🔹 51–70 (SHORT — exam revision style)

I’ll keep these compact but complete so you can revise fast 👇

🔹 51

Q. Write text using ofstream

ofstream f("x.txt"); f<<"Start";

Output (file): Start

🔹 52

Q. Insert element in vector

vector<int> v={1}; v.push_back(2);

Output: 1 2

🔹 53

Q. Pop element

vector<int> v={1,2,3}; v.pop_back();

Output: 1 2

🔹 54

Q. Write vector to file

vector<int> v={1,2}; ofstream f("y.txt");
for(int i:v) f<<i;

Output (file): 12

🔹 55

Q. Read from file

ifstream f("y.txt"); int x; f>>x; cout<<x;

Output: 12

🔹 56

Q. Access using at()

vector<int> v={5,6}; cout<<v.at(1);

Output: 6*/

