/*
////////////////////////////////////////////////////////////////////////////////
// HAPPY BIRTHDAY SKEEBAL
////////////////////////////////////////////////////////////////////////////////
Authors: Maxwell & Joshua Davis
Date: 
Description:

Technical Specs:
  Arduino model - version...blah blah


  
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
const int pinBallButton10 = 2;      // the number of the pushbutton pin
const int pinBallButton20 = 3;      // the number of the pushbutton pin
const int pinBallButton30 = 4;      // the number of the pushbutton pin
const int pinBallButton40 = 5;      // the number of the pushbutton pin
const int pinBallButton50 = 6;      // the number of the pushbutton pin
const int pinBallButton100Left = 7; // the number of the pushbutton pin
const int pinBallButton100Right = 8;// the number of the pushbutton pin
const int pinGameResetButton = 9;   // the number of the pushbutton pin
const int pinBallDoorMotor = 10;    // the number of the motor pin
const int pinScoreboardHigh = 11;   // the number of the Scoreboard High pin
const int pinScoreboardCurrent = 12;// the number of the Scoreboard Current pin
const int ledPin =  13;             // the number of the LED pin


//****************************************************************************//
// Varaibles
//****************************************************************************//
int stateBallButton10 = 0;          //
int stateBallButton20 = 0;          // 
int stateBallButton30 = 0;          // 
int stateBallButton40 = 0;          //
int stateBallButton50 = 0;          //
int stateBallButton100Left = 0;     //
int stateBallButton100Right = 0;    // 
int stateGameResetButton = 0;       // 
int currentScore = 0;               // variable for keeping track of the current game's score
int currentHighScore = 0;           // varialbe pulled from EEPROM to see current high score


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
// BALLDOOR METHODS
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

//****************************************************************************//
// LowerBalldoor
//****************************************************************************//
void LowerBalldoor() {
  
}

//****************************************************************************//
// RaiseBalldoor
//****************************************************************************//
void RaiseBalldoor() {
  
}









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
// IncrementScore - 
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

  ////////////////////////////////////////
  ////////DEBUGGING initialize the LED pin
  pinMode(ledPin, OUTPUT);

  // pull current high score from EEPROM and set to global currentHighScore variable

  // setup score buttons
  pinMode(pinBallButton10, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton20, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton30, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton40, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton50, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton100Left, INPUT); // initialize the pushbutton pin as an input
  pinMode(pinBallButton100Right, INPUT);// initialize the pushbutton pin as an input
  
  // setup scoreboard and feedback

  // setup game restart button & raise ball-door
  /// might need to pause the raise door to give the balls enough time to roll down
  pinMode(pinGameResetButton, INPUT);   // initialize the pushbutton pin as an input
  
}

//****************************************************************************//
// Main Loop - Method immedately ran after setup/initaliztaion
//****************************************************************************//
void loop() {

  // check game restart button - lower ball-door and then reset Arduino
 
  // check balldrop button - increment score

}
