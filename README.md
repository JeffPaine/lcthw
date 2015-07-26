# Learn C the Hard Way

I'm working my way through [Learn C the Hard Way](http://c.learncodethehardway.org/book/) to learn a little bit about C.

## Notes

* Looks like variables are initialized to their zero values `int`s to 0 and `char`s to `\0`.

### strings

* Can initialize like `char name[4] = {'Z', 'e', 'd'};` or like `char *name = "Zed";`. The latter being more common.
* In C, there's no difference between a string and an array of characters.
* All strings must end with `\0`

> The source of almost all bugs in C come from forgetting to have enough space, or forgetting to put a '\0' at the end of a string. In fact it's so common and hard to get right that the majority of good C code just doesn't use C style strings.

### gcc

* `-Wall` output (nearly) all compiler errors
* `-g` produce debugging info in the OS's native format, e.g. for use with `gdb`
