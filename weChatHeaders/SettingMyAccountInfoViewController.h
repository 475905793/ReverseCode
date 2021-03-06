//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GetSafetyInfoLogicDelegate.h"
#import "IUpdateProfileMgrExt.h"
#import "PasswordLogicDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "VoicePrintSwitchOpDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "settingModifyAliasDelegate.h"

@class GetSafetyInfoLogic, MMTableViewInfo, NSString, PasswordLogic, VPSwitchOpCgi, WCAccountSetPasswordViewController;

@interface SettingMyAccountInfoViewController : MMUIViewController <VoicePrintSwitchOpDelegate, VerifyPhoneDelegate, WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, settingModifyAliasDelegate, IUpdateProfileMgrExt, GetSafetyInfoLogicDelegate>
{
    VPSwitchOpCgi *m_switchOpCgiHandle;
    PasswordLogic *m_passwdLogic;
    MMTableViewInfo *m_tableViewInfo;
    WCAccountSetPasswordViewController *m_setPasswordViewController;
    GetSafetyInfoLogic *m_getSafetyInfoLogic;
    SEL m_getSafetyInfoNextStepSEL;
}

- (void).cxx_destruct;
- (void)initDeepLinkConfig;
- (void)OnSwitchOpErrorWithScene:(unsigned int)arg1 andErrorCode:(int)arg2;
- (void)OnSwitchOp:(int)arg1 andSwitch:(int)arg2 withScene:(unsigned int)arg3;
- (void)saveNewAlias;
- (void)willShow;
- (void)ReloadData;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)unknownFail:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)openSecurityCenter;
- (void)setTrustedFriends;
- (void)showMoreAccount;
- (void)setSaveDevice;
- (void)setVoicePrint;
- (void)setPassword;
- (void)showSetPassword:(_Bool)arg1;
- (void)bindPhoneReturn;
- (void)showBindPhone;
- (id)makeBindPhoneView;
- (void)onGetSafetyInfoComplete:(_Bool)arg1;
- (void)startGetSafetyInfo:(SEL)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)undoRegester;
- (void)doRegester;
- (void)reloadTableData;
- (void)initSecurityCellData;
- (void)initWeChatIDView;
- (void)showModifyUserName;
- (int)getLinesForV:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

