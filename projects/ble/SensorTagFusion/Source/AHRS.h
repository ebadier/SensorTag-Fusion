//=====================================================================================================
// MadgwickAHRS.h
//=====================================================================================================
//
// Implementation of Madgwick's IMU and AHRS algorithms.
// See: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms
//
// Date			Author          Notes
// 29/09/2011	SOH Madgwick    Initial release
// 02/10/2011	SOH Madgwick	Optimised for reduced CPU load
//
//=====================================================================================================
#ifndef MadgwickAHRS_h
#define MadgwickAHRS_h

#define AHRS_SAMPLEPERIOD_MS 10 // 1 sample every X milliseconds

//---------------------------------------------------------------------------------------------------
// Function declarations

void MadgwickAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz, float* q0out, float* q1out, float* q2out, float* q3out);
void MadgwickAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az, float* q0out, float* q1out, float* q2out, float* q3out);

#endif
//=====================================================================================================
// End of file
//=====================================================================================================
