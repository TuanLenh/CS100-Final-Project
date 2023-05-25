#include <iostream>
#include "Character.h"

using namespace std;
    // constructor
    Character::Character(int charID, const string &charName , int charHealth, int charAttack, int charDefense, int charSpeed, string charStatus){
        ID = charID;
        name = charName;
        health = charHealth;
        attackStat = charAttack;
		defenseStat = charDefense;
	    speedStat = charSpeed;
        status = charStatus;
    }

    // get functions
    int Character::getID() const{
        return ID;
    }

    int Character::getAttack() const{
        return attackStat;
    }

    int Character::getDefense() const{
        return defenseStat;
    }

 	const string & Character::getName() const{
        return name;
    }

 	int Character::getHealth() const{
        return health;
    }

    string Character::getStatus() const{
        return status;
    }

    // set functions
    void Character::setHealth(int num){
        health = num;
    }

    void Character::setAttack(int num){
        attackStat = num;
    }

    void Character::setDefense(int num){
        defenseStat = num;
    }

    void Character::setStatus(string newStatus){
        status = newStatus;
    }
    
    // check character is alive or not
 	bool Character::isAlive() const{
        if(getHealth() <= 0){
            return false;
        }
        return true;
    }

    