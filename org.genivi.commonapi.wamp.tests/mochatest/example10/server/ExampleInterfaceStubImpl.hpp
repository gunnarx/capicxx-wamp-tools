/* Copyright (C) 2017 itemis AG
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ExampleInterfaceSTUBIMPL_H_
#define ExampleInterfaceSTUBIMPL_H_

#include "v0/testcases/example10/ExampleInterfaceStub.hpp"

namespace v0 {
namespace testcases {
namespace example10 {

class ExampleInterfaceStubImpl : public ExampleInterfaceStub {
public:
	ExampleInterfaceStubImpl();
    virtual ~ExampleInterfaceStubImpl();

    virtual RemoteEventHandlerType* initStubAdapter(const std::shared_ptr<StubAdapterType> &_stubAdapter);

    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId);

    /// This is the method that will be called on remote calls on the method method1
    virtual void method1(const std::shared_ptr<CommonAPI::ClientId> _client, int64_t _arg1, method1Reply_t _reply);

    /// This is the method that will be called on remote calls on the method methodWithError1
    virtual void methodWithError1(const std::shared_ptr<CommonAPI::ClientId> _client, int64_t _arg1, methodWithError1Reply_t _reply);
};

} // namespace example10
} // namespace testcases
} // namespace v0

#endif /* ExampleInterfaceSTUBIMPL_H_ */
