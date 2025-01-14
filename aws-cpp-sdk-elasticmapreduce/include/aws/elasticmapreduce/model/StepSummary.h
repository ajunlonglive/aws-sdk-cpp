﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/HadoopStepConfig.h>
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/elasticmapreduce/model/StepStatus.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The summary of the cluster step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepSummary">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API StepSummary
  {
  public:
    StepSummary();
    StepSummary(Aws::Utils::Json::JsonView jsonValue);
    StepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline StepSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline StepSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline StepSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the cluster step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline StepSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster step.</p>
     */
    inline StepSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster step.</p>
     */
    inline StepSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline const HadoopStepConfig& GetConfig() const{ return m_config; }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline void SetConfig(const HadoopStepConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline void SetConfig(HadoopStepConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline StepSummary& WithConfig(const HadoopStepConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline StepSummary& WithConfig(HadoopStepConfig&& value) { SetConfig(std::move(value)); return *this;}


    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline const ActionOnFailure& GetActionOnFailure() const{ return m_actionOnFailure; }

    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline bool ActionOnFailureHasBeenSet() const { return m_actionOnFailureHasBeenSet; }

    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline void SetActionOnFailure(const ActionOnFailure& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }

    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline void SetActionOnFailure(ActionOnFailure&& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = std::move(value); }

    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline StepSummary& WithActionOnFailure(const ActionOnFailure& value) { SetActionOnFailure(value); return *this;}

    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline StepSummary& WithActionOnFailure(ActionOnFailure&& value) { SetActionOnFailure(std::move(value)); return *this;}


    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline void SetStatus(const StepStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline void SetStatus(StepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline StepSummary& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline StepSummary& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HadoopStepConfig m_config;
    bool m_configHasBeenSet = false;

    ActionOnFailure m_actionOnFailure;
    bool m_actionOnFailureHasBeenSet = false;

    StepStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
