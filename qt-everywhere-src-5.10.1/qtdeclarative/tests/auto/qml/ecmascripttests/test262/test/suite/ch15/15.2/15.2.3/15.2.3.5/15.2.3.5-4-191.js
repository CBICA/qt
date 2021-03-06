/// Copyright (c) 2012 Ecma International.  All rights reserved. 
/// Ecma International makes this code available under the terms and conditions set
/// forth on http://hg.ecmascript.org/tests/test262/raw-file/tip/LICENSE (the 
/// "Use Terms").   Any redistribution of this code must retain the above 
/// copyright and this notice and otherwise comply with the Use Terms.
/**
 * @path ch15/15.2/15.2.3/15.2.3.5/15.2.3.5-4-191.js
 * @description Object.create - one property in 'Properties' is a Function object which implements its own [[Get]] method to access the 'writable' property (8.10.5 step 6.a)
 */


function testcase() {

        var Func = function (a, b) {
            return a + b;
        };

        var fun = new Func();
        fun.writable = true;

        var newObj = Object.create({}, {
            prop: fun
        });

        var beforeWrite = (newObj.hasOwnProperty("prop") && typeof (newObj.prop) === "undefined");

        newObj.prop = "isWritable";

        var afterWrite = (newObj.prop === "isWritable");

        return beforeWrite === true && afterWrite === true;
    }
runTestCase(testcase);
