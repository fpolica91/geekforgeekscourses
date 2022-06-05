def checkSpeedOverSpeedLimitAtGivenTime(speedLimit, accelerations,
                                        initialSpeeds, atGivenTime):
    speedsExceedingMaxAllowed = 0
    for i in range(len(accelerations)):
        currentSpeed = atGivenTime * accelerations[i] + initialSpeeds[i]
        if currentSpeed > speedLimit:
            speedsExceedingMaxAllowed += currentSpeed
    return speedsExceedingMaxAllowed


def bike_racing(accelerations, initialSpeeds, speedLimit, maxAllowedSpeed):
    low = 0
    high = speedLimit
    atGivenTime = 0
    minimumTimeToAlarm = int(1e9)
    while low <= high:
        atGivenTime = (low + high) // 2
        speedsExceedingMaxAllowed = checkSpeedOverSpeedLimitAtGivenTime(
            speedLimit, accelerations, initialSpeeds, atGivenTime)
        if speedsExceedingMaxAllowed >= maxAllowedSpeed:
            minimumTimeToAlarm = atGivenTime
            high = atGivenTime - 1
        else:
            low = atGivenTime + 1
    return minimumTimeToAlarm


print(bike_racing([20, 70, 90], [20, 50, 20], 120, 400))