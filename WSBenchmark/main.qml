import QtQuick 2.15
import QtQuick.Controls 2.5
import QtQuick.Window 2.15

ApplicationWindow{
    visible: true
    title: qsTr("WS Benchmark")
    width: 640
    height: 480
    menuBar: MenuBar{
        Menu {
            title: qsTr("&File")
            Action {
                text: qsTr("&New...")
                onTriggered: console.log("This command will create new measurement");
            }
            Action { text: qsTr("&Open...") }
            Action { text: qsTr("&Save") }
            Action { text: qsTr("Save &As...") }
            MenuSeparator { }
            Action {
                text: qsTr("&Quit")
                onTriggered: Qt.quit();
            }
        }
    }
    Button {
           text: qsTr("Hello World")
           anchors.horizontalCenter: parent.horizontalCenter
           anchors.verticalCenter: parent.verticalCenter
       }
}
