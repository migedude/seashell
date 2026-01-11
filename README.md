# sea(c)shell

`seashell` is a minimalist Unix shell written in C that implements core POSIX
process-management features such as forking, pipelines, redirection, and job
control.

The goal of this project is to deeply understand how Unix shells work under the
hood by building one from scratch using low-level system calls.

---

## Features

- Execute external commands (`ls`, `cat`, `echo`, etc.)
- Built-in commands:
  - `cd`
  - `pwd`
  - `exit`
- Command pipelines (`|`)
- Input and output redirection (`<`, `>`, `>>`)
- Background execution (`&`)
- Job tracking with `jobs`
- Proper signal handling (Ctrl-C interrupts foreground jobs without killing the shell)

---

## Example Usage

```bash
seashell> echo "hello world"
hello world

seashell> ls | wc -l
42

seashell> sleep 5 &
[1] 12345

seashell> jobs
[1] Running  sleep 5
