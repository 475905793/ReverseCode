//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "InputControllerDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"

@class MMGrowTextView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, UIViewController, WCInputController;
@protocol MMTipsViewControllerDelegate;

@interface MMTipsViewController : MMWindowViewController <MMTipsViewControllerDelegate, InputControllerDelegate>
{
    id <MMTipsViewControllerDelegate> m_delegate;
    unsigned long long _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSString *_tipsImgName;
    NSMutableArray *_tipsActionArray;
    NSMutableArray *_btnArray;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    unsigned int _tipsTextMaxCount;
    MMGrowTextView *_tipsTextView;
    UILabel *_placeHolderLabel;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    WCInputController *_inputController;
    UIView *_textBackgroundImage;
    _Bool _hasInputSth;
    UITapGestureRecognizer *_tapGR;
    UIButton *_backgroundBtn;
    UIImageView *_contentBg;
    UIImageView *_tipsImgView;
    UIView *_contentView;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    NSMutableArray *_starScoreBtnTitleArray;
    UIView *_starScoreView;
    NSMutableArray *_starsImageViewArray;
    int _score;
    _Bool _hasTapStar;
    double contentYOfKeyboardShow;
    _Bool _customViewNeedAboveContent;
    _Bool bIsForbidCancelBtn;
    _Bool _allButtonVertical;
    _Bool _hideTipsWhenClickedOutOfTips;
    _Bool _customViewMaintainRatio;
    id _m_userData;
    NSString *_tipsTextPlaceholder;
    NSString *_textFieldDefaultText;
    long long _tipTag;
    UIView *_customView;
    UIViewController *_topViewController;
}

@property(nonatomic) _Bool customViewMaintainRatio; // @synthesize customViewMaintainRatio=_customViewMaintainRatio;
@property(nonatomic) _Bool hideTipsWhenClickedOutOfTips; // @synthesize hideTipsWhenClickedOutOfTips=_hideTipsWhenClickedOutOfTips;
@property(nonatomic) _Bool allButtonVertical; // @synthesize allButtonVertical=_allButtonVertical;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) long long tipTag; // @synthesize tipTag=_tipTag;
@property(copy, nonatomic) NSString *textFieldDefaultText; // @synthesize textFieldDefaultText=_textFieldDefaultText;
@property(copy, nonatomic) NSString *tipsTextPlaceholder; // @synthesize tipsTextPlaceholder=_tipsTextPlaceholder;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData=_m_userData;
@property(nonatomic) _Bool bIsForbidCancelBtn; // @synthesize bIsForbidCancelBtn;
@property(retain, nonatomic) MMUILabel *m_tipsTitleLabel; // @synthesize m_tipsTitleLabel=_tipsTitleLabel;
@property(retain, nonatomic) MMUILabel *m_tipsContentLabel; // @synthesize m_tipsContentLabel=_tipsContentLabel;
@property(nonatomic) __weak id <MMTipsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleKeyboardDidHide;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)setButtonsAtIndex:(unsigned int)arg1 enable:(_Bool)arg2;
- (void)onTapStar:(id)arg1;
- (void)tapGestureInProcess:(id)arg1;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)removeAllBtn;
- (void)setButtonsEnable:(_Bool)arg1;
- (void)onClickBtn:(id)arg1;
- (id)getButtonFromBtnString:(id)arg1 defaultColor:(id)arg2 location:(long long)arg3;
- (void)updateSubViewsFrame;
- (id)getBtnAtIndex:(unsigned int)arg1;
- (void)initStarScoreView;
- (void)resignInput;
- (void)becomeInput;
- (void)initInputController;
- (void)initInputToolView;
- (void)initInputView;
- (void)createContainImgTips;
- (id)getContentImageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)viewDidLoad;
- (void)clickBgEmptyToHideTips;
- (void)hideTips;
- (id)getTextView;
- (void)addTextViewWithMaxLen:(unsigned int)arg1;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (id)initWithTitle:(id)arg1 content:(id)arg2 ignoreScoreText:(id)arg3 cancelText:(id)arg4 andConfirmText:(id)arg5;
- (id)initWithTitle:(id)arg1 content:(id)arg2 customView:(id)arg3 buttons:(id)arg4 customViewAboveContent:(_Bool)arg5;
- (id)initWithTitle:(id)arg1 content:(id)arg2 customView:(id)arg3 buttons:(id)arg4;
- (id)initWithTitle:(id)arg1 content:(id)arg2 textFieldPlaceholder:(id)arg3 maxCount:(unsigned int)arg4 buttons:(id)arg5;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
@property(nonatomic) _Bool isRequestKeyWindow;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 content:(id)arg3 actions:(id)arg4;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 content:(id)arg3 buttons:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4 andConfirmText:(id)arg5;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initWithTitle:(id)arg1 content:(id)arg2 buttons:(id)arg3;
- (CDUnknownBlockType)clickBtnBlock;
- (void)setClickBtnBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)clickEmptyBlock;
- (void)setClickEmptyBlock:(CDUnknownBlockType)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)showWithClickEmpty:(CDUnknownBlockType)arg1 clickBtn:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
