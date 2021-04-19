#ifndef CAR_HPP
#define CAR_HPP

#include "perf.hpp"
#include "doors.hpp"

class Car{
    private:
        char* manufacturer;
        char* model;
        uint32_t zeroToSixtyNs;
        float headonDragCoeff;
        uint16_t horsepower;
        DoorKind backseatDoors;
        uint8_t seatCount;
    public:
        Car();
        Car(char const* const manufacturerName, char const* const modelName, PerformanceStats perf, uint8_t numSeats, DoorKind backseatDoorDesign);
        Car(Car const& o);
        Car& operator=(Car const& o);
        ~Car();
        char const* getManufacturer() const;
        char const* getModel() const;
        PerformanceStats getStats() const;
        uint8_t getSeatCount() const;
        DoorKind getBackseatDoors() const;
        void manufacturerChange(char const* const newManufacturer);
        void modelNameChange(char const* const newModelName);
        void reevaluateStats(PerformanceStats newStats);
        void recountSeats(uint8_t newSeatCount);
        void reexamineDoors(DoorKind newDoorKind);
};


car(): manufacturer(nullptr), model(nullptr), zerotoSixtyNs(0), headDragCoeff(0), horsepower(0), Doorkind(None),Seatcount(0){}

Car(char const* const manufacturerName, char const* const modelName, PerformanceStats perf, uint8_t numSeats, DoorKind backseatDoorDesign)
{ 
    manufacturer = new char;
    strcpy(manufactuerer, manufacturerName);

    model = new char;
    strcpy(model, modelName);
    
    zeroToSixtyNs = perf.zeroToSixtyNs; 
    headonDragCoeff = perf.headonDragCoeff;
    horsepower = perf.horsepower;

    seatCount = numSeats;
    
    switch(backseatDoorDesign){
        case 0 : seatCount = None;
        case 1 : seatCount = Hinged;
        case 2 : seatCount = Gullwing;
        case 3 : seatCOunt = Sliding;


    }



}
/*
Car(Car const& o);

Car& operator=(Car const& o);

~Car();

char const* getManufacturer() const;

char const* getModel() const;

PerformanceStats getStats() const;

uint8_t getSeatCount() const;

DoorKind getBackseatDoors() const;

void manufacturerChange(char const* const newManufacturer);

void modelNameChange(char const* const newModelName);

void reevaluateStats(PerformanceStats newStats);

void recountSeats(uint8_t newSeatCount);

void reexamineDoors(DoorKind newDoorKind);
*/
#endif //
