//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKCardNumberEditView-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMDynamicColor, MMKCardNumberEditViewOnTextChangedCallback, NSString, WCPayTenpaySecureCtrlItem;

@interface KindaCardNumberEditView : KindaView <UITextFieldDelegate, WCBaseInfoItemDelegate, MMKCardNumberEditView>
{
    MMKCardNumberEditViewOnTextChangedCallback *m_callback;
    _Bool _m_bFocus;
    WCPayTenpaySecureCtrlItem *_m_textFieldItem;
    MMDynamicColor *_m_hintColor;
}

@property(retain, nonatomic) MMDynamicColor *m_hintColor; // @synthesize m_hintColor=_m_hintColor;
@property(nonatomic) _Bool m_bFocus; // @synthesize m_bFocus=_m_bFocus;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *m_textFieldItem; // @synthesize m_textFieldItem=_m_textFieldItem;
- (void).cxx_destruct;
- (id)getHintColor;
- (void)setHintColor:(id)arg1;
- (void)setHint:(id)arg1;
- (id)getHint;
- (_Bool)isBankCardNumber;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getValue;
- (id)getView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
