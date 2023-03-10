#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>

using namespace std;
#include "Status.h"

// when a user wants to insert a status
void Status::getStatusInfo(Status& newStatus)
{
	string text;
	cout << "Please insert your status: ";
	getline(cin, text);
	newStatus._text = text;
}

// checks if 2 statuses are identical in their text
bool Status::operator==(const Status& other) const
{
	return(_text == other._text);
}

// checks if 2 statuses are not identical in their text
bool Status::operator!=(const Status& other) const
{
	return(_text != other._text);
}