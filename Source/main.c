/*
* File: Menu.h
* Description: This is file to manage building
*/

#include "Menu.h"

MemberNode* list = NULL;

int main() {
	Menu("10000_Members.csv", &list);
	// system("pause");
	return 0;
}
