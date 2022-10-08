#include <QtQuick>

int main(int argc, char *argv[])
{
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    QGuiApplication app(argc, argv);
    QQuickView view;

    view.setSource(url);
    view.show();
    return app.exec();
}
