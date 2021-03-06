/* Copyright (C) 2017 itemis AG
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <iostream>
#include <thread>

#include <CommonAPI/CommonAPI.hpp>

#include "ExampleInterfaceStubImpl.hpp"

int main(int argc, const char * const argv[])
{
	//CommonAPI::Runtime::setProperty("LogContext", "E10CC");
	//CommonAPI::Runtime::setProperty("LogApplication", "E10CC");
	CommonAPI::Runtime::setProperty("LibraryBase", "Example10");

	std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();

	std::string domain = "local";
	std::string instance = "testcases.example10.ExampleInterface";
	std::string connection = "service-sample";

	// create service and register it at runtime
	std::shared_ptr<v0::testcases::example10::ExampleInterfaceStubImpl> myService =
			std::make_shared<v0::testcases::example10::ExampleInterfaceStubImpl>();
	runtime->registerService(domain, instance, myService);

	while (true) {
		std::cout << "Waiting for calls... (Abort with CTRL+C)" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(60));
	}

	return 0;
}

