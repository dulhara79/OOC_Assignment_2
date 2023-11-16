#include "Application.h"

Application::Application()
{
}

void Application::setApplicationDetails(string apply_date, string apply_id)
{
	ApplicationDate = apply_date;
	ApplicatonID = apply_id;
}

void Application::getApplicationDetails()
{
	cout << "Application ID: " << ApplicatonID << endl 
		<< "Application date: " << ApplicationDate << endl;
}

Application::~Application()
{
	cout << "Application deleted: " << ApplicatonID << endl;
}
