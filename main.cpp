#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.

dog, phone, key, car, speaker, server, cable, glass, transformer, AirConditioner
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: dog
//  action 1:    the dog barks Loudly
dog.barkLoudly();
//  action 2:    the dog runs
dog.run();
//  action 3:    the dog eat
dog.eat();
//  2)
//  Noun: phone
//  action 1:    the phone ringgs
phone.ring(); 
//  action 2:    the phone plays music
phone.playMusic();
//  action 3:    the phone vibrates
phone.vibrate();
//  3)
//  Noun: key
//  action 1:    the key opens the lock
key.openLock();
//  action 2:    the key closes the lock
key.closeLock();
//  action 3:    the key reflects light
key.reflectLight();
//  4)
//  Noun: car
//  action 1:    the car blinks parking lights
car.blinkParkingLights();
//  action 2:    the car accelerates
car.accelerate();
//  action 3:    the car heats the driver seat
car.heatDriverSeat();
//  5)
//  Noun: speaker
//  action 1:    the speaker plays music
speaker.playMusic();
//  action 2:    the speaker vibrates
speaker.vibrate();
//  action 3:    the blinks the led
speaker.blinkLed();
//  6)
//  Noun: server
//  action 1:    the server turns its led on
server.turnLedOn();
//  action 2:    the server hosts packages
server.hostPackages();
//  action 3:    the server turns its fan on
server.turnFanOn();
//  7)
//  Noun: smellyCat
//  action 1:    the smellyCat visits the neighbor
smellyCat.visitNeighbor();
//  action 2:    the smellyCat asks for food
smellyCat.askForFood();
//  action 3:    the smellyCat roll in the grass
smellyCat.rollInTheGrass();
//  8) eye
//  Noun:
//  action 1:    the eye looks up
eye.lookUp();
//  action 2:    the eye closes the eyelid
eye.closeEyelid();
//  action 3:    the eye senses colors
eye.senseColors();
//  9) transformer
//  Noun:
//  action 1:    the transformer converts voltage
transformer.convertVoltage();
//  action 2:    the transformer stabilizes voltage
transformer.stabilizeVoltage();
//  action 3:    the transformer filers Voltage Noise
transformer.filterVoltageNoise(); 
//  10) AirConditioner
//  Noun:
//  action 1:    the AirConditioner heats the air
airConditioner.heatAir();
//  action 2:    the AirConditioner cools the air
airConditioner.coolAir();
//  action 3:    the AirConditioner dries the air
airConditioner.dryAir();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
