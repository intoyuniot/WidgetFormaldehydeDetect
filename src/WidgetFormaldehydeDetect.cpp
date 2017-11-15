#include "WidgetFormaldehydeDetect.h"


WidgetFormaldehydeDetect::WidgetFormaldehydeDetect(uint8_t ucItem)
{
    _Item = ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/formaldehydeDetect_%d/data/concentration",_Item);
}

WidgetFormaldehydeDetect::~WidgetFormaldehydeDetect()
{

}

void WidgetFormaldehydeDetect::begin(void (*UserCallBack)(void))
{

}

void WidgetFormaldehydeDetect::displayFormaldehydePPM(float ppm)
{
    IntoRobot.publish(pDataStatusTopic,ppm);
}



