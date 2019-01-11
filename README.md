# Pintos
Pintos is a simple operating system framework for the 80x86 architecture. It supports kernel threads, loading and running user programs, and a file system, but it implements all of these in a very simple way. Pintos projects are run on a system simulator, that is, a program that simulates an 80x86 CPU and its peripheral devices accurately enough that unmodified operating systems and software can run under it. QEMU is used as a simulator in this project.

### There are 3 parts for this project
1. Pre-emption of threads
2. Priority Scheduling
3. MLFQS(Multi level feedback Queue Scheduler)

## Preemption of threads
Objective: When a thread is put to sleep for a certain duration, wanother task should occupy the duration in between, rather than waiting for the thread to finish its sleep cycle and resuming its execution (busy waiting).

## Implementation of priority scheduling
Objective: Building on the previous part, int this part, a basic priority scheduling scheme was implemented. When a thread is added to the ready list that has a higher priority than the currently running thread, the current thread immediately yields the processor to the new thread. Similarly, when threads are waiting for a lock, semaphore, or condition variable, the highest priority waiting thread is awakened first. In the current scenario, priority value is taken but it has not been used anywhere for thread scheduling (See thread structure in src/threads/thread.h).

## Advanced Scheduler (MLFQS)
Objective: Implemented a multilevel feedback queue scheduler similar to the BSD scheduler to reduce the average response time for running jobs on your system. Like the priority scheduler, the advanced scheduler chooses the thread to run based on priorities. The computational procedures taken by the BSD scheduler (calculating niceness, priority, recent_cpu and load_avg) were implemented. 
