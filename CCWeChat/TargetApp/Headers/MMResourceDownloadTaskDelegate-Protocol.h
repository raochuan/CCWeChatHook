//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMResourceDownloadTask, NSData;

@protocol MMResourceDownloadTaskDelegate <NSObject>
- (void)onDownloadFinish:(long long)arg1 downloadData:(NSData *)arg2 task:(MMResourceDownloadTask *)arg3;
@end

