//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "OpenSDKAddAvatarViewControllerDelegate.h"
#import "OpenSDKAuthorizeViewControllerInterface.h"
#import "PBMessageObserverDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, MMTipsViewController, NSMutableArray, NSString, OauthScopeInfo;

@interface OpenSDKAuthorizeUserInfoViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, OpenSDKAddAvatarViewControllerDelegate, PBMessageObserverDelegate, OpenSDKAuthorizeViewControllerInterface>
{
    _Bool _isBanModifyAvatar;
    _Bool _canAddNewAvatar;
    unsigned int _avatarLimit;
    unsigned int _selectedAvatarId;
    unsigned int _defaultAvatarId;
    OauthScopeInfo *_scopeInfo;
    NSString *_appName;
    NSString *_iconUrl;
    id <OpenSDKAuthorizeViewControllerDelegate> _delegate;
    NSString *_appId;
    NSMutableArray *_avatarList;
    MMTableView *_tableView;
    MMTipsViewController *_tipsVC;
}

@property(nonatomic) _Bool canAddNewAvatar; // @synthesize canAddNewAvatar=_canAddNewAvatar;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
@property(retain, nonatomic) MMTipsViewController *tipsVC; // @synthesize tipsVC=_tipsVC;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <OpenSDKAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
- (void).cxx_destruct;
- (void)onAddAvatarFail:(unsigned int)arg1;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)handleDelAvatarResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteAvatar:(id)arg1;
- (id)genNoMoreQuotaCell;
- (double)heightForNoMoreQuotaCell;
- (id)genAddAvatarCell;
- (double)heightForAddAvatarCell;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableViewHeight;
- (id)tableViewFooterView;
- (id)tableViewHeaderView;
- (void)initSubViews;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)onReturn;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 iconUrl:(id)arg3 scopeInfo:(id)arg4 avatarList:(id)arg5 avatarLimit:(unsigned int)arg6 isBanModifyAvatar:(_Bool)arg7 defaultAvatarId:(unsigned int)arg8;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
