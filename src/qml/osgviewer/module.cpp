#include "module.hpp"

#include "compositeviewerindex.hpp"

#include <osgQtQuick/Version>
#include <QtQml>

namespace osgViewer {

void regisgerQtQmlTypes(const char *uri)
{
    qmlRegisterType<CompositeViewerQtQml>(
                uri, osgQtQuick_VERSION_MAJOR, osgQtQuick_VERSION_MINOR,
                "CompositeViewer");
}

}
