#include <iostream>
#include "Character.h"
#include "Ultimate.h"

using namespace std;

    void UltimateSkill::useUltimateSkill(Character &char1, Character &char2){
        if(char1.getName() == "Mario"){
            // increase user attack stat
            int newAttack = char1.getAttack() + char1.getAttack() * 0.3;
            char1.setAttack(newAttack);
        }
        else if(char1.getName() == "Bowser Jr"){
            // decrease user attack stat
            int newDefense = char1.getDefense() + char1.getDefense() * 0.3;
            char1.setDefense(newDefense);
        }

        else if(char1.getName() == "Peach"){
            // decrease opponent attack stat
            int reduceAttack = char2.getAttack() - (char2.getAttack() * 0.2);
            char2.setAttack(reduceAttack);
        }
        else if(char1.getName() == "Kirby"){
            // decrease opponent defense stat
            int reduceDefense = char2.getDefense() - (char2.getDefense() * 0.2);
            char2.setDefense(reduceDefense); 
        }

        else if(char1.getName() == "Lightning McQueen"){
            //increase user's attack and defense
            int newAttack = char1.getAttack() + char1.getAttack() * 0.15;
            char1.setAttack(newAttack);
            int newDefense = char1.getDefense() + char1.getDefense() * 0.15;
            char1.setDefense(newDefense);
        }
        else if(char1.getName() == "Mater"){
            //decrease opponent's attack and defense
            int reduceAttack = char2.getAttack() - (char2.getAttack() * 0.1);
            char2.setAttack(reduceAttack);
            int reduceDefense = char2.getDefense() - (char2.getDefense() * 0.1);
            char2.setDefense(reduceDefense);
        }

        else if(char1.getName() == "Luigi"){
            // opponene can't act for 2 turns
            char2.setStatus("Sleeping");
        }
        else if(char1.getName() == "SpongeBob"){
            // opponene can't act for 1 turn and reduce opponent attack stat
            char2.setStatus("Frozen");
            int reduceAttack = char2.getAttack() - (char2.getAttack() * 0.1);
            char2.setAttack(reduceAttack);
        }
        else if(char1.getName() == "Sonic"){
             // opponene can't act for 1 turn and reduce opponent defense stat
            char2.setStatus("Paralyzing");
            int reduceDefense = char2.getDefense() - (char2.getDefense() * 0.1);
            char2.setDefense(reduceDefense);
        }

        else if(char1.getName() == "Cinderella"){
            // recover user's health point and even increase health capacity
            int newHealth = 200;
            char1.setHealth(newHealth);
        }
    }