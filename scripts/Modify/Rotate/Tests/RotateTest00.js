/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
// Auto generated by Testing Dashboard
// File        : scripts/Modify/Rotate/Tests/RotateTest00.js
// Timestamp   : 2011-08-08 17:18:06
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function RotateTest00() {
    TdbTest.call(this, 'scripts/Modify/Rotate/Tests/RotateTest00.js');
}

RotateTest00.prototype = new TdbTest();

RotateTest00.prototype.test00 = function() {
    qDebug('running RotateTest00.test00()...');
    this.setUp();
    var w = objectFromPath('MainWindow::CadToolBar::MainToolsPanel');
    this.sendMouseEvent(w, QEvent.MouseButtonPress, new QPoint(84, 423), Qt.LeftButton, 1, 0);
    var w = objectFromPath('MainWindow::CadToolBar::MainToolsPanel');
    this.sendMouseEvent(w, QEvent.MouseButtonRelease, new QPoint(83, 423), Qt.LeftButton, 0, 0);
    this.importFile('scripts/Modify/Rotate/Tests/data/entities.dxf');
    this.selectAll();
    var p = new RVector(3.379811, 62.195574);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.MidButton, 4, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.MidButton, 0, 0);
    var p = new RVector(15.486662, 19.512725);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.MidButton, 4, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.MidButton, 0, 0);
    this.triggerCommand('rotate');
    this.setZoom(1.6150558288984582, new RVector(163.455, 145.187, 0) );
    var p = new RVector(0.626495, 3.41421);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.dlgStart();
    this.dlgAppendCode('var map = new MapCompat()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Mode', 'MultipleCopies')");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/NumberOfCopies',  [ 7, 0 ] )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Angle',  [ 45, 0 ] )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/AngleByMouse', false)");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/UseCurrentAttributes', false)");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(1.6150558288984582, new RVector(163.455, 145.187, 0) );
    var p = new RVector(108.981882, -64.075717);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.verifyDrawing('RotateTest00_000.dxf');
    this.tearDown();
    qDebug('finished RotateTest00.test00()');
};

