//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface VoiceAutoTransReporter : NSObject
{
    unsigned int _userScollCount;
    int _transEndType;
    NSMutableSet *_voiceIds;
}

@property(nonatomic) int transEndType; // @synthesize transEndType=_transEndType;
@property(retain, nonatomic) NSMutableSet *voiceIds; // @synthesize voiceIds=_voiceIds;
@property(nonatomic) unsigned int userScollCount; // @synthesize userScollCount=_userScollCount;
- (void).cxx_destruct;
- (void)report;
- (void)addVoiceIdWithMsg:(id)arg1;
- (void)userDidScroll;
- (id)init;

@end

