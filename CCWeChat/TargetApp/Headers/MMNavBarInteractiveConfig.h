//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class UIColor, UIImageView, UIScrollView, UITapGestureRecognizer, UIView;

@interface MMNavBarInteractiveConfig : MMObject
{
    _Bool _shouldIgnoreShrink;
    unsigned long long _navBarInteractiveStyle;
    double _navBarFadeInStartOffset;
    double _navBarFadeInEndOffset;
    UIView *_customNavBarView;
    double _navBarShrinkRemainHeight;
    UIScrollView *_scrollViewForNavBarInteraction;
    UIColor *_fadeInColor;
    id <MMNavBarInteractiveDelegate> _m_delegate;
    double _lastContentOffsetY;
    double _navigationBarY;
    long long _scrollNavBarState;
    UITapGestureRecognizer *_tapGesture;
    UIImageView *_shadowView;
}

@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) long long scrollNavBarState; // @synthesize scrollNavBarState=_scrollNavBarState;
@property(nonatomic) _Bool shouldIgnoreShrink; // @synthesize shouldIgnoreShrink=_shouldIgnoreShrink;
@property(nonatomic) double navigationBarY; // @synthesize navigationBarY=_navigationBarY;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(nonatomic) __weak id <MMNavBarInteractiveDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) UIColor *fadeInColor; // @synthesize fadeInColor=_fadeInColor;
@property(retain, nonatomic) UIScrollView *scrollViewForNavBarInteraction; // @synthesize scrollViewForNavBarInteraction=_scrollViewForNavBarInteraction;
@property(nonatomic) double navBarShrinkRemainHeight; // @synthesize navBarShrinkRemainHeight=_navBarShrinkRemainHeight;
@property(retain, nonatomic) UIView *customNavBarView; // @synthesize customNavBarView=_customNavBarView;
@property(nonatomic) double navBarFadeInEndOffset; // @synthesize navBarFadeInEndOffset=_navBarFadeInEndOffset;
@property(nonatomic) double navBarFadeInStartOffset; // @synthesize navBarFadeInStartOffset=_navBarFadeInStartOffset;
@property(nonatomic) unsigned long long navBarInteractiveStyle; // @synthesize navBarInteractiveStyle=_navBarInteractiveStyle;
- (void).cxx_destruct;
- (id)initTransitionStyleWithScrollView:(id)arg1;
- (id)initShrinkStyleWithScrollView:(id)arg1 withRemainHeight:(double)arg2;
- (id)initShrinkStyleWithScrollView:(id)arg1;
- (id)initFadeAndShrinkStyleWithScrollView:(id)arg1 fadeInColor:(id)arg2 fadeInStartOffset:(double)arg3 fadeInEndOffset:(double)arg4 remainHeight:(double)arg5;
- (id)initFadeAndShrinkStyleWithScrollView:(id)arg1;
- (id)initFadeStyleWithScrollView:(id)arg1 fadeInColor:(id)arg2 fadeInStartOffset:(double)arg3 fadeInEndOffset:(double)arg4;
- (id)initFadeStyleWithScrollView:(id)arg1 fadeInColor:(id)arg2;

@end
