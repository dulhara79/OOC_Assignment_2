#pragma once
#include"User.h"
#include<iostream>
using namespace std;

class Applicant : public User
{
private:
	string ApplicationID;
public:
	Applicant();
	Applicant(string applic_uid, string applic_uname, string applic_uemail, string applic_upw, string applic_uaddrs, string apllic_id);
	void viewApplicationDetail();
	void viewApplicationSatus();
	void applyForJobs();
	~Applicant();
};

