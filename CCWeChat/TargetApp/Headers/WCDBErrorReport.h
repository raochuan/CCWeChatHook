//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCDBErrorReport : NSObject
{
    struct map<std::__1::pair<int, int>, int, std::__1::less<std::__1::pair<int, int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<int, int>, int>>> _idkey;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportRetrieverSummary:(id)arg1;
- (void)reportRetriever:(id)arg1;
- (void)reportErrorToIDKey:(id)arg1;
- (void)reportErrorToKV:(id)arg1;
- (void)handleError:(id)arg1;
- (id)init;

@end
