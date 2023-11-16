#pragma once
#include<iostream>
#include<string>
using namespace std;

class Payment
{
protected:
	string PaymentID;
	float Amount;
	string paymentDate;
	string paymentStatus;
public:
	Payment();
	Payment(string p_id, float p_amount, string p_date, string p_status);
	void processPayment();
	void ViewPaymentHistory();
	void displayPayment();
	~Payment();
};