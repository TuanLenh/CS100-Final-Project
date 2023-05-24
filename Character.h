#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character{
 	protected:
		int ID;
		string name;
		int health;
		int attackStat;
		int defenseStat;
		int speedStat;
		string status;


 	public:
		Character(int ID, const string &name , int health, int attackStat, int defenseStat, int speedStat, string status);
		int getID() const;
		const string & getName() const;
		int getHealth() const;
		void setHealth(int num);
		void setAttack(int num);
		void setDefense(int num);
		void setStatus(string newStatus);
		string getStatus() const;
		bool isAlive() const;
};

#endif