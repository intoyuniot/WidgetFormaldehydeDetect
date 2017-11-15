/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 甲醛测量器：检测甲醛浓度

 所需器件:
 1.MS1100甲醛传感器

 接线说明:
 MS1100                       核心板
 1.VCC                        +5V
 2.GND                        GND
 3.AOUT                       A0
 4.DOUT                       悬空
 */

#include <WidgetFormaldehydeDetect.h>

WidgetFormaldehydeDetect formaldehye = WidgetFormaldehydeDetect();

#define  SENSOR_PIN    A0 // 连接传感器模拟输出管脚

float getFormaldehydePPM()
{
    // 电压和浓度的近似关系
    float ppm = -6.6018 + 4.6472 * analogRead(SENSOR_PIN) * 3.3 / 4095;
    ppm = ppm > 0 ?  ppm : 0;
    return ppm;
}

void setup()
{
    pinMode(SENSOR_PIN, INPUT);	// 设置管脚为输入模式
}

void loop()
{
    formaldehye.displayFormaldehydePPM(getFormaldehydePPM());
    delay(3000);
}

