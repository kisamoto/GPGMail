/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "BannerViewController.h"

@class BannerImageView, NSButton, NSMutableArray, NSString, NSTextField;

@interface ParentBannerViewController : BannerViewController
{
    NSMutableArray *_requestedAddresses;
    BOOL _requestIsForSenders;
    BannerImageView *_icon;
    NSTextField *_messageField;
    NSButton *_helpButton;
    NSButton *_respondButton;
    NSString *_childAddress;
    long long _permissionRequestState;
}

@property(nonatomic) long long permissionRequestState; // @synthesize permissionRequestState=_permissionRequestState;
@property(nonatomic) NSString *childAddress; // @synthesize childAddress=_childAddress;
@property(nonatomic) BOOL requestIsForSenders; // @synthesize requestIsForSenders=_requestIsForSenders;
@property(nonatomic) NSButton *respondButton; // @synthesize respondButton=_respondButton;
@property(nonatomic) NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) BannerImageView *icon; // @synthesize icon=_icon;
- (void)rejectChildRequest:(id)arg1;
- (void)approveChildRequest:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (id)backgroundColor;
- (void)dealloc;
- (id)initWithBannerContainerViewController:(id)arg1;
- (id)nibName;

@end

