In this project, you will create conditions for race conditions and find ways to avoid them.
Level 1
Processes in xv6 do not have shared memory and thus no race conditions on shared variables. To simulate concurrent access to shared variables, support three system calls counter_init(), counter_get(), and counter_set(), which set the counter to 0, get the counter value, and set the counter value, respectively. The counter value is a global value maintained in the kernel space. Demonstrate race conditions with two user space programs concurrently accessing the counter.

Level 2
xv6 supports locks in the kernel space, but these are not exposed to the user space. Create two ad- ditional system calls my_lock and my_unlock which acquire and release a lock in the kernel space, that guards the access to the counter. Demonstrate the use of these calls to avoid race conditions seen in the previous question.

Level 3
The current implementation of locks in xv6 are spinlocks. Modify these to futex which first busy- loop for a certain time, and after that they yield. Once they are rescheduled the availability of the lock is checked again for a bounded time and if not yet available, they yield again. Evaluate the performance of your futex with user-space programs accessing the shared counter.

