//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRadarSearchExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMScrollView, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface RadarCreateRoomViewController : MMUIViewController <PBMessageObserverDelegate, IRadarSearchExt, UIScrollViewDelegate>
{
    NSMutableArray *m_arrHeads;
    NSMutableArray *m_arrWillShowMember;
    NSString *m_nsTicket;
    UILabel *m_titleLabel;
    UIView *m_topLine;
    UIView *m_bottomLine;
    UIView *m_blurView;
    MMScrollView *m_scrollView;
    UIButton *m_enterBtn;
    UIImageView *m_emptyHead;
    UILabel *m_labelSmallTip;
    UIView *m_keyBoard;
    UILabel *m_labelTip;
    UIActivityIndicatorView *m_activityIndicatorView;
    UIView *m_code;
    UITextField *m_hiddenTextField;
    _Bool m_bShowingHeads;
    _Bool m_bConfirming;
    _Bool m_bEnabled;
    _Bool m_bWaitingForLocation;
    _Bool m_bWaitingForClearNumber;
    _Bool m_bWaitingForClearAll;
    _Bool m_bDonotQuit;
    _Bool m_bRetry;
    _Bool m_bEntering;
    _Bool m_bIsNeedToReport;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleEnterRoomResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCheckPwdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCreateChatRoomResp:(id)arg1 Event:(unsigned int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)joinChatRoom;
- (void)getPreEnterRoomMemberList;
- (_Bool)sendRequest:(unsigned int)arg1;
- (void)showMember:(id)arg1;
- (void)showOneMember;
- (struct CGRect)getFrameAtIndex:(unsigned int)arg1;
- (_Bool)isEqualMember:(id)arg1 withMember:(id)arg2;
- (void)enterConfirmView:(id)arg1;
- (void)initConfirmView;
- (void)updateConfirmView;
- (void)startCreateRoom;
- (void)checkPwd;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initCreateRoomView;
- (void)updateCreateRoomView;
- (void)iniCodeView;
- (void)initKeyBoard;
- (void)genNumberBtnSpaceLine;
- (void)genNumberBtnWithIndex:(unsigned int)arg1;
- (struct CGRect)getNumberBtnFrameAt:(unsigned int)arg1;
- (void)genNumberLabelWithIndex:(unsigned int)arg1;
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationTimeout;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)setControlEnabled;
- (void)setControlEnable:(_Bool)arg1;
- (void)showTipView:(id)arg1 title:(id)arg2 withLoading:(_Bool)arg3;
- (void)showTipView:(id)arg1 withLoading:(_Bool)arg2;
- (void)clickBtn;
- (void)deleteChar;
- (void)addChar:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged;
- (void)clearChar;
- (void)updateNumberLabels;
- (void)OnRadarSearchCreateRoomCancel;
- (void)onRadarSearchViewClose:(_Bool)arg1;
- (void)doCleanWhenDismiss;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

