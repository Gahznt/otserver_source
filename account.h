#ifndef __ACCOUNT__
#define __ACCOUNT__
#include "otsystem.h"
#ifndef __LOGIN_SERVER__

typedef std::list<std::string> Characters;
#else
#include "gameservers.h"
typedef std::map<std::string, GameServer*> Characters;

#endif
class Account
{
	public:
		Account() {number = premiumDays = lastDay = warnings = 0;}
		virtual ~Account() {charList.clear();}

		uint32_t number, premiumDays, lastDay;
		int32_t warnings;
		std::string name, password, recoveryKey;
		Characters charList;
};
#endif
