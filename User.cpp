#include "User.h"
#include<iostream>
using namespace std;

User::User()
{
	//default constructor
	userID = " ";
	name = " ";
	email = " ";
	password = " ";
	address = " ";
	fdb[0] = new Feedback("xx", "yy", "zz");
}

User::User(string u_id, string u_name, string u_email, string u_pw, string u_addrs)
{
	//Over loaded constructor
	userID = u_id;
	name = u_name;
	email = u_email;
	password = u_pw;
	address = u_addrs;
}

void User::sendFeedback(string feed_id, string feed_content)
{
	fdb[0] = new Feedback(feed_id, userID, feed_content);
}

void User::displayUser()
{
	cout << "User ID :" << userID << endl << "Name: " << name << endl << "Email: " << email << endl
		<< "Password: " << password << endl << "Address: " << address << endl;
}

void User::DisplayUserFeedback()
{
	for (int i = 0; i < SIZE; i++) {
		fdb[i]->displayFeedback();
	}
}

User::~User()
{
	cout << "User deleted: " << userID << endl;
	delete fdb[0];
}
