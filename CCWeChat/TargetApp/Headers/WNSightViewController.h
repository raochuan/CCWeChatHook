//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "FullScreenGestureDelegate.h"
#import "IUiUtilExt.h"
#import "SightViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, FavClickStreamHelper, FavoritesItem, FavoritesItemDataField, ForwardMessageLogicController, MMUIViewController, NSString, SightView, UIButton, UIImageView, UIView, VideoProgressBar, WXFullScreenGestureRecognizer;

@interface WNSightViewController : FullScreenViewController <SightViewDelegate, IUiUtilExt, FullScreenGestureDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate>
{
    MMUIViewController *_fullScreenWindow;
    UIView *_nodeView;
    UIView *_fullScreenContent;
    SightView *_sightView;
    _Bool _fullScreenPlaying;
    UIImageView *_thumbImageView;
    struct CGRect _thumbRect;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    _Bool m_bPreventRotate;
    CDStruct_1b6d18a9 m_currentPlayTime;
    ForwardMessageLogicController *m_forwardMsgLogic;
    UIButton *m_closeButton;
    VideoProgressBar *m_progressBar;
    UIImageView *m_topBkgView;
    UIImageView *m_bottomBkgView;
    FavoritesItemDataField *_favData;
    FavoritesItem *_favItem;
    CMessageWrap *_msgWrap;
    FavClickStreamHelper *m_clickHelper;
    _Bool silencePlay;
}

@property(nonatomic) _Bool silencePlay; // @synthesize silencePlay;
- (void).cxx_destruct;
- (void)tryToSaveVideoToAlbum;
- (void)trySendSightToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowSightAction;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenClose;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (id)getCurrentViewController;
- (void)clearSubviews;
- (double)calTransformFromRect:(struct CGRect)arg1;
- (void)startLoadFullDownloadView;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)hideVCAnimation;
- (void)stopAndCloseFullScreenWindow;
- (void)setToolViewsHidden:(_Bool)arg1;
- (void)onSightProgressBarHidden;
- (void)onCloseBtnClick;
- (void)setThumbImage:(id)arg1;
- (_Bool)isFullScreenPlaying;
- (void)showVCAnimation;
- (id)getValidSightPath;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initGestures;
- (void)initWithWNSight:(id)arg1 FavoritesItem:(id)arg2 MessageWrap:(id)arg3 superWindow:(id)arg4 thumbView:(id)arg5 nodeView:(id)arg6;
- (_Bool)shouldAutorotate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

