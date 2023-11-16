#include "Feedback.h"
#include<iostream>
using namespace std;

Feedback::Feedback()
{
}

Feedback::Feedback(string f_id, string u_id, string f_content)
{
	feedbackID = f_id;
	userID = u_id;
	content = f_content;
}

void Feedback::showing()
{
}

void Feedback::displayFeedback()
{
	cout << "Feedback ID: " << feedbackID << endl << "User ID: " << userID << endl << "Content: " << content << endl;
}

Feedback::~Feedback()
{
	cout << "feedback deleted: " << feedbackID << endl;
}
