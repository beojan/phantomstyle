#ifndef APERIONSTYLEPLUGIN_H
#define APERIONSTYLEPLUGIN_H
#include <QtWidgets/qstyleplugin.h>

class AperionStylePlugin : public QStylePlugin {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID QStyleFactoryInterface_iid FILE
                    "aperionstyleplugin.json")
public:
  AperionStylePlugin();
  ~AperionStylePlugin();
  QStyle* create(const QString& key) override;
};
#endif
