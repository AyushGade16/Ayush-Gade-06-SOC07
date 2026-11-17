#include <iostream>
using namespace std;
class Book
{
public:
   string author;
   string title;
Book (string t, string a)
{
	title = t;
	author = a;
}

Book(Book &b)
{
author=b.author;
title=b.title;
}
void display()
{
	cout<<"author="<<author<<endl;
	cout<<"title="<<title<<endl;
}
};
int main()
{
	Book b1("MFC-1", "Hemant sir");
	Book b2(b1);
b1.display();
b2.display();
return 0;
};
