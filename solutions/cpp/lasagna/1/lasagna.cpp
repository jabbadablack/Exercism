// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    int totaltime = ovenTime();
    int timeleft = totaltime - actualMinutesInOven;
    return timeleft;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.
    int preptime = numberOfLayers * 2;
    return preptime;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.
    int preptime = preparationTime(numberOfLayers);
    int ovenT = ovenTime();
    int remanOvenT = remainingOvenTime(actualMinutesInOven);
    int elapT = ovenT - remanOvenT;
    int timewasted = preptime + elapT;
    return timewasted;
}
