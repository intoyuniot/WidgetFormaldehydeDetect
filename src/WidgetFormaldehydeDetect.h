#ifndef WIDGET_FORMALDEHYDE_DETECT_H_
#define WIDGET_FORMALDEHYDE_DETECT_H_

#include "application.h"


class WidgetFormaldehydeDetect
{
    public:
        WidgetFormaldehydeDetect(uint8_t ucItem = 0);
        ~WidgetFormaldehydeDetect();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayFormaldehydePPM(float ppm);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item = 0;
};

#endif
