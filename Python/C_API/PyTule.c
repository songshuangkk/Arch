#include <python2.7/Python.h>
#include <python2.7/abstract.h>

int main(int argc, char const *argv[])
{
	PyObject *t;
	t = PyTuple_new(3);
	PyTuple_SetItem(t, 0, PyInt_FromLong(1L));
	PyTuple_SetItem(t, 0, PyInt_FromLong(1L));
	PyTuple_SetItem(t, 0, PyInt_FromLong(1L));

	return 0;
}
