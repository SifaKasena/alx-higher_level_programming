#include <stdio.h>
#include "Python.h"

/**
 * print_python_list_info - prints a python list information
 * @p: PyObject pointer to the list
 * Return: void
 */

void print_python_list_info(PyObject *p)
{
	PyListObject *list;
	int i, size, allocated;

	list = (PyListObject *)p;
	size = list->ob_base.ob_size;
	allocated = list->allocated;
	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", allocated);
	for (i = 0; i < size; i++)
		printf("Element %d: %s\n", i, list->ob_item[i]->ob_type->tp_name);
}
