﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AncillarySourceSettings.h>
#include <aws/medialive/model/AribSourceSettings.h>
#include <aws/medialive/model/DvbSubSourceSettings.h>
#include <aws/medialive/model/EmbeddedSourceSettings.h>
#include <aws/medialive/model/Scte20SourceSettings.h>
#include <aws/medialive/model/Scte27SourceSettings.h>
#include <aws/medialive/model/TeletextSourceSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Caption Selector Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionSelectorSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CaptionSelectorSettings
  {
  public:
    CaptionSelectorSettings();
    CaptionSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    CaptionSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AncillarySourceSettings& GetAncillarySourceSettings() const{ return m_ancillarySourceSettings; }

    
    inline bool AncillarySourceSettingsHasBeenSet() const { return m_ancillarySourceSettingsHasBeenSet; }

    
    inline void SetAncillarySourceSettings(const AncillarySourceSettings& value) { m_ancillarySourceSettingsHasBeenSet = true; m_ancillarySourceSettings = value; }

    
    inline void SetAncillarySourceSettings(AncillarySourceSettings&& value) { m_ancillarySourceSettingsHasBeenSet = true; m_ancillarySourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithAncillarySourceSettings(const AncillarySourceSettings& value) { SetAncillarySourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithAncillarySourceSettings(AncillarySourceSettings&& value) { SetAncillarySourceSettings(std::move(value)); return *this;}


    
    inline const AribSourceSettings& GetAribSourceSettings() const{ return m_aribSourceSettings; }

    
    inline bool AribSourceSettingsHasBeenSet() const { return m_aribSourceSettingsHasBeenSet; }

    
    inline void SetAribSourceSettings(const AribSourceSettings& value) { m_aribSourceSettingsHasBeenSet = true; m_aribSourceSettings = value; }

    
    inline void SetAribSourceSettings(AribSourceSettings&& value) { m_aribSourceSettingsHasBeenSet = true; m_aribSourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithAribSourceSettings(const AribSourceSettings& value) { SetAribSourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithAribSourceSettings(AribSourceSettings&& value) { SetAribSourceSettings(std::move(value)); return *this;}


    
    inline const DvbSubSourceSettings& GetDvbSubSourceSettings() const{ return m_dvbSubSourceSettings; }

    
    inline bool DvbSubSourceSettingsHasBeenSet() const { return m_dvbSubSourceSettingsHasBeenSet; }

    
    inline void SetDvbSubSourceSettings(const DvbSubSourceSettings& value) { m_dvbSubSourceSettingsHasBeenSet = true; m_dvbSubSourceSettings = value; }

    
    inline void SetDvbSubSourceSettings(DvbSubSourceSettings&& value) { m_dvbSubSourceSettingsHasBeenSet = true; m_dvbSubSourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithDvbSubSourceSettings(const DvbSubSourceSettings& value) { SetDvbSubSourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithDvbSubSourceSettings(DvbSubSourceSettings&& value) { SetDvbSubSourceSettings(std::move(value)); return *this;}


    
    inline const EmbeddedSourceSettings& GetEmbeddedSourceSettings() const{ return m_embeddedSourceSettings; }

    
    inline bool EmbeddedSourceSettingsHasBeenSet() const { return m_embeddedSourceSettingsHasBeenSet; }

    
    inline void SetEmbeddedSourceSettings(const EmbeddedSourceSettings& value) { m_embeddedSourceSettingsHasBeenSet = true; m_embeddedSourceSettings = value; }

    
    inline void SetEmbeddedSourceSettings(EmbeddedSourceSettings&& value) { m_embeddedSourceSettingsHasBeenSet = true; m_embeddedSourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithEmbeddedSourceSettings(const EmbeddedSourceSettings& value) { SetEmbeddedSourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithEmbeddedSourceSettings(EmbeddedSourceSettings&& value) { SetEmbeddedSourceSettings(std::move(value)); return *this;}


    
    inline const Scte20SourceSettings& GetScte20SourceSettings() const{ return m_scte20SourceSettings; }

    
    inline bool Scte20SourceSettingsHasBeenSet() const { return m_scte20SourceSettingsHasBeenSet; }

    
    inline void SetScte20SourceSettings(const Scte20SourceSettings& value) { m_scte20SourceSettingsHasBeenSet = true; m_scte20SourceSettings = value; }

    
    inline void SetScte20SourceSettings(Scte20SourceSettings&& value) { m_scte20SourceSettingsHasBeenSet = true; m_scte20SourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithScte20SourceSettings(const Scte20SourceSettings& value) { SetScte20SourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithScte20SourceSettings(Scte20SourceSettings&& value) { SetScte20SourceSettings(std::move(value)); return *this;}


    
    inline const Scte27SourceSettings& GetScte27SourceSettings() const{ return m_scte27SourceSettings; }

    
    inline bool Scte27SourceSettingsHasBeenSet() const { return m_scte27SourceSettingsHasBeenSet; }

    
    inline void SetScte27SourceSettings(const Scte27SourceSettings& value) { m_scte27SourceSettingsHasBeenSet = true; m_scte27SourceSettings = value; }

    
    inline void SetScte27SourceSettings(Scte27SourceSettings&& value) { m_scte27SourceSettingsHasBeenSet = true; m_scte27SourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithScte27SourceSettings(const Scte27SourceSettings& value) { SetScte27SourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithScte27SourceSettings(Scte27SourceSettings&& value) { SetScte27SourceSettings(std::move(value)); return *this;}


    
    inline const TeletextSourceSettings& GetTeletextSourceSettings() const{ return m_teletextSourceSettings; }

    
    inline bool TeletextSourceSettingsHasBeenSet() const { return m_teletextSourceSettingsHasBeenSet; }

    
    inline void SetTeletextSourceSettings(const TeletextSourceSettings& value) { m_teletextSourceSettingsHasBeenSet = true; m_teletextSourceSettings = value; }

    
    inline void SetTeletextSourceSettings(TeletextSourceSettings&& value) { m_teletextSourceSettingsHasBeenSet = true; m_teletextSourceSettings = std::move(value); }

    
    inline CaptionSelectorSettings& WithTeletextSourceSettings(const TeletextSourceSettings& value) { SetTeletextSourceSettings(value); return *this;}

    
    inline CaptionSelectorSettings& WithTeletextSourceSettings(TeletextSourceSettings&& value) { SetTeletextSourceSettings(std::move(value)); return *this;}

  private:

    AncillarySourceSettings m_ancillarySourceSettings;
    bool m_ancillarySourceSettingsHasBeenSet = false;

    AribSourceSettings m_aribSourceSettings;
    bool m_aribSourceSettingsHasBeenSet = false;

    DvbSubSourceSettings m_dvbSubSourceSettings;
    bool m_dvbSubSourceSettingsHasBeenSet = false;

    EmbeddedSourceSettings m_embeddedSourceSettings;
    bool m_embeddedSourceSettingsHasBeenSet = false;

    Scte20SourceSettings m_scte20SourceSettings;
    bool m_scte20SourceSettingsHasBeenSet = false;

    Scte27SourceSettings m_scte27SourceSettings;
    bool m_scte27SourceSettingsHasBeenSet = false;

    TeletextSourceSettings m_teletextSourceSettings;
    bool m_teletextSourceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
