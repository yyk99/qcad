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
// File        : scripts/Modify/TranslateRotate/Tests/TranslateRotateTest01.js
// Timestamp   : 2011-08-16 10:25:38
// Description : moves and rotates by 30°, deletes the original

include('scripts/Developer/TestingDashboard/TdbTest.js');

function TranslateRotateTest01() {
    TdbTest.call(this, 'scripts/Modify/TranslateRotate/Tests/TranslateRotateTest01.js');
}

TranslateRotateTest01.prototype = new TdbTest();

TranslateRotateTest01.prototype.test00 = function() {
    qDebug('running TranslateRotateTest01.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/TranslateRotate/Tests/data/entities.dxf');
    this.setZoom(2.308788598574822, new RVector(134.581, 23.7923, 0) );
    var p = new RVector(50,-5);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    var p = new RVector(-50,5);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.triggerCommand('moverotate');
    this.setZoom(2.308788598574822, new RVector(134.581, 23.7923, 0) );
    var p = new RVector(-1.177984, -0.83654);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(2.308788598574822, new RVector(134.581, 23.7923, 0) );
    var p = new RVector(0.121399, 101.381567);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.dlgStart();
    this.dlgAppendCode('var map = new MapCompat()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Mode', 'DeleteOriginal')");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/NumberOfCopies',  [ 10, 0 ] )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Angle',  [ 30, 0 ] )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/UseCurrentAttributes', false)");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.verifyDrawing('TranslateRotateTest01_000.dxf');
    this.tearDown();
    qDebug('finished TranslateRotateTest01.test00()');
};

