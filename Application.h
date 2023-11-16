#pragma once
#include<iostream>
using namespace std;

class Application
{
private:
	string ApplicationDate;
	string ApplicatonID;
public:
	Application();
	void setApplicationDetails(string apply_date, string apply_id);
	void getApplicationDetails();
	~Application();
};

