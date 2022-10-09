import QtQuick 2.15
import QtQuick.Controls 2.5
import QtQuick.Window 2.15
import QtCharts 2.3

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
    ChartView{
        id: chart1
        anchors.fill: parent
        LineSeries{
            name: "CPU Load"
            XYPoint {x:0; y: 0}
            XYPoint {x:2; y: 1}
        }
    }

    Button {
           text: solModel.name
           anchors.horizontalCenter: parent.horizontalCenter
           anchors.verticalCenter: parent.verticalCenter
       }
}
