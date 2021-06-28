#include "aperionstyleplugin.h"
#include "aperionstyle.h"

AperionStylePlugin::AperionStylePlugin() : QStylePlugin() {}
AperionStylePlugin::~AperionStylePlugin() {}
QStyle* AperionStylePlugin::create(const QString& key) {
  if (QString::compare(key, QLatin1String("aperion"), Qt::CaseInsensitive) != 0)
    return nullptr;
  return new AperionStyle();
}

#include "moc_aperionstyleplugin.cpp"
