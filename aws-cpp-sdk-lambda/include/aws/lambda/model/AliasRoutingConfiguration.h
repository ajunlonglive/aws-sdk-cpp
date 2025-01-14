﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-traffic-shifting-using-aliases.html">traffic-shifting</a>
   * configuration of a Lambda function alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AliasRoutingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AliasRoutingConfiguration
  {
  public:
    AliasRoutingConfiguration();
    AliasRoutingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AliasRoutingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAdditionalVersionWeights() const{ return m_additionalVersionWeights; }

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline bool AdditionalVersionWeightsHasBeenSet() const { return m_additionalVersionWeightsHasBeenSet; }

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline void SetAdditionalVersionWeights(const Aws::Map<Aws::String, double>& value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights = value; }

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline void SetAdditionalVersionWeights(Aws::Map<Aws::String, double>&& value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights = std::move(value); }

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline AliasRoutingConfiguration& WithAdditionalVersionWeights(const Aws::Map<Aws::String, double>& value) { SetAdditionalVersionWeights(value); return *this;}

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline AliasRoutingConfiguration& WithAdditionalVersionWeights(Aws::Map<Aws::String, double>&& value) { SetAdditionalVersionWeights(std::move(value)); return *this;}

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(const Aws::String& key, double value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(key, value); return *this; }

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(Aws::String&& key, double value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(std::move(key), value); return *this; }

    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(const char* key, double value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, double> m_additionalVersionWeights;
    bool m_additionalVersionWeightsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
