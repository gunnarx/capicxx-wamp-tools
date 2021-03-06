/*******************************************************************************
 * Copyright (c) 2017 itemis AG (http://www.itemis.de). All rights reserved.
 *******************************************************************************/
package org.genivi.commonapi.wamp.tests.runtime;

import org.genivi.commonapi.wamp.tests.mocha.MochaTest;

@MochaTest(//
		program = "mocha", //
		mochaReporterFile = "mochatest/reporter.js", //
		mochaTestFile = "mochatest/example10/Example10Test.js", //		
		model = "models/testcases/example10/ExampleInterface.fidl", //
		serviceName = "Example10Service"
)

public class Example10Test extends AbstractWampRuntimeTest {	
}
