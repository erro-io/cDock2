//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WVSpace;

@interface WVSpacesDisplayInfo : NSObject
{
    _Bool _boundToAllSpaces;
    unsigned int _display;
    WVSpace *_currentSpace;
    WVSpace *_boundSpace;
    unsigned long long _boundSpaceIndex;
}

@property(nonatomic) unsigned long long boundSpaceIndex; // @synthesize boundSpaceIndex=_boundSpaceIndex;
@property(retain, nonatomic) WVSpace *boundSpace; // @synthesize boundSpace=_boundSpace;
@property(nonatomic) _Bool boundToAllSpaces; // @synthesize boundToAllSpaces=_boundToAllSpaces;
@property(retain, nonatomic) WVSpace *currentSpace; // @synthesize currentSpace=_currentSpace;
@property(nonatomic) unsigned int display; // @synthesize display=_display;
- (void).cxx_destruct;

@end
