#pragma once
#include"User.h"
#include"Payment.h"
#include<iostream>
#include<string>
#define SIZE 1
using namespace std;

class Company : public User
{
private:
	string companyName;
	string industry;
	Payment* pay[SIZE];
public:
	Company();
	Company(string cmp_uid, string cmp_uname, string cmp_uemail, string cmp_upw, string cmp_uaddrs);
	void postJob(string cmp_name, string cmp_indus, Payment* paym1);
	void displayPayments();
	void viewApplicant();
	void hireApplicant();
	void displayCompany();
	~Company();
};

