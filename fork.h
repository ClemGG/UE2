#ifndef FORK_K_INCLUDED
#define FORK_K_INCLUDED

pid_t create_process(void);
void child_process(void);
void father_process(int child_pid);

#endif// FORK_K_INCLUDED
