#include <iostream>
#include "Character.h"
#include "ReturnStat.h"

using namespace std;

void ReturnStat::returnToOriginal(Character &char1, Character &char2){
    if(char1.getName() == "Mario"){
        char1.setHealth(100);
        char1.setAttack(20);
        char1.setDefense(16);
        char1.setStatus("Normal");
    }

    if(char2.getName() == "Mario"){
        char2.setHealth(100);
        char2.setAttack(20);
        char2.setDefense(16);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Bowser Jr"){
        char1.setHealth(100);
        char1.setAttack(11);
        char1.setDefense(20);
        char1.setStatus("Normal");
    } 

    if(char2.getName() == "Bowser Jr"){
        char2.setHealth(100);
        char2.setAttack(11);
        char2.setDefense(20);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Peach"){
        char1.setHealth(100);
        char1.setAttack(16);
        char1.setDefense(10);
        char1.setStatus("Normal");
    }
    
    if(char2.getName() == "Peach"){
        char2.setHealth(100);
        char2.setAttack(16);
        char2.setDefense(10);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Kirby"){
        char1.setHealth(100);
        char1.setAttack(20);
        char1.setDefense(13);
        char1.setStatus("Normal");
    } 

    if(char2.getName() == "Kirby"){
        char2.setHealth(100);
        char2.setAttack(20);
        char2.setDefense(13);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Lightning McQueen"){
        char1.setHealth(100);
        char1.setAttack(18);
        char1.setDefense(13);
        char1.setStatus("Normal");
    } 

    if(char2.getName() == "Lightning McQueen"){
        char2.setHealth(100);
        char2.setAttack(18);
        char2.setDefense(13);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Mater"){
        char1.setHealth(100);
        char1.setAttack(10);
        char1.setDefense(19);
        char1.setStatus("Normal");
    } 

    if( char2.getName() == "Mater"){
        char2.setHealth(100);
        char2.setAttack(10);
        char2.setDefense(19);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Luigi"){
        char1.setHealth(100);
        char1.setAttack(15);
        char1.setDefense(11);
        char1.setStatus("Normal");
    } 

    if(char2.getName() == "Luigi"){
        char2.setHealth(100);
        char2.setAttack(15);
        char2.setDefense(11);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "SpongeBob"){
        char1.setHealth(100);
        char1.setAttack(12);
        char1.setDefense(18);
        char1.setStatus("Normal");
    } 

    if(char2.getName() == "SpongeBob"){
        char2.setHealth(100);
        char2.setAttack(12);
        char2.setDefense(18);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Sonic"){
        char1.setHealth(100);
        char1.setAttack(14);
        char1.setDefense(15);
        char1.setStatus("Normal");
    } 
    
    if(char2.getName() == "Sonic"){
        char2.setHealth(100);
        char2.setAttack(14);
        char2.setDefense(15);
        char2.setStatus("Normal");
    }

    if(char1.getName() == "Cinderella" ){
        char1.setHealth(100);
        char1.setAttack(10);
        char1.setDefense(10);
        char1.setStatus("Normal");
    }

    if(char2.getName() == "Cinderella"){
        char2.setHealth(100);
        char2.setAttack(10);
        char2.setDefense(10);
        char2.setStatus("Normal");
    }


    if(char2.getName() == "Boss level 1"){
        char2.setHealth(100);
        char2.setAttack(30);
        char2.setDefense(30);
        char2.setStatus("Normal");
    }

    if(char2.getName() == "Boss level 2"){
        char2.setHealth(120);
        char2.setAttack(50);
        char2.setDefense(50);
        char2.setStatus("Normal");
    }

    if(char2.getName() == "Boss level 3"){
        char2.setHealth(140);
        char2.setAttack(70);
        char2.setDefense(70);
        char2.setStatus("Normal");
    }
}