/* Maximum number of packets allowed to be sent from the mouse 
   at once. Linux's default value is 8, which at
   least causes EOVERFLOW for my mouse (SteelSeries Rival 600).
   Increase this, if 'dmesg -w' tells you to!
*/
#define BUFFER_SIZE 16

/* This should be your desired acceleration. It needs to end with an f.
   For example, setting this to "0.1f" should be equal to
   cl_mouseaccel 0.1 in Quake.
*/

/* Changes behaviour of the scroll-wheel. Default is 3.0f */
#define SCROLLS_PER_TICK 3.0f

/* Accel configuration */
#define SENSITIVITY 1.0f
#define ACCELERATION 0.04f
#define SENS_CAP 2.2f
#define OFFSET 0.0f
#define SPEED_CAP 0.0f
#define MIDPOINT 1.0f
#define EXPONENT 0.0f

#define ACCELERATION_MODE 1
