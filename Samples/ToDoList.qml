import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

import ToDo 1.0

Frame {
    ListView{
        implicitWidth: 250
        implicitHeight: 250
        clip: true
        model: ToDoModel{}

        delegate: RowLayout{
            width: parent.width

            CheckBox {
                checked: model.done
                onClicked: model.done = checked

            }
            TextField{
                Layout.fillWidth: true
                text: model.description
                onEditingFinished: model.description = text
            }
        }

        }
}
