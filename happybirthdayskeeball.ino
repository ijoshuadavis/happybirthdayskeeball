/*
////////////////////////////////////////////////////////////////////////////////
// HAPPY BIRTHDAY SKEEBAL
////////////////////////////////////////////////////////////////////////////////
Authors: Maxwell & Joshua Davis
Date: 
Description:

Technical Specs:
  Arduino model - version...blah




  
////////////////////////////////////////////////////////////////////////////////
*/
#include <EEPROM.h>



//////////////////////////////////////////////////////////////////////////////////////////
// CONSTANTS AND VARIABLES
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////


//****************************************************************************//
// Constants & Predefines
//****************************************************************************//
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin


//****************************************************************************//
// Varaibles
//****************************************************************************//
int buttonState = 0;         // variable for reading the pushbutton status
int currentScore = 0;        // variable for keeping track of the current game's score
int currentHighScore = 0;    // varialbe pulled from EEPROM to see current high score


//////////////////////////////////////////////////////////////////////////////////////////
// SCOREBOARD AND FEEDBACK METHODS
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

//****************************************************************************//
// AnnounceGameStartup - This method signals that new game start.  Maybe blinks
// the current score if not better than high.  blinks both if high. It also will
// initiate any additional feedback - blinking lights or playing sounds.
void AnnounceGameStartup() {
  
  // updated scoreboard to reflect currentScore of zero

  // updated scoreboard to reflect currentHighScore

}

//****************************************************************************//
// AnnounceGameEnd - This method signals that the game is over.  Maybe blinks
// the current score if not better than high.  blinks both if high. It also will
// initiate any additional feedback - blinking lights or playing sounds.
//****************************************************************************//
void AnnounceGameEnd() {

}

//****************************************************************************//
// UpdateScoreboard - This method sets the scoreboard to current and high. It
// also will initiate any additional feedback - blinking lights or playing
// sounds.
//****************************************************************************//
void UpdateScoreboard() {

  // updated scoreboard to reflect currentScore

  // updated scoreboard to reflect currentHighScore

}









//////////////////////////////////////////////////////////////////////////////////////////
// GAME RESTART METHODS
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////










//////////////////////////////////////////////////////////////////////////////////////////
// SCORING METHODS
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

//****************************************************************************//
// SetHighScore - Used to write current highscore to longterm EEPROM memory
//****************************************************************************//
void SetHighScore() {
  
}


//****************************************************************************//
// CheckHighScore - Test the current highscore in the longterm EEPROM memory
// to see if current score beats it
//****************************************************************************//
void CheckHighScore() {

}


//****************************************************************************//
// IncementScore - 
//****************************************************************************//
void IncrementScore( int ballDropButton ) {

  //based on ballDropButton number, increment/add value to currentScore

  //run scoreboard and feedback methos

}









//////////////////////////////////////////////////////////////////////////////////////////
// INITILIZATION AND MAIN
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

//****************************************************************************//
// Setup - Initialize all buttons, scoreboard, and open / close ball door
//****************************************************************************//
void setup() {
  
  // pull current high score from EEPROM and set to global currentHighScore variable

  // setup score buttons

  // setup scoreboard and feedback

  // setup game restart button & raise ball-door
  
}

//****************************************************************************//
// Main Loop - Method immedately ran after setup/initaliztaion
//****************************************************************************//
void loop() {

  // check game restart button, lower ball-door, then reset Arduino
 
  // check ball drop button and increment score

}
