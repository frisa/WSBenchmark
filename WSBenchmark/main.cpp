#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

// data models
#include "solutionmodel.h"
#include "cputablemodel.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    // initialization of data models
    solutionModel solModel;
    CpuTableModel cpuModel{{1,2}, {3,4}};

    engine.rootContext()->setContextProperty("solModel", &solModel);
    engine.rootContext()->setContextProperty("cpuModel", &cpuModel);

    engine.load(url);
    return app.exec();
}
