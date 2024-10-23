int bouncingBall(double h, double bounce, double window) {
    int n = 1;

    if (!(bounce > 0) || !( bounce < 1) || !( h > 0 ) || !(window < h)) { return -1; }

    h*=bounce;
    while (h > window) {
        n+=2;
        h*=bounce;
    }

    return n;
}