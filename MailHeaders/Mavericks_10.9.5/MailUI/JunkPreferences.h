/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

@class NSButton, NSColor, NSMatrix;

@interface JunkPreferences : NSPreferencesModule
{
    NSButton *_advancedButton;
    NSMatrix *_junkMailMode;
    NSButton *_junkMailOnOffSwitch;
    NSMatrix *_junkMailWhitelist;
    long long _junkMailBehavior;
}

+ (id)keyPathsForValuesAffectingIsAdvancedEnabled;
+ (id)keyPathsForValuesAffectingIsEnabled;
+ (id)keyPathsForValuesAffectingLabelColor;
- (void)showCustomJunkMailSettings:(id)arg1;
- (void)resetJunkMailMap:(id)arg1;
- (void)changeJunkMailBehavior:(id)arg1;
@property(readonly) BOOL isAdvancedEnabled;
@property(readonly) BOOL isEnabled;
@property long long junkMailBehavior;
- (void)whitelistChanged:(id)arg1;
- (void)junkMailToggled:(id)arg1;
- (void)initializeFromDefaults;
@property(readonly) NSColor *labelColor;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (void)_messageRuleChanged:(id)arg1;
- (BOOL)isResizable;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;

@end

