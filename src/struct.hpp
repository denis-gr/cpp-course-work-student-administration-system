#include <string>

enum MARKS { Terrible, Bad, Fair, Good, Excellent };

struct STUDENT {
	unsigned short Id;
	std::string Name;
	std::string Surname;
	std::string Patronymic;
	std::string Group;
	MARKS Marks[5];
};

struct STUDENTList {
    STUDENTList *pnext;
    STUDENT student;
};