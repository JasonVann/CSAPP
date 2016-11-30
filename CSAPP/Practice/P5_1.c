void swap(int *xp, int *yp)
{
    *xp = *xp + *yp;
    *yp = *xp - *yp;
    *xp = *xp - *yp;
}

// If *xp == *yp, then *xp will be set to 0
