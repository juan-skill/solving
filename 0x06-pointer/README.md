# Pointers in C++

`void update(int *a,int *b) {
    // Complete this function
    *a=*a+*b;
    *b=abs(*a-(2**b));
}`
(2**b) is used because in the previous step we have changed the value of *a to *a+*b. so we are subtracting 2 times.

*b = abs (*a - (2 * (*b));

*b = abs (9 - (2 * (5));

*b = abs (9 - (10));

*b = abs (-1);

*b = 1;