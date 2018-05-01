/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the manual tests of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.8
import Qt.labs.handlers 1.0
import "content"

Rectangle {
    id: root
    width: 1280
    height: 960
    objectName: "root"
    color: "#222222"

    ListView {
        id: list
        objectName: "listView"
        anchors.fill: parent
        anchors.margins: 10
        orientation: Qt.Horizontal

        model: 20

        delegate: Item {
            objectName: "delegateItem" + index
            width: 154
            height: list.height

            Slider {
                anchors.fill: parent
                label: "Channel " + (index + 1)
            }
        }
    }
}