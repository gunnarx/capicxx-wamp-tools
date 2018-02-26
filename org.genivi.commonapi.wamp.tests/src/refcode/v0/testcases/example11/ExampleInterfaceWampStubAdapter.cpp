/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.wamp (standalone).
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/

#include "v0/testcases/example11/ExampleInterface.hpp"
#include "v0/testcases/example11/ExampleInterfaceWampStubAdapter.hpp"
#include "v0/testcases/example11/ExampleInterfaceWampTypesSupport.hpp"

#include <functional>

namespace v0 {
namespace testcases {
namespace example11 {

std::shared_ptr<CommonAPI::Wamp::WampStubAdapter> createExampleInterfaceWampStubAdapter(
						const CommonAPI::Wamp::WampAddress &_address,
						const std::shared_ptr<CommonAPI::Wamp::WampProxyConnection> &_connection,
						const std::shared_ptr<CommonAPI::StubBase> &_stub) {
	std::cout << "createExampleInterfaceWampStubAdapter called" << std::endl;
	return std::make_shared<ExampleInterfaceWampStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerExampleInterfaceWampStubAdapter) {
	CommonAPI::Wamp::Factory::get()->registerStubAdapterCreateMethod(
		ExampleInterface::getInterface(), &createExampleInterfaceWampStubAdapter);
	std::cout << "registerStubAdapterCreateMethod(createExampleInterfaceWampStubAdapter)" << std::endl;
}

ExampleInterfaceWampStubAdapterInternal::~ExampleInterfaceWampStubAdapterInternal() {
	deactivateManagedInstances();
	ExampleInterfaceWampStubAdapterHelper::deinit();
}

void ExampleInterfaceWampStubAdapterInternal::deactivateManagedInstances() {

}

CommonAPI::Wamp::WampGetAttributeStubDispatcher<
	::v0::testcases::example11::ExampleInterfaceStub,
	CommonAPI::Version
> ExampleInterfaceWampStubAdapterInternal::getExampleInterfaceInterfaceVersionStubDispatcher(&ExampleInterfaceStub::getInterfaceVersion, "uu");


const ExampleInterfaceWampStubAdapterHelper::StubDispatcherTable& ExampleInterfaceWampStubAdapterInternal::getStubDispatcherTable() {
	return stubDispatcherTable_;
}

const CommonAPI::Wamp::StubAttributeTable& ExampleInterfaceWampStubAdapterInternal::getStubAttributeTable() {
	return stubAttributeTable_;
}

ExampleInterfaceWampStubAdapterInternal::ExampleInterfaceWampStubAdapterInternal(
		const CommonAPI::Wamp::WampAddress &_address,
		const std::shared_ptr<CommonAPI::Wamp::WampProxyConnection> &_connection,
		const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::Wamp::WampStubAdapter(_address, _connection, false),
	  ExampleInterfaceWampStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<ExampleInterfaceStub>(_stub), false),
	  stubDispatcherTable_({ /* TODO: is stubDispatcherTable needed at all? */ }),
		stubAttributeTable_() {
	std::cout << "ExampleInterfaceWampStubAdapterInternal constructor called" << std::endl;
	stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &/*namespace::*/ExampleInterfaceWampStubAdapterInternal::getExampleInterfaceInterfaceVersionStubDispatcher });
}


//////////////////////////////////////////////////////////////////////////////////////////

void ExampleInterfaceWampStubAdapterInternal::provideRemoteMethods() {
	std::cout << "provideRemoteMethods called" << std::endl;

	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method1", &ExampleInterfaceWampStubAdapterInternal::wrap_method1);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method2", &ExampleInterfaceWampStubAdapterInternal::wrap_method2);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method3", &ExampleInterfaceWampStubAdapterInternal::wrap_method3);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method4", &ExampleInterfaceWampStubAdapterInternal::wrap_method4);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method5", &ExampleInterfaceWampStubAdapterInternal::wrap_method5);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method6", &ExampleInterfaceWampStubAdapterInternal::wrap_method6);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method7", &ExampleInterfaceWampStubAdapterInternal::wrap_method7);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method8", &ExampleInterfaceWampStubAdapterInternal::wrap_method8);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method9", &ExampleInterfaceWampStubAdapterInternal::wrap_method9);
	CommonAPI::Wamp::WampMethodWithReplyStubDispatcher<ExampleInterfaceWampStubAdapterInternal>
		::provideRemoteMethod(*this,
			"method10", &ExampleInterfaceWampStubAdapterInternal::wrap_method10);
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method1(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method1 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<int8_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method1 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	int8_t ret1;
	stub_->method1(
		clientId, arg1
		, [&](int8_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method2(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method2 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<uint8_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method2 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	uint8_t ret1;
	stub_->method2(
		clientId, arg1
		, [&](uint8_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method3(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method3 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<int16_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method3 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	int16_t ret1;
	stub_->method3(
		clientId, arg1
		, [&](int16_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method4(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method4 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<uint16_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method4 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	uint16_t ret1;
	stub_->method4(
		clientId, arg1
		, [&](uint16_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method5(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method5 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<int32_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method5 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	int32_t ret1;
	stub_->method5(
		clientId, arg1
		, [&](int32_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method6(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method6 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<uint32_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method6 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	uint32_t ret1;
	stub_->method6(
		clientId, arg1
		, [&](uint32_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method7(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method7 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<int64_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method7 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	int64_t ret1;
	stub_->method7(
		clientId, arg1
		, [&](int64_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method8(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method8 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<uint64_t>(1);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method8 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	uint64_t ret1;
	stub_->method8(
		clientId, arg1
		, [&](uint64_t _ret1) {
			ret1=_ret1; 
		}
	);
	invocation->result(std::make_tuple(ret1));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method9(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method9 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<int8_t>(1);
	auto arg2 = invocation->argument<int16_t>(2);
	auto arg3 = invocation->argument<int32_t>(3);
	auto arg4 = invocation->argument<int64_t>(4);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method9 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << ", arg2=" << arg2 << ", arg3=" << arg3 << ", arg4=" << arg4 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	int8_t ret1;
	int16_t ret2;
	int32_t ret3;
	int64_t ret4;
	stub_->method9(
		clientId, arg1, arg2, arg3, arg4
		, [&](int8_t _ret1, int16_t _ret2, int32_t _ret3, int64_t _ret4) {
			ret1=_ret1; ret2=_ret2; ret3=_ret3; ret4=_ret4; 
		}
	);
	invocation->result(std::make_tuple(ret1, ret2, ret3, ret4));
}

void ExampleInterfaceWampStubAdapterInternal::wrap_method10(autobahn::wamp_invocation invocation) {
	std::cout << "ExampleInterfaceWampStubAdapterInternal::wrap_method10 called" << std::endl;
	auto clientNumber = invocation->argument<uint32_t>(0);
	auto arg1 = invocation->argument<uint8_t>(1);
	auto arg2 = invocation->argument<uint16_t>(2);
	auto arg3 = invocation->argument<uint32_t>(3);
	auto arg4 = invocation->argument<uint64_t>(4);
	std::cerr << "Procedure " << getWampAddress().getRealm() << ".method10 invoked (clientNumber=" << clientNumber << ") " << "arg1=" << arg1 << ", arg2=" << arg2 << ", arg3=" << arg3 << ", arg4=" << arg4 << std::endl;
	std::shared_ptr<CommonAPI::Wamp::WampClientId> clientId = std::make_shared<CommonAPI::Wamp::WampClientId>(clientNumber);
	uint8_t ret1;
	uint16_t ret2;
	uint32_t ret3;
	uint64_t ret4;
	stub_->method10(
		clientId, arg1, arg2, arg3, arg4
		, [&](uint8_t _ret1, uint16_t _ret2, uint32_t _ret3, uint64_t _ret4) {
			ret1=_ret1; ret2=_ret2; ret3=_ret3; ret4=_ret4; 
		}
	);
	invocation->result(std::make_tuple(ret1, ret2, ret3, ret4));
}


} // namespace example11
} // namespace testcases
} // namespace v0
