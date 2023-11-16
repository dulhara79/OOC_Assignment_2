#pragma once
#include"User.h"
#include<iostream>
#define SIZE 1
using namespace std;

class Admin : public User
{
private:
	string adminID;
public:
	Admin();
	Admin(string a_uID, string a_uName, string a_uEmail, string a_uPw, string a_uAddrs, string a_id);
	void ManageUser();
	void ManageCompany();
	void ManageJobs();
	void ManageFeedback();
	void ManageApplication();
	void displayAdminDetail();
	~Admin();
};

