#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int pid;
    printf(“I’m the original process with PID % d and PPID % d. \n”, getpid(), getppid());
    pid = fork(); /* Duplicate. Child and parent continue from here */
    if (pid != 0) /* pid is non-zero, so I must be the parent */
    {
        printf(“Im the parent process with PID % d and PPID % d. \n”, getpid(), getppid());
        printf(“My childs PID is % d \n”, pid);
    }
    return 0;
}