#include "module.hpp"

#include "earthmanipulatorindex.hpp"

#include <osgQtQuick/Version>
#include <QtQml>

#include <QDebug>

namespace osgEarth { namespace Util {

void regisgerQtQmlTypes(const char *uri)
{
    qmlRegisterType<EarthManipulatorQtQml>(
                uri, osgQtQuick_VERSION_MAJOR, osgQtQuick_VERSION_MINOR,
                "EarthManipulator");
}

} }
