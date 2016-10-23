/**
 * @file       WidgetGPS.h
 * @author     Volodymyr Shymanskyy
 * @license    This project is released under the MIT License (MIT)
 * @copyright  Copyright (c) 2015 Volodymyr Shymanskyy
 * @date       Oct 2016
 * @brief
 *
 */

#ifndef WidgetGPS_h
#define WidgetGPS_h

#ifndef BLYNK_NO_FLOAT

#include <Blynk/BlynkApi.h>

class GpsParam
{
public:

    GpsParam(const BlynkParam& param)
    {
        BlynkParam::iterator it = param.begin();
        if (it >= param.end())
            return;

        mLat = it.asDouble();

        if (++it >= param.end())
            return;

        mLon = it.asDouble();

        if (++it >= param.end())
            return;

        mAlt = it.asDouble();

        if (++it >= param.end())
            return;

        mSpeed = it.asDouble();
    }


    double getLat() const { return mLat; }
    double getLon() const { return mLon; }
    double getAltitude() const { return mAlt; }
    double getSpeed() const { return mSpeed; }

private:
    double mLat;
    double mLon;
    double mAlt;
    double mSpeed;
};

#endif

#endif
