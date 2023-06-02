#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character{
 	private:
		int ID;
		string name;
		int health;
		int attackStat;
		int defenseStat;
		int speedStat;
		string status;

 	public:
		Character(int ID, const string &name , int health, int attackStat, int defenseStat, int speedStat, string status);
		
		void setHealth(int num);
		void setAttack(int num);
		void setDefense(int num);
		void setStatus(string newStatus);

		const string & getName() const;
		int getID() const;
		int getHealth() const;
		int getAttack() const;
		int getDefense() const;
		string getStatus() const;
		int getSpeed() const;
		bool isAlive() const;
};

#endif