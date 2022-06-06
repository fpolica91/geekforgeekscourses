#include<bits/stdc++.h>
using namespace std;


int checkSpeedOverSpeedLimitAtGivenTime(int speedLimit, vector<int> accelerations, vector<int> initialSpeeds, int atGivenTime){
  int speedsExceedingMaxAllowed = 0;
  for(int i = 0; i < accelerations.size(); i++){
    int currentSpeed = atGivenTime * accelerations[i] + initialSpeeds[i];
    if(currentSpeed > speedLimit){
      speedsExceedingMaxAllowed += currentSpeed;
    }
  }
  return speedsExceedingMaxAllowed;
}


int bike_racing(vector<int> accelerations, vector<int> initialSpeeds, int speedLimit, int maxAllowedSpeed){
  int low = 0;
  int high = speedLimit;
  int atGivenTime = 0;
  int minimumTimeToAlarm = INT_MAX;
  while(low <= high){
    int atGivenTime = (low + high) / 2;
    int speedsExceedingMaxAllowed = checkSpeedOverSpeedLimitAtGivenTime(speedLimit, accelerations, initialSpeeds, atGivenTime);
    if(speedsExceedingMaxAllowed >= maxAllowedSpeed){
      minimumTimeToAlarm =  atGivenTime;
      high = atGivenTime - 1;
    }else{
      low = atGivenTime + 1;
    }
  }
  return minimumTimeToAlarm;
}


int main(){
  vector<int> accelerations = {20, 40};
  vector<int> initialSpeeds = {50, 30};
  int speedLimit = 120;
  int maxAllowedSpeed = 60;
  int minimumTimeToAlarm = bike_racing(accelerations, initialSpeeds, speedLimit, maxAllowedSpeed);
  cout << minimumTimeToAlarm << endl;

  cout<< bike_racing({20, 70, 90}, {20, 50, 20}, 120, 400) << endl;
  return 0;
}