#include "types.h"
#include "user.h"
#include "stat.h"

int
thread_create(void*(*function)(void *), void * arg, void * stack)
{
	return clone(function. arg,stack);
}
~   
