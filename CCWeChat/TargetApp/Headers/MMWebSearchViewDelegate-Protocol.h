//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIButton, UIScrollView, UISearchDisplayController, UIView<YYWebViewInterface>, UIView<YYWebViewInterface><WebSearchInterface>, WSStreamPlayerView;

@protocol MMWebSearchViewDelegate <NSObject>

@optional
- (void)onBackToClearKeywordState:(NSDictionary *)arg1;
- (void)onControllerWillBeginDetailSearch:(NSDictionary *)arg1;
- (void)onOpenWebRecommend:(NSDictionary *)arg1;
- (void)onWebPageActive:(NSDictionary *)arg1;
- (void)webviewScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(WSStreamPlayerView *)arg3;
- (void)onUpdateTitleViewWithTitle:(NSString *)arg1;
- (void)onRemoveDetailView:(UIView<YYWebViewInterface><WebSearchInterface> *)arg1;
- (void)onHideSearchBarWithParams:(NSDictionary *)arg1;
- (NSString *)getNativeHeight;
- (NSString *)getInputHeight;
- (NSString *)getInputMarginLeftRight;
- (NSString *)getInputMarginTop;
- (void)onSearchHotWord:(NSDictionary *)arg1;
- (void)onWebViewTerminal:(UIView<YYWebViewInterface> *)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(UIView<YYWebViewInterface> *)arg1;
- (void)onJsbridgeReady:(id <YYWebViewInterface>)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onUpdateNativeSuggestion;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onViewTypeChanged;
- (void)onSearchReset;
- (void)onSearchBackToPreviousView;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchInputSetPlaceHolder:(NSDictionary *)arg1;
- (void)onSearchInputSetText:(NSString *)arg1 tagInfo:(NSDictionary *)arg2;
- (double)webSearchViewPosY;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)didEndSearch:(UISearchDisplayController *)arg1;
- (void)willEndSearch:(UISearchDisplayController *)arg1;
- (void)didBeginSearch:(UISearchDisplayController *)arg1;
- (void)willBeginSearch:(UISearchDisplayController *)arg1;
- (void)onTapBlurEffectView;
- (void)onFinalBackButtonClick:(UIButton *)arg1;
@end

