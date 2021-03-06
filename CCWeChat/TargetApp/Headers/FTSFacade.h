//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "FTSDBDelegate.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "WXGChatLogDelMsgNotification.h"

@class AsyncTaskQueueEngine, FTSContactMgr, FTSDB, FTSFavMgr, FTSMemorySearchMgr, FTSMessageMgr, FTSReportMgr, FTSTopHitMgr, FTSWebSearchMgr, LocalSearchDynamicConfig, MCSBrandContactMgr, MiniGameSearchMgr, NSMutableSet, NSString, WALocalSearchMgr, WAShowOutLogic, WSMusicMgr, WebSearchRedotMgr;

@interface FTSFacade : MMService <FTSDBDelegate, WXGChatLogDelMsgNotification, IMsgExt, MMService, MMKernelExt>
{
    FTSDB *_ftsDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    _Bool _hasStartAsyncQueue;
    _Bool _isPositioning;
    _Bool _bHasActiveSearch;
    FTSContactMgr *_ftsContactMgr;
    FTSMessageMgr *_ftsMessageMgr;
    FTSFavMgr *_ftsFavMgr;
    FTSMemorySearchMgr *_ftsMemorySearchMgr;
    FTSWebSearchMgr *_ftsWebSearchMgr;
    WSMusicMgr *_musicMgr;
    FTSReportMgr *_ftsReportMgr;
    WALocalSearchMgr *_weAppSearchMgr;
    WebSearchRedotMgr *_webSearchRedotMgr;
    MiniGameSearchMgr *_miniGameSearchMgr;
    NSMutableSet *_imageCacheUrlSet;
    _Bool _isOpenWeAppSearch;
    _Bool _isOpenMiniGameSearch;
    FTSTopHitMgr *_ftsTopHitMgr;
    MCSBrandContactMgr *_mcsBrdContactMgr;
    NSString *_localSearchId;
    WAShowOutLogic *_waShowOutLogic;
    LocalSearchDynamicConfig *_dynConfig;
}

@property(retain, nonatomic) LocalSearchDynamicConfig *dynConfig; // @synthesize dynConfig=_dynConfig;
@property(retain, nonatomic, getter=getWaShowOutLogic) WAShowOutLogic *waShowOutLogic; // @synthesize waShowOutLogic=_waShowOutLogic;
@property(readonly, nonatomic) NSString *localSearchId; // @synthesize localSearchId=_localSearchId;
@property(retain, nonatomic) FTSReportMgr *ftsReportMgr; // @synthesize ftsReportMgr=_ftsReportMgr;
@property(retain, nonatomic) WebSearchRedotMgr *webSearchRedotMgr; // @synthesize webSearchRedotMgr=_webSearchRedotMgr;
@property(retain, nonatomic) MiniGameSearchMgr *miniGameSearchMgr; // @synthesize miniGameSearchMgr=_miniGameSearchMgr;
@property(retain, nonatomic) WALocalSearchMgr *weAppSearchMgr; // @synthesize weAppSearchMgr=_weAppSearchMgr;
@property(retain, nonatomic) MCSBrandContactMgr *mcsBrdContactMgr; // @synthesize mcsBrdContactMgr=_mcsBrdContactMgr;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(retain, nonatomic) WSMusicMgr *musicMgr; // @synthesize musicMgr=_musicMgr;
@property(retain, nonatomic) FTSWebSearchMgr *ftsWebSearchMgr; // @synthesize ftsWebSearchMgr=_ftsWebSearchMgr;
@property(retain, nonatomic) FTSMemorySearchMgr *ftsMemorySearchMgr; // @synthesize ftsMemorySearchMgr=_ftsMemorySearchMgr;
@property(retain, nonatomic) FTSFavMgr *ftsFavMgr; // @synthesize ftsFavMgr=_ftsFavMgr;
@property(retain, nonatomic) FTSMessageMgr *ftsMessageMgr; // @synthesize ftsMessageMgr=_ftsMessageMgr;
@property(retain, nonatomic) FTSContactMgr *ftsContactMgr; // @synthesize ftsContactMgr=_ftsContactMgr;
- (void).cxx_destruct;
- (void)loadDynamicConfigs;
- (void)checkWebSearchModule;
- (id)getWSRedPointInfo:(_Bool)arg1;
- (void)tryUpdateSearchReddotClearedTimeStamps:(unsigned int)arg1;
- (void)tryUpdateRecommendReddotClearedTimeStamps:(unsigned int)arg1;
- (void)clearFFBrowseRedot;
- (void)clearFFSearchRedot;
- (_Bool)shouldShowFFBrowseRedot:(_Bool)arg1;
- (_Bool)shouldShowFFSearchRedot:(_Bool)arg1;
- (_Bool)shouldShowFindFriendTabRedotForSearch:(_Bool)arg1;
- (_Bool)shouldShowFindFriendTabRedotForRecommend:(_Bool)arg1;
- (void)jumpSearchWithQrQuery:(id)arg1 appid:(id)arg2 versionType:(unsigned int)arg3 appVersion:(unsigned int)arg4 searchExtInfo:(id)arg5;
- (void)onPreHandleRecoverDB;
- (void)cleanFTSDB;
- (void)recover;
- (void)onEndFtsSearch;
- (void)onViewPop;
- (void)removeImageCacheKey:(id)arg1;
- (void)addImageCacheKey:(id)arg1;
- (void)clearImageCache;
- (void)stopRetrievingLocation;
- (void)updateLocation;
- (void)onDeleteMessageFinish;
- (void)onRecoverFTSDB;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)onAuthOK;
- (void)doInitMiniGameSearchMgrIfNeeded;
- (_Bool)isOpenMiniGame;
- (void)doInitWeAppSearchMgrIfNeeded;
- (_Bool)isOpenWeAppSearch;
- (void)loadLocalWSConfig;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onEnterBackground;
- (void)waitAllTask;
- (void)onServiceReloadData;
- (void)reloadDatabase;
- (void)onServiceInit;
- (void)logBeginSearch:(int)arg1;
- (void)cancelSearchForHomePage;
- (void)startSearchForHomePage:(id)arg1;
- (void)updateNewestHomePageSearchText:(id)arg1;
- (void)resetSearchStatus;
- (void)onBeginSearch;
- (void)doInitWorker;
- (void)forbidForegroundTask;
- (void)enableForegroundTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

