# creating static library

```
gcc -c sll.c
```

this will create .o object file

```
ar -rc libsll.a sll.o
```

this will createe libsll.a we can ship this

```
gcc main.c libsll.a
```