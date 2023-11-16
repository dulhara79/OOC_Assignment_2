#pragma once
#include"Feedback.h"
#include"User.h"
#include<iostream>
#define SIZE 1
using namespace std;

class User
{
protected:
	string userID;
	string name;
	string email;
	string password;
	string address;
	Feedback* fdb[SIZE];
public:
	User();
	User(string u_id, string u_name, string u_email, string u_pw, string u_addrs);
	void sendFeedback(string feed_id, string feed_content);
	void displayUser();
	void DisplayUserFeedback();
	~User();
};

