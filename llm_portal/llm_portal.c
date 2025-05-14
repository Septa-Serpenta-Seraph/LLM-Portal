// Created with Pyto

#include <Python.h>

static PyObject* _main(PyObject* self, PyObject* args) {
    printf("Hello World!\n");
    return Py_None;
}

// Our Module's Function Definition struct
// We require this `NULL` to signal the end of our method
// definition
static PyMethodDef llm_portalMethods[] = {
    { "main", _main, METH_NOARGS, "docstring here" },
    { NULL, NULL, 0, NULL }
};

// Our Module Definition struct
static struct PyModuleDef llm_portalModule = {
    PyModuleDef_HEAD_INIT,
    "llm_portal",
    "docstring here",
    -1,
    llm_portalMethods
};

// Initializes our module using our above struct
PyMODINIT_FUNC PyInit_llm_portal(void) {
    return PyModule_Create(&llm_portalModule);
}
