#pragma once

#include <ESP_Board_Config.h>

#include <./src/AP_HAL/AP_HAL.h>
#include <./src/AP_Common/AP_Common.h>
#include <./src/AP_Param/AP_Param.h>
#include <./src/StorageManager/StorageManager.h>
// Application dependencies
#include <./src/GCS_MAVLink/GCS_MAVLink.h>
#include <./src/AP_SerialManager/AP_SerialManager.h>   // Serial manager library
#include <./src/AP_GPS/AP_GPS.h>             // ArduPilot GPS library
#include <./src/DataFlash/DataFlash.h>          // ArduPilot Mega Flash Memory Library
#include <./src/AP_Baro/AP_Baro.h>
#include <./src/AP_Compass/AP_Compass.h>
#include <./src/AP_Math/AP_Math.h>            // ArduPilot Mega Vector/Matrix math Library
#include <./src/AP_AccelCal/AP_AccelCal.h>                // interface and maths for accelerometer calibration
#include <./src/AP_InertialSensor/AP_InertialSensor.h>  // ArduPilot Mega Inertial Sensor (accel & gyro) Library
#include <./src/AP_AHRS/AP_AHRS.h>
#include <./src/AP_NavEKF2/AP_NavEKF2.h>
#include <./src/AP_NavEKF3/AP_NavEKF3.h>
#include <./src/AP_Mission/AP_Mission.h>     // Mission command library
#include <./src/AC_PID/AC_PID.h>             // PID library
#include <./src/AC_AttitudeControl/AC_AttitudeControl.h> // Attitude control library
#include <./src/AP_Motors/AP_Motors.h>          // AP Motors library
#include <./src/AP_Stats/AP_Stats.h>     // statistics library
#include <./src/AP_RSSI/AP_RSSI.h>                   // RSSI Library
#include <./src/Filter/Filter.h>             // Filter library
#include <./src/AP_Buffer/AP_Buffer.h>          // APM FIFO Buffer
#include <./src/AP_Relay/AP_Relay.h>           // APM relay
#include <./src/AP_ServoRelayEvents/AP_ServoRelayEvents.h>
#include <./src/AP_Airspeed/AP_Airspeed.h>        // needed for AHRS build
#include <./src/AP_Vehicle/AP_Vehicle.h>         // needed for AHRS build
#include <./src/AP_InertialNav/AP_InertialNav.h>     // ArduPilot Mega inertial navigation library
#include <./src/AC_WPNav/AC_WPNav.h>           // ArduCopter waypoint navigation library
#include <./src/AP_Declination/AP_Declination.h>     // ArduPilot Mega Declination Helper Library
#include <./src/AP_Scheduler/AP_Scheduler.h>       // main loop scheduler
#include <./src/AP_RCMapper/AP_RCMapper.h>        // RC input mapping library
#include <./src/AP_Notify/AP_Notify.h>          // Notify library
#include <./src/AP_BattMonitor/AP_BattMonitor.h>     // Battery monitor library
#include <./src/AP_BoardConfig/AP_BoardConfig.h>     // board configuration library
#include <./src/AP_BoardConfig/AP_BoardConfig_CAN.h>
#include <./src/AP_LandingGear/AP_LandingGear.h>     // Landing Gear library
#include <./src/AC_InputManager/AC_InputManager.h>        // Pilot input handling library
#include <./src/AP_Button/AP_Button.h>
#include <./src/AP_Arming/AP_Arming.h>
#include <./src/AP_SmartRTL/AP_SmartRTL.h>
#include <./src/AP_TempCalibration/AP_TempCalibration.h>









