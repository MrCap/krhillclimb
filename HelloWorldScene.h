
#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
//*/
/*
#ifndef __HILLCLIMB_LAYER_H__
#define __HILLCLIMB_LAYER_H__

#include <memory>
#include <map>
#include <chrono>

#include "cocos2d.h"
// Add missing includes here

namespace hillclimb {

    class HelloWorld : public cocos2d::Layer {
    public:
        static cocos2d::Scene* createScene();
        virtual bool init();
        CREATE_FUNC(HelloWorld);
        virtual void update(float delta) override;
        bool isKeyPressed(cocos2d::EventKeyboard::KeyCode);
    private:
        static std::map<cocos2d::EventKeyboard::KeyCode,
            std::chrono::high_resolution_clock::time_point> keys;
    
        //Car field;
        //Road field;
        cocos2d::Sprite* carSprite; // autoreleased by cocos2d so no need to delete
        double carStartY;
    
        void generateRoadParts();
        void deleteRoadParts();
    };

    cocos2d::Scene* createScene();
}
#endif // __HILLCLIMB_LAYER_H__
*/