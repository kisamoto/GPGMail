/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class ActivityAggregateView, ActivityPaneView, NSButton, NSLayoutConstraint, NSMutableArray, NSMutableSet, NSOutlineView, NSString, NSTextField, NSView;

@interface ActivityViewController : NSObject <NSAnimationDelegate>
{
    NSMutableArray *_views;
    NSMutableArray *_viewQueue;
    NSMutableSet *_viewsPendingHide;
    BOOL _loadingAggregateView;
    NSTextField *_titleTextField;
    ActivityPaneView *_contentView;
    ActivityPaneView *_bottomPane;
    NSButton *_mailActivityToggleButton;
    NSOutlineView *_mailboxesOutline;
    NSView *_mailboxesContent;
    ActivityAggregateView *_aggregateView;
    NSView *_innerView;
    ActivityAggregateView *_inView;
    ActivityAggregateView *_outView;
    ActivityAggregateView *_saveView;
    NSLayoutConstraint *_activityViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *activityViewHeightConstraint; // @synthesize activityViewHeightConstraint=_activityViewHeightConstraint;
@property(retain, nonatomic) ActivityAggregateView *saveView; // @synthesize saveView=_saveView;
@property(retain, nonatomic) ActivityAggregateView *outView; // @synthesize outView=_outView;
@property(retain, nonatomic) ActivityAggregateView *inView; // @synthesize inView=_inView;
@property(retain, nonatomic) NSView *innerView; // @synthesize innerView=_innerView;
@property(nonatomic) BOOL loadingAggregateView; // @synthesize loadingAggregateView=_loadingAggregateView;
@property(retain, nonatomic) ActivityAggregateView *aggregateView; // @synthesize aggregateView=_aggregateView;
@property(retain, nonatomic) NSView *mailboxesContent; // @synthesize mailboxesContent=_mailboxesContent;
@property(nonatomic) __weak NSOutlineView *mailboxesOutline; // @synthesize mailboxesOutline=_mailboxesOutline;
@property(nonatomic) __weak NSButton *mailActivityToggleButton; // @synthesize mailActivityToggleButton=_mailActivityToggleButton;
@property(nonatomic) __weak ActivityPaneView *bottomPane; // @synthesize bottomPane=_bottomPane;
@property(nonatomic) __weak ActivityPaneView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (BOOL)_shouldShowBottomDivider;
- (void)_mailboxesFrameChanged:(id)arg1;
- (double)_activityAnimationDuration;
- (void)_setActivityViewHeight:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_hideViews:(id)arg1;
- (void)_hideView:(id)arg1;
- (void)_showView:(id)arg1;
- (BOOL)removeViewFromQueue:(id)arg1;
- (void)addViewToQueue:(id)arg1;
- (void)toggleDisplay:(id)arg1;
- (void)configureActivityAggegateViews;
- (id)_activityAggregateViewForAggregate:(id)arg1 withKeyPathToObserve:(id)arg2;
- (id)_loadActivityAggregateView;
- (void)_setVisible:(BOOL)arg1;
- (void)_unregisterObservedKeyPaths;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

