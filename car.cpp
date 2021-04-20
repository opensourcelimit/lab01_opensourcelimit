// name(s) and Perm 
// This is the only file to submit.

#include "car.hpp"
#include <cstddef>
#include <cstring>

using namespace std;
// #include .......

Car::Car(): manufacturer(nullptr), model(nullptr), zeroToSixtyNs(0), headonDragCoeff(0), horsepower(0), backseatDoors(None),seatCount(0){}

Car::Car(char const* const manufacturerName, char const* const modelName, PerformanceStats perf, uint8_t numSeats, DoorKind backseatDoorDesign)
{ 
   
   

    manufacturerChange( manufacturerName);
   
    modelNameChange(modelName);

    reevaluateStats( perf);
    
    recountSeats( numSeats);
    
    reexamineDoors(backseatDoorDesign);


    







}

        Car::Car(Car const& o)
        {
          manufacturer = nullptr;
          model = nullptr;
          manufacturerChange(o.getManufacturer());
          
          modelChange(o.getmodel());
          
          PerformanceStats tempstats = o.getStats();
          reevaluateStats(tempstats.horsepower, tempstats.zeroToSixtyNs, tempstats.headonDragCoeff);
          
          recountSeats(o.getSeatCount());
          
          }


        Car::Car& operator=(Car const& o){}
        Car::~Car(){}
        
        char const* Car:: getManufacturer() const { return manufacturer;}
       
       
      
       char const* Car::getModel() const {return model; }
       

       PerformanceStats Car::getStats() const {
           PerformanceStats dummy{horsepower,zeroToSixtyNs,headonDragCoeff};
            return dummy;
            }
       

       uint8_t Car::getSeatCount() const {return seatCount;}
       

       DoorKind Car::getBackseatDoors() const {
            DoorKind dummy;
            switch(backseatDoors){
            case 0:
                 dummy = None;
                 break;  
            case 1:
                 dummy = Hinge;
                 break;
            case 2:
                 dummy = GullWing;
                 break;
            case 3:
                 dummy = Sliding;
                 break;
    
            }
            return dummy;
            }
        void Car::manufacturerChange(char const* const newManufacturer) {
                if(model == nullptr){
                manufacturer = new char;
            }
             
           strcpy(manufacturer, newManufacturer);
            }
       

       void Car::modelNameChange(char const* const newModelName) {
            if(model == nullptr){
               model = new char;
                }
            strcpy(model, newModelName);
            }
       

       void Car::reevaluateStats(PerformanceStats newStats) {
            zeroToSixtyNs = newStats.zeroToSixtyNs;
            headonDragCoeff = newStats.headonDragCoeff;
            horsepower = newStats.horsepower;

            }
       

       void Car::recountSeats(uint8_t newSeatCount){
            seatCount = newSeatCount;
            }
       

       void Car::reexamineDoors(DoorKind newDoorKind){

            switch(newDoorKind){
            case 0 : backseatDoors = None;
                    break;
            case 1 : backseatDoors = Hinge;
                    break;
            case 2 : backseatDoors = GullWing;
                    break;
            case 3 : backseatDoors = Sliding;
                    break;
                }

            }



            


           
