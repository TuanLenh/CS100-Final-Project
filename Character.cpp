#include <iostream>
#include "Character.h"

using namespace std;

    Character::Character(int charID, const string &charName , int charHealth, int charAttack, int charDefense, int charSpeed, string charStatus){
        ID = charID;
        name = charName;
        health = charHealth;
        attackStat = charAttack;
		defenseStat = charDefense;
	    speedStat = charSpeed;
        status = charStatus;
    }

    int Character::getID() const{
        return ID;
    }

 	const string & Character::getName() const{
        return name;
    }

 	int Character::getHealth() const{
        return health;
    }

    void Character::setHealth(int num){
        health = health - num;
    }

    void Character::setAttack(int num){
        attackStat = attackStat + num;
    }

    void Character::setDefense(int num){
        defenseStat = defenseStat + num;
    }

    void Character::setStatus(string newStatus){
        status = newStatus;
    }

    string Character::getStatus() const{
        return status;
    }
    
 	bool Character::isAlive() const{
        if(getHealth() <= 0){
            return false;
        }
        return true;
    }