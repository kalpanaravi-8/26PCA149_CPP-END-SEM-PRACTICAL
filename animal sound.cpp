#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
queue<string> q;
int choice;
string name;
do
{
cout << "\n1. Add Student";
cout << "\n2. Serve Student";
cout << "\n3. Display Students";
cout << "\n4. Exit";
cout << "\nEnter choice: ";
cin >> choice;
if (choice == 1)
{
cout << "Enter name: ";
cin >> name;
q.push(name);
cout << name << " added.\n";
}
else if (choice == 2)
{
if (q.empty())
{
cout << "Queue is empty.\n";
}
else
{
cout << q.front() << " served.\n";
q.pop();
}
}
else if (choice == 3)
{
if (q.empty())
{
cout << "Queue is empty.\n";
}
else
{
queue<string> temp = q;
cout << "Waiting students:\n";
while (!temp.empty())
{
cout << temp.front() << endl;
temp.pop();
}
}
}
else if (choice == 4)
{
cout << "Exit\n";
}
else
{
cout << "Invalid choice.\n";
}
} while (choice != 4);
return 0;
}
