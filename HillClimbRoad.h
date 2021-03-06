#ifndef __ROAD_H_INCLUDED__
#define __ROAD_H_INCLUDED__

#include <HillClimbUtility.h>
#include <vector>

namespace hillclimb {

    class HillClimbRoad {
    private:
        double winWidth;
        double winHeight;
        std::vector<Coordinates> partCoords;
       //addPart(int x, int y);
       void addPart(double x, double y);
       double calculateNewPartX(double prevPartX);
       double calculateNewPartY();
       void generatePartsAhead();
       //deletePartsBehind();
        
    public:
        int MAX_PART_COUNT;
        int X_ROAD_START;
        int Y_ROAD_START;
        int DEFAULT_ROAD_LENGTH;

        HillClimbRoad(int winWidth, int winHeight);
        void move(double x);
        std::vector<Coordinates> getPartCoords();
        int getPartCount();
        void reset();
    };
}

#endif