# Influence of Makefile Optimizer On Run-Time Speed

## Description
The main **IDEA** to start the current project is to evaluate how makefile optimizers were able to improve the run-time speed.
The main program contains a loop calling the powern function. This function computes the n-th power of a floating point number by repeated multiplication--it has been chosen because it is suitable for both inlining and loop-unrolling. The run-time of the program can be measured using the time command in the GNU Bash shell.

The relevant entry in the output for comparing the speed of the resulting executables is the 'user' time, which gives the actual CPU time spent running the process. The other rows, 'real' and 'sys', record the total real time for the process to run (including times where other processes were using the CPU) and the time spent waiting for operating system calls. The benchmarks were executed several times to confirm the results. 
From the results it can be seen in this case that increasing the optimization level with -O1, -O2 and -O3 produces an increasing speedup, relative to the unoptimized code compiled with -O0. The additional option -funroll-loops produces a further speedup. 
The speed of the program has improved by 30%, when going from unoptimized code to the highest level of optimization. However, it is recomended to compile for yourself and share your results too!

## Build & Installation
You can download latest compiled binary files from **[Releases](https://github.com/DataStructureAndAlgorithmBestPractice)**.

## Unique Features
### First Release (v1.0.0)
More Information will be found in [VersionGuide]().

## How does it work?
Source Code is Provided in src directory with proper Examples ()

## Credits
- All of the <a href="https://github.com/DataStructureAndAlgorithmBestPractice">contributors</a> 
- Masood Hamed Saghayan (<a href="https://github.com/M4si94">@M4si94</a>)
- Mohammad Hossein Zolfagharnasab (<a href="https://github.com/MsainZn">@MsainZn</a>)


## License
**FAT & SLIM**, and all its submodules and repos, unless a license is otherwise specified, are licensed under **MIT** LICENSE.
Dependencies are licensed by their own.

