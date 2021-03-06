//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ContactTagNameEditViewControllerDelegate.h"
#import "FavTagEditViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class FavBarButton, FavTagListView, MMLoadingView, MMScrollView, MMTimer, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface FavTagSearchFilter : MMUIView <ContactTagNameEditViewControllerDelegate, FavTagEditViewDelegate, UIScrollViewDelegate>
{
    UIView *m_backgroundView;
    MMScrollView *m_scrollView;
    UILabel *m_label;
    FavTagListView *m_tagListView;
    FavBarButton *m_favBarBtn;
    NSMutableArray *m_currentTags;
    NSMutableArray *m_allTags;
    id <FavTagSearchFilterDelegate> m_delegate;
    MMTimer *tagEditTimer;
    UIView *m_sepLine;
    UIButton *m_editBtn;
    MMLoadingView *m_loadingView;
}

@property(nonatomic) __weak id <FavTagSearchFilterDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showMenu;
- (void)onLongPressTagBtn:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)renameTag:(id)arg1;
- (void)removeAllTags;
- (void)removeLastTag;
- (id)getTagList;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateTagList;
- (void)clearAndUpdateTagList;
- (void)ontap;
- (void)goToCapacityViewController;
- (id)getCapcityString;
- (void)initView;
- (void)layoutSubviews;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

