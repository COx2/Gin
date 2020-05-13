/*==============================================================================

 Copyright 2018 by Roland Rabien
 For more information visit www.rabiensoftware.com

 ==============================================================================*/


/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:               gin_dsp
  vendor:           Roland Rabien
  version:          1.0.0
  name:             Gin DSP Utilities
  description:      Gin DSP Utilities
  website:          www.rabiensoftware.com
  license:          BSD

  dependencies:     gin juce_core juce_audio_utils juce_dsp

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once

#ifndef JUCE_MODULE_AVAILABLE_gin
 /* If you fail to make sure that all your compile units are building JUCE with the same set of
    option flags, then there's a risk that different compile units will treat the classes as having
    different memory layouts, leading to very nasty memory corruption errors when they all get
    linked together. That's why it's best to always include the Introjucer-generated AppConfig.h
    file before any juce headers.

    Note that if you do have an AppConfig.h file and hit this warning, it means that it doesn't
    contain the JUCE_MODULE_AVAILABLE_xxx flags, which are necessary for some inter-module
    functionality to work correctly. In that case, you should either rebuild your AppConfig.h with
    the latest introjucer, or fix it manually to contain these flags.
 */
 #ifdef _MSC_VER
  #pragma message ("Have you included your AppConfig.h file before including the JUCE headers?")
 #else
  #warning "Have you included your AppConfig.h file before including the JUCE headers?"
 #endif
#endif

//==============================================================================
#include <juce_audio_utils/juce_audio_utils.h>
#include <juce_dsp/juce_dsp.h>
#include <gin/gin.h>

#include <map>
#include <random>
#include <cmath>

namespace gin
{
using namespace juce;
using juce::Rectangle;
using juce::Component;

#include "dsp/audioutil.h"
#include "dsp/leveltracker.h"
#include "dsp/scratchbuffer.h"

#include "dsp/adsr.h"
#include "dsp/analogadsr.h"
#include "dsp/audiofunctions.h"
#include "dsp/audioequationparser.h"
#include "dsp/audiofifo.h"
#include "dsp/distortion.h"
#include "dsp/delayline.h"
#include "dsp/dynamics.h"
#include "dsp/easedvaluesmoother.h"
#include "dsp/filter.h"
#include "dsp/eq.h"
#include "dsp/lfo.h"
#include "dsp/modulation.h"
#include "dsp/oscillators.h"
#include "dsp/resamplingfifo.h"
#include "dsp/sample.h"
#include "dsp/sampleoscillator.h"
#include "dsp/stereodelay.h"
#include "dsp/synthesiser.h"
#include "dsp/valuesmoother.h"

#include "components/dynamicsmeter.h"
#include "components/levelmeter.h"
#include "components/triggeredscope.h"
#include "components/waveformcomponent.h"
#include "components/xyscope.h"

}
