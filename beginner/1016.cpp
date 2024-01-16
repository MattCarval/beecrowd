// Distance

// Two cars (X and Y) leave in the same direction. The car X leaves with a
//  constant speed of 60 km/h and the car Y leaves with a constant speed
//  of 90 km / h.

// In one hour (60 minutes) the car Y can get a distance of 30 kilometers
//  from the X car, in other words, it can get away one kilometer for
//  each 2 minutes.

// Read the distance (in km) and calculate how long it takes (in minutes)
//  for the car Y to take this distance in relation to the other car.

// Input
// The input file contains 1 integer value.

// Output
// Print the necessary time followed by the message "minutos" that means
//  minutes in Portuguese.

// Input Sample	  Output Sample
// 30              60 minutos

// 110             220 minutos

// 7               14 minutos

#include <stdio.h>

int main() {
    int distance;
    double speed_x = 60.0;
    double speed_y = 90.0;

    scanf("%d", &distance);

    double time_hours = (double)distance / (speed_y - speed_x);

    int time_minutes = (int)(time_hours * 60);

    printf("%d minutos\n", time_minutes);

    return 0;
}

