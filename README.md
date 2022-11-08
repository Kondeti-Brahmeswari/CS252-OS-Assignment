### CS252-OS-Assignment

## **Questions**

[# **Quesion 1-3.18**](https://github.com/Kondeti-Brahmeswari/CS252-OS-Assignment/blob/7a2eac4076c08c89558a94b506353705ebd34c2a/Question%201/Answer%201%20code.c)

Using either a UNIX or a Linux system, write a C program that forks
a child process that ultimately becomes a zombie process. This zombie
process must remain in the system for at least 10 seconds. Process states
can be obtained from the command

ps -l

The process states are shown below the S column; processes with a state
of Z are zombies. The process identifier (pid) of the child process is listed
in the PID column, and that of the parent is listed in the PPID column.
Perhaps the easiest way to determine that the child process is indeed
a zombie is to run the program that you have written in the background
(using the &) and then run the command ps -l to determine whether
the child is a zombie process. Because you do not want too many zombie
processes existing in the system, you will need to remove the one that
you have created. The easiest way to do that is to terminate the parent
process using the kill command. For example, if the pid of the parent
is 4884, you would enter

kill -9 4884


[# **Question 2-4.24**](https://github.com/Kondeti-Brahmeswari/CS252-OS-Assignment/blob/41063b70c8ab4fcd31d6a82a53eec4e4e571ebf8/Question%202/Answer%202%20code.c)

An interesting way of calculating π is to use a technique known as Monte Carlo, which involves randomization. This technique works as follows: Suppose you have a circle inscribed within a square, as shown in Figure 4.25. (Assume that the radius of this circle is 1.)

First, generate a series of random points as simple (x, y) coordinates. These points must fall within the Cartesian coordinates that bound the square. Of the total number of random points that are generated, some will occur within the circle.

Next, estimate π by performing the following calculation:

π = 4× (number of points in circle) / (total number of points)

Write a multithreaded version of this algorithm that creates a separate thread to generate a number of random points. The thread will count the number of points that occur within the circle and store that result in a global variable. When this thread has exited, the parent thread will calculate and output the estimated value of π.

It is worth experimenting with the number of random points generated. As a general rule, the greater the number of points, the closer the approximation to π.

In the source-code download for this text, you will find a sample program that provides a technique for generating random numbers, as well as determining if the random (x, y) point occurs within the circle.

Readers interested in the details of the Monte Carlo method for estimating π should consult the bibliography at the end of this chapter. In Chapter 6, we modify this exercise using relevant material from that chapter.


## **Author(s)**

[@Brahmeswarik](https://www.linkedin.com/in/kondeti-brahmeswari-16b78b20a)

**Kondeti Brahmeswari-201CV128**
