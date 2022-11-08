

## **Note:**

The rand() function which is present in the stdlib header file is used for generating numbers.

The issue with using rand() is that it is not thread-safe

Therefore, in the parallel_pi.c program, random numbers are generated using linear congruential generator algorithm instead of rand().


## **Implementation**


Two programs were written to estimate the value of pi using the Monte Carlo method

One program was run serially using a loop (serial_pi.c) while the other program made use of threading to parallely compute the value of pi (parallel_pi.c)

The number of random points chosen for the computation was 800000000


## **Inference**


The serial computation of pi took 36.164631 seconds to estimate the value of pi.

The computation of pi using threading took just 10.727070 seconds to estimate the value of pi.

Clearly, as expected, the computation of the value of pi using threading was approximately 3.38 times faster than the serial computation of pi.

When we consider only the first 6 decimal places in pi (i.e. 3.141592), we can see that the serial method gave an absolute error of 0.000077 while the method that used threading gave an absolute error of 0.000002.

This showed that using threading helps in faster computation with a smaller absolute error.


## **Reference(s)**


[https://github.com/SeanStaz/monteCarloMethod.c/blob/master/A3.c](https://github.com/SeanStaz/monteCarloMethod.c/blob/master/A3.c)

The codes are taken from the github resources


