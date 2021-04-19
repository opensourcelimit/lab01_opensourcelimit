// name(s) and Perm 
// This is the only file to submit.

#include "car.hpp"
#include <cstddef>
#include <cstring>
#include <iostream>
using namespace std;
// #include .......

Car::Car(): manufacturer(nullptr), model(nullptr), zeroToSixtyNs(0), headonDragCoeff(0), horsepower(0), backseatDoors(None),seatCount(0){}

/*Car::Car(char const* const manufacturerName, char const* const modelName, PerformanceStats perf, uint8_t numSeats, DoorKind backseatDoorDesign)
{ 
    manufacturer = new char;
    manufactuerer = nullptr;

    manufacturerChange( manufacturerName);

    model = new char;
    model = nullptr;
    
    modelNameChange(modelName);

    reevaluateStats( perf);
    
    recountSeats( numSeats);
    
    reecamineDoors(backseatDoorDesign);


    







}

        Car::Car(Car const& o){
            
            }


        Car::Car& operator=(Car const& o){}
        Car::~Car(){}
        */
       // char const* Car:: getManufacturer() const { return manufacturer;}
       
       

       char const* Car::getModel() const {return model; }
       
/*
       PerformanceStats Car::getStats() const {
            PerformanceStats dummy{zeroToSixtyNs,headonDragCoeff,horsepower};
            return dummy;

            }
       

       uint8_t Car::getSeatCount() const {return seatCount;}
       

       DoorKind Car::getBackseatDoors() const {
            DoorKind dummy;
            switch(backseatDoors){
            case 0: Doorkind = None;
            case 1: Doorkind = Hinged;
            case 2: Doorkind = GullWing;
            case 3: Doorking = Sliding;

            }
            return dummy;
            }
        void Car::manufacturerChange(char const* const newManufacturer) {
 
           strycpy(manufacturer, newManufacturer);
            }
  */     

       void Car::modelNameChange(char const* const newModelName) {
            if(model == nullptr){
               model = new char;
                }
            strcpy(model, newModelName);
            }
       
/*
       void Car::reevaluateStats(PerformanceStats newStats) {
            zeroToSixtyNs = newStats.zeroToSixtyNs;
            headonDragCoeff = newstats.headonDragCoeff;
            horsepower = newstats.horsepower;

            }
       

       void Car::recountSeats(uint8_t newSeatCount){
            seatCount = newSeatCount;
            }
       

       void Car::reexamineDoors(DoorKind newDoorKind){

            switch(backseatDoorDesign){
            case 0 : backseatDoors = None;
            case 1 : backseatDoors = Hinged;
            case 2 : backseatDoors = GullWing;
            case 3 : backseatDoors = Sliding;


            }



            }


            */
