#include "Admin.h"


Admin::Admin()
{
	adminID = " ";
}

Admin::Admin(string a_uID, string a_uName, string a_uEmail, string a_uPw, string a_uAddrs, string a_id) : 
	User (a_uID, a_uName, a_uEmail, a_uPw, a_uAddrs)
{
	adminID = a_id;
}

void Admin::ManageUser()
{
}

void Admin::ManageCompany()
{
}

void Admin::ManageJobs()
{
}

void Admin::ManageFeedback()
{
}

void Admin::ManageApplication()
{
}

void Admin::displayAdminDetail()
{
	User::displayUser();
	cout << "Admin ID: " << adminID << endl;
}

Admin::~Admin()
{
	cout << "Admin class deleted" << endl;
}
