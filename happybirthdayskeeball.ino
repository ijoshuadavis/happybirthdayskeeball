/*
////////////////////////////////////////////////////////////////////////////////
// HAPPY BIRTHDAY SKEEBAL
////////////////////////////////////////////////////////////////////////////////
Authors: Maxwell Davis & Joshua Davis
Date: 
Description:
Technical Specs:
  Arduino model - version...blah blah
  
////////////////////////////////////////////////////////////////////////////////
*/
//#include <EEPROM.h>
#include "LedControl.h"

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
const int pinGameResetButton = 9; 

//const int pinBallDoorMotor = A4;    // the number of the motor pin
const int pinScoreboardDataIn = A2; // the number of the Scoreboard High pin
const int pinScoreboardCS = A4;     // the number of the Scoreboard Current pin
const int pinScoreboardCLK = A3;    // the number of the Scoreboard Current pin
const int pinReset = 12;            // the number of pin connected to Reset pin
const int pinLED = 13;              // the number of the LED pin

const int valueBallButton10 = 10;          
const int valueBallButton20 = 20;          
const int valueBallButton30 = 30;          
const int valueBallButton40 = 40;          
const int valueBallButton50 = 50;          
const int valueBallButton100Left = 100;    
const int valueBallButton100Right = 100;    


//****************************************************************************//
// Variables
//****************************************************************************//
int currentScore = 0;               // variable for keeping track of the current game's score
int currentHighScore = 0;           // varialbe pulled from EEPROM to see current high score
int ballCount = 0;                  // variable that keeps track of the balls

//Scoreboard initialization
LedControl scoreBoards=LedControl(pinScoreboardDataIn,pinScoreboardCS,pinScoreboardCLK,1);







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
  //currentScore....
  
  int number = currentScore;
  int i = 0;
  while (number > 0) {
    scoreBoards.setDigit(0,i,number % 10,false);
    number = number / 10;
     i++;
  }

  // updated scoreboard to reflect currentHighScore
  //currentHighScore....
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
// IncrementScore - 
//****************************************************************************//
void IncrementScore( int ballScore ) {

  //update the current score
  currentScore = currentScore + ballScore;

  //test for for high score
  if (currentScore > currentHighScore) {
    currentHighScore = currentScore;  
  }
  
  //run scoreboard and feedback methos
  UpdateScoreboard();

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
  pinMode(pinBallButton10, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton20, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton30, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton40, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton50, INPUT);      // initialize the pushbutton pin as an input
  pinMode(pinBallButton100Left, INPUT); // initialize the pushbutton pin as an input
  pinMode(pinBallButton100Right, INPUT);// initialize the pushbutton pin as an input

  // setup game reset button and pins for software reset after game over
  pinMode(pinGameResetButton, INPUT);   // initialize the pushbutton pin as an input 
  digitalWrite(pinReset, HIGH);
  delay(200); 
  pinMode(pinReset, OUTPUT); 

  
  // setup scoreboard and feedback
  scoreBoards.shutdown(0,false);
  scoreBoards.setIntensity(0,0);
  scoreBoards.clearDisplay(0);
  delay(500);

  // setup game restart button & raise ball-door
  
  /// might need to pause the raise door to give the balls enough time to roll down

  ////////////////////////////////////////
  ////////DEBUGGING initialize the LED pin
  pinMode(pinLED, OUTPUT);



}

//****************************************************************************//
// Main Loop - Method immedately ran after setup/initaliztaion
//****************************************************************************//
void loop() {

  // check game restart button - lower ball-door and then reset Arduino
  if (digitalRead(pinGameResetButton) == HIGH)
  {

    scoreBoards.setChar(0,0,'-',false);
    scoreBoards.setChar(0,1,'-',false);
    scoreBoards.setChar(0,2,'-',false);
    scoreBoards.setChar(0,3,'-',false);
    scoreBoards.setChar(0,4,'-',false);
    scoreBoards.setChar(0,5,'-',false);
    scoreBoards.setChar(0,6,'-',false);
    scoreBoards.setChar(0,7,'-',false);
    
    delay(2000);
    digitalWrite(pinReset, LOW);
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // check balldrop count, if less than 9, determine button and increment score
    

  if(ballCount == 9){
    scoreBoards.clearDisplay(0);
    delay(500);
    //scoreBoards.clearDisplay(1);
    
    int number = currentScore;
    int i = 0;
    while (number > 0) {
      scoreBoards.setDigit(0,i,number % 10,false);
      number = number / 10;
      i++;
    }
    delay(500);
    
 
  }      
  else if( ballCount < 9 ){
    //10 POINT BALL
    if (digitalRead(pinBallButton10) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(10);
      ballCount++;
      
      //delay for button count...will probably need to leverage
      delay(1000);
      
    }

    //20 POINT BALL
    if (digitalRead(pinBallButton20) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(20);
      ballCount++;

      //delay for button count...will probably need to leverage
      delay(1000);
    }
 
    //30 POINT BALL
    if (digitalRead(pinBallButton30) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(30);
      ballCount++;

      //delay for button count...will probably need to leverage
      delay(1000);
    }
  
    //40 POINT BALL
    if (digitalRead(pinBallButton40) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(40);
      ballCount++;

      //delay for button count...will probably need to leverage
      delay(1000);
    }
  
    //50 POINT BALL
    if (digitalRead(pinBallButton50) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(50);
      ballCount++;

      //delay for button count...will probably need to leverage
      delay(1000);
    }
  
    //100 POINT BALL LEFT
    if (digitalRead(pinBallButton100Left) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(100);
      ballCount++;

      //delay for button count...will probably need to leverage
      delay(1000);
    }
  
    //100 POINT BALL RIGHT
    if (digitalRead(pinBallButton100Right) == HIGH)
    {
      //call the function that increments and updates scoreboard
      IncrementScore(100);
      ballCount++;

      //delay for button count...will probably need to leverage
      delay(1000);
    }
  }//////if( ballCount < 9 )
}
