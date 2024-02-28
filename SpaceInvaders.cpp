#include <iostream>
#include <conio.h>
#include<string>
#include<vector>
#include <Windows.h>
#include "SpaceInvaders.h"
int main(){
	/*It's a C++ Assignment of Space Invaders Game.In this code 
	  I use 'A' to represent the spaceship of player and 'v' and 'H' 
	  they both represent enemy' spacseships. I use character 'H' to
	  represent the big enemy' spaceship and you got 10 if you could
	  destroy it and if enemy would destroy you then the enemy got 5.
	  Whereas, I use 'v' to represent small enemy' spaceship and on 
	  destroying it you got 5 and if enemy would destroy you then enemy
	  got 10.And fortunately, player has 3 lives to win.I use the colors 
	  to make it visualy attractive.*/
   
    Game g ;   //This class has the function that could run the game.
    g.rungame();
    /*rungame() will call all the required functions that are necessary
      for the flow of game and for running of the game*/
      
  return 0;     }
