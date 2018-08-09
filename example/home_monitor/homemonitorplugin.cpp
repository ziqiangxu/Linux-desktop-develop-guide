#include "homemonitorplugin.h" 
#include <QLabel>
#include <QDebug>

HomeMonitorPlugin::HomeMonitorPlugin(QObject *parent) : QObject(parent)
{
    /*
    m_pluginWidget = new QMainWindow(new QLabel("QLabel"));
    m_pluginWidget->setWindowTitle("testing");
    qDebug() << "build the testing dock";
    m_pluginWidget->show();
    */
    m_pluginWidget = new InformationWidget();
}

const QString HomeMonitorPlugin::pluginName() const 
{
    return QStringLiteral("home_monitor");
}

void HomeMonitorPlugin::init(PluginProxyInterface *proxyInter) {
    m_proxyInter = proxyInter;
    proxyInter->itemAdded(this, QString());
}

QWidget *HomeMonitorPlugin::itemWidget(const QString &itemKey) {
    Q_UNUSED(itemKey);
    return m_pluginWidget;
}

//void HomeMonitorPlugin::
