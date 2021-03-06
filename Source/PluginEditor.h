/*
 * ============================================================================
 *
 * PluginEditor.h
 * Container for plugin GUI
 * 
 * From HQStreamer - Stream lossless audio from one DAW to another across the web
 * Copyright (C) 2016 Sauraen
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * ============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "JuceHeader.h"
#include "PluginProcessor.h"
#include "MainComponent.h"


//==============================================================================
/**
*/
class HqstreamerAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    HqstreamerAudioProcessorEditor (HqstreamerAudioProcessor&);
    ~HqstreamerAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    HqstreamerAudioProcessor& processor;
    
    ScopedPointer<MainComponent> mainComponent;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HqstreamerAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
