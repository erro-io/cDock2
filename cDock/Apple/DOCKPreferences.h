//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DOCKPreferences : NSObject
{
}

+ (id)preferences;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) float durationDigAnglePref; // @dynamic durationDigAnglePref;
@property(nonatomic) float durationDigPerFrameDurationPref; // @dynamic durationDigPerFrameDurationPref;
@property(nonatomic) float durationDigDurationPref; // @dynamic durationDigDurationPref;
@property(nonatomic) float autohideDelayPref; // @dynamic autohideDelayPref;
@property(nonatomic) unsigned int dockBlurPref; // @dynamic dockBlurPref;
@property(nonatomic) unsigned char showProcessIndicatorsPref; // @dynamic showProcessIndicatorsPref;
@property(nonatomic) unsigned char minimizeToApplicationPref; // @dynamic minimizeToApplicationPref;
- (int)enabledStatePref;
- (void)setEnabledStatePref:(int)arg1;
@property(nonatomic) BOOL showMissionControlGestureEnabledPref; // @dynamic showMissionControlGestureEnabledPref;
@property(nonatomic) BOOL showAppExposeGestureEnabledPref; // @dynamic showAppExposeGestureEnabledPref;
@property(nonatomic) BOOL showDesktopGestureEnabledPref; // @dynamic showDesktopGestureEnabledPref;
@property(nonatomic) BOOL groupWindowsByApplicationPref; // @dynamic groupWindowsByApplicationPref;
@property(nonatomic) BOOL autoReorderSpacesPref; // @dynamic autoReorderSpacesPref;
@property(nonatomic) BOOL showLaunchpadGestureEnabledPref; // @dynamic showLaunchpadGestureEnabledPref;

@end

