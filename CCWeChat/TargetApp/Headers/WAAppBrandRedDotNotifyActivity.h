//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAAppBrandRedDotNotifyActivity : NSObject <PBCoding>
{
    _Bool isClose;
    _Bool markHasClick;
    _Bool hasRedDotExposed;
    unsigned int activityType;
    unsigned int pushTime;
    unsigned int duration;
    unsigned int frequency;
    unsigned int getPushLocalTime;
    unsigned int lastUploadLocalTime;
    unsigned int reason;
    unsigned int showType;
    NSString *msgId;
    NSString *tips;
}

+ (void)initialize;
@property(nonatomic) unsigned int showType; // @synthesize showType;
@property(nonatomic) unsigned int reason; // @synthesize reason;
@property(nonatomic) _Bool hasRedDotExposed; // @synthesize hasRedDotExposed;
@property(copy, nonatomic) NSString *tips; // @synthesize tips;
@property(nonatomic) _Bool markHasClick; // @synthesize markHasClick;
@property(nonatomic) unsigned int lastUploadLocalTime; // @synthesize lastUploadLocalTime;
@property(nonatomic) unsigned int getPushLocalTime; // @synthesize getPushLocalTime;
@property(nonatomic) unsigned int frequency; // @synthesize frequency;
@property(nonatomic) unsigned int duration; // @synthesize duration;
@property(nonatomic) unsigned int pushTime; // @synthesize pushTime;
@property(nonatomic) _Bool isClose; // @synthesize isClose;
@property(nonatomic) unsigned int activityType; // @synthesize activityType;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

