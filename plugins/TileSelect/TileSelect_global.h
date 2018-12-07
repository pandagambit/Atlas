#ifndef TILESELECT_GLOBAL_H
#define TILESELECT_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef TILESELECT_LIB
# define TILESELECT_EXPORT Q_DECL_EXPORT
#else
# define TILESELECT_EXPORT Q_DECL_IMPORT
#endif

#endif // TILESELECT_GLOBAL_H