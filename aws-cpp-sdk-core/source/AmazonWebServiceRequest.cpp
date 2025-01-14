/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws;

AmazonWebServiceRequest::AmazonWebServiceRequest() :
    m_responseStreamFactory(Aws::Utils::Stream::DefaultResponseStreamFactoryMethod),
    m_onDataReceived(nullptr),
    m_onDataSent(nullptr),
    m_continueRequest(nullptr),
    m_onRequestSigned(nullptr),
    m_requestRetryHandler(nullptr)
{
}

AmazonWebServiceRequest::EndpointParameters AmazonWebServiceRequest::GetEndpointContextParams() const
{
    static const AmazonWebServiceRequest::EndpointParameters EMPTY_CONTEXT;
    return EMPTY_CONTEXT;
}

