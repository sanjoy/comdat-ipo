Demonstrates an issue related to comdats and IPO

One of the link orders (``order-a`` on my machine) will have a
``SIGFPE`` while the others won't.  As far as I can tell, the program
is well defined, since in the original program both the places that
call ``maybe_divide`` store a non-zero value to ``ptr[0]`` before
calling it.

More details at the
http://lists.llvm.org/pipermail/llvm-dev/2016-February/095833.html.
