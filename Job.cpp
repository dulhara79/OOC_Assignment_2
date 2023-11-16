#include "Job.h"
#include<iostream>
#include<string>
#define SIZE 1
using namespace std;

Job::Job()
{
	jobID = " ";
	title = " ";
	description = " ";
	location = " ";
	postDate = " ";
	payment[0] = new Payment("Test", 00.0 , "Test", "Test");
}

Job::Job(string j_id, string j_title, string j_des, string j_loc, string j_date, string j_pid, float j_pamount, string j_pdate, string j_pstatus)
{
	jobID = j_id;
	title = j_title;
	description = j_des;
	location = j_loc;
	postDate = j_date;
	payment[0] = new Payment(j_pid, j_pamount, j_pdate, j_pstatus);
}

void Job::editJob()
{
}

void Job::deleteJob()
{
}

void Job::DisplayJobDetails()
{
	cout << "Job ID: " << jobID << endl << "Title: " << title << endl << "Description: " << description << endl 
		<< "Location: " << location << endl << "Post date: " << postDate << endl;
	for (int i = 0; i < SIZE; i++) {
		payment[i]->displayPayment();
	}
}

void Job::applicationDetails()
{
}

Job::~Job()
{
	cout << "Job deleted: " << jobID << endl;
	for (int i = 0; i < SIZE; i++) {
		delete payment[i];
	}
}