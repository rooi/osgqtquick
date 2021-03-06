#ifndef _OSGDB_LOADER_QTQML_
#define _OSGDB_LOADER_QTQML_ 1

#include <osg/GroupQtQml>
#include <QUrl>

namespace osgDB {

class OSGQTQML_EXPORT LoaderQtQml : public osg::GroupQtQml
{
  Q_OBJECT

  Q_PROPERTY(osg::NodeQtQml* node READ getNode NOTIFY nodeChanged)
  Q_PROPERTY(QUrl source READ getSource WRITE setSource NOTIFY sourceChanged)

public:
  class Index;

  LoaderQtQml(QObject *parent = 0);
  LoaderQtQml(Index *, QObject *parent = 0);

  void classBegin();

  Q_INVOKABLE void setSource(const QUrl &url);
  Q_INVOKABLE QUrl getSource();

  Q_INVOKABLE osg::NodeQtQml* getNode();

  static LoaderQtQml* fromGroup(osg::Group *group, QObject *parent = 0);

signals:
  void nodeChanged(osg::NodeQtQml* node);
  void sourceChanged(const QUrl &source);

private slots:
  void nodeLoadingDone(const QUrl &url, osg::Node* node);
};

}

#endif // _OSGDB_LOADER_QTQML_
