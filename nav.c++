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
}*/

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
}