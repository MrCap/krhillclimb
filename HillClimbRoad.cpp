#include <iostream>
#include <HillClimbUtility.h>
#include "HillClimbRoad.h"

namespace hillclimb{
    
    HillClimbRoad::HillClimbRoad(const int winWidth, const int winHeight){
        DEFAULT_ROAD_LENGTH=100;
        addPart(0,500);
        //while(getPartCount()<DEFAULT_ROAD_LENGTH);
        generatePartsAhead();       
    }
    
    int HillClimbRoad::getPartCount()
    {
        return static_cast<int>(this->partCoords.size());
    }
    
    std::vector<Coordinates> HillClimbRoad::getPartCoords(){
        return this->partCoords;
    }
    
    void HillClimbRoad::addPart(double x, double y){
        Coordinates partCoord={
            .x=x,
            .y=y
        };
        this->partCoords.push_back(partCoord);
    }
    
    void HillClimbRoad::move(const double x) {
       //move the x's of parts
       //deletePartsBehind
       //generatePartsAhead
       for (auto& coords: this->partCoords){
           coords.x -=x;
       }
   }

   //ROAD_LENGHT_FACTOR = choose some road length factor


   double HillClimbRoad::calculateNewPartX(double ex) {
       //randomize length of the new part using some factor
       double roadX=ex+100;
       std::cout <<"roadX "<< roadX<<"\n";
       return roadX;
   }

   double HillClimbRoad::calculateNewPartY() {
       //randomize y position of the end point of the new part
       return 500;//+(partCoords.size()*partCoords.size());
   }

   void HillClimbRoad::generatePartsAhead() {
      //generate parts as many as MAX_PART_COUNT - currentPartCount
            std::vector<Coordinates> beginCoords = getPartCoords();//partCoordPair at current index + 1
            auto beginnin = beginCoords[partCoords.size()-1];
            double xx=calculateNewPartX(beginnin.x);
            addPart(xx,500);
            std::cout <<"beg " << beginnin.x<<"\n";
            std::cout <<"1 size"<< partCoords.size() << "x" <<beginnin.x << " xx "<<xx<< "\n";
            
            beginnin = beginCoords[partCoords.size()-1];
            std::cout <<"beg " << beginnin.x<<"\n";
            xx=calculateNewPartX(beginnin.x);
            addPart(xx,600);
            std::cout <<"2 size"<< partCoords.size() << "x" <<beginnin.x << " xx "<<xx<< "\n";
            
            beginnin = beginCoords[partCoords.size()-2];
            std::cout <<"beg " << beginnin.x<<"\n";
            xx=calculateNewPartX(beginnin.x);
            addPart(xx,300);
            std::cout <<"3 size"<< partCoords.size() << "x" <<beginnin.x << " xx "<<xx<< "\n";
            
            beginnin = beginCoords[partCoords.size()-1];
            std::cout <<"beg " << beginnin.x<<"\n";
            xx=calculateNewPartX(beginnin.x);
            addPart(xx,500);
            std::cout <<"4 size"<< partCoords.size() << "x" <<beginnin.x << " xx "<<xx<< "\n";
            
            beginnin = beginCoords[partCoords.size()-1];
            std::cout <<"beg " << beginnin.x<<"\n";
            xx=calculateNewPartX(beginnin.x);
            addPart(xx,600);
            std::cout <<"5 size"<< partCoords.size() << "x" <<beginnin.x << " xx "<<xx<< "\n";
            
            beginnin = beginCoords[partCoords.size()-1];
            std::cout <<"beg " << beginnin.x<<"\n";
            xx=calculateNewPartX(beginnin.x);
            addPart(xx,500);
            std::cout <<"6 size"<< partCoords.size() << "x" <<beginnin.x << " xx "<<xx<< "\n";

        //addPart(beginnin.x,calculateNewPartY());
            //addPart(50,100);
        /*    
            addPart(200,600);
            addPart(300,500);
        addPart(400,600);
        addPart(500,400);
        */
   }

   void deletePartsBehind() {
      //delete parts whose x < -DEFAULT_ROAD_LENGTH * ROAD_LENGTH_FACTOR
   }

   

   void reset()
   {
       //clear partCoords
       //add two horizontal parts
       //generatePartsAhead
   }
   
}

/*
#include <iostream>
#include "HillClimbRoad.h"

namespace hillclimb{

   //ROAD_LENGHT_FACTOR = choose some road length factor

   HillClimbRoad::HillClimbRoad(int winWidth, int winHeight)
        :winWidth(winWidth), winHeight(winHeight){}

   function getPartCount

   function getPartCoords

   function addPart

   function calculateNewPartX {
       //randomize length of the new part using some factor
   }

   function calculateNewPartY {
       randomize y position of the end point of the new part
   }

   function generatePartsAhead {
      generate parts as many as MAX_PART_COUNT - currentPartCount
   }

   deletePartsBehind() {
      delete parts whose x < -DEFAULT_ROAD_LENGTH * ROAD_LENGTH_FACTOR
   }

   move(x) {
       move the x's of parts
       deletePartsBehind
       generatePartsAhead
   }

   reset
       clear partCoords
       add two horizontal parts
       generatePartsAhead
   }
}
*/