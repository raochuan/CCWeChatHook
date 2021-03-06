//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "SightIconViewDelegate.h"

@class CMessageWrap, MMUILabel, NSString, SightIconView, UIButton, UIImageView, UITapGestureRecognizer, UIView, VideoProgressBar;

@interface WCC2CPlayerControlView : WCPlayerControlView <SightIconViewDelegate>
{
    id <WCC2CPlayerControlViewDelegate> _delegate;
    UIImageView *_topBkgView;
    UIButton *_closeButton;
    UIImageView *_bottomBkgView;
    MMUILabel *_errorTipsLabel;
    SightIconView *_iconView;
    VideoProgressBar *_progressBar;
    UIButton *_playAttachVideoButton;
    UIView *_toolPanView;
    UIView *_tapgGestureView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CMessageWrap *_msgWrap;
    struct CGSize _iconSize;
}

@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *tapgGestureView; // @synthesize tapgGestureView=_tapgGestureView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(retain, nonatomic) UIButton *playAttachVideoButton; // @synthesize playAttachVideoButton=_playAttachVideoButton;
@property(retain, nonatomic) VideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *errorTipsLabel; // @synthesize errorTipsLabel=_errorTipsLabel;
@property(retain, nonatomic) UIImageView *bottomBkgView; // @synthesize bottomBkgView=_bottomBkgView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *topBkgView; // @synthesize topBkgView=_topBkgView;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) __weak id <WCC2CPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hiddenDownloadPercentView;
- (void)showDownloadPercentView;
- (void)showBufferingView;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseBtnClick;
- (void)onVideoPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTapOnIconView:(id)arg1;
- (void)layoutSubviews;
- (void)setErrorTipsText:(id)arg1;
- (void)updateTotalTime:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)initPlayAttachVideoBtn;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

