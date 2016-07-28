My test repository for learning gdb in C++.
---

Commands for building.
`g++ -g [files for debugging]`
`gdb ./a.out`


```
list n,m - show code from n line to m line.
list 'myclass::method' - show code of mehtod.
break filename:n - set breakpoint to file on the line with number specified by n
del n - delete breakpoint with number specified by n
run args - start program with arguments
ptype var - shows type of variable
```
Calling methods
```
call var.method()
call ptr->method()
call method()
call method(1)
```
