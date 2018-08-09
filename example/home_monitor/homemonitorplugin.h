#ifndef HOMEMONITORPLUGIN_H 
#define HOMEMONITORPLUGIN_H 
#include <dde-dock/pluginsiteminterface.h> 
#include <QObject>
#include <QWidget>
#include <QMainWindow>
#include "informationwidget.h"

class HomeMonitorPlugin : public QObject, PluginsItemInterface 
{
    Q_OBJECT Q_INTERFACES(PluginsItemInterface) Q_PLUGIN_METADATA(IID "com.deepin.dock.PluginsItemInterface" FILE "home_monitor.json")

    public:
        explicit HomeMonitorPlugin(QObject *parent = nullptr); // 返回插件的名称，必须是唯一值，不可以和其它插件冲突

    const QString pluginName() const override; // 插件初始化函数

    void init(PluginProxyInterface *proxyInter) override; // 返回插件的 widget

    QWidget *itemWidget(const QString &itemKey) override;

    InformationWidget *m_pluginWidget;
}; 
#endif // HOMEMONITORPLUGIN_H
