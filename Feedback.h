#pragma once
#include<string>
using namespace std;

class Feedback
{
private:
	string feedbackID;
	string userID;
	string content;
public:
	Feedback();
	Feedback(string f_id, string u_id, string f_content);
	void showing();
	void displayFeedback();
	~Feedback();
};

