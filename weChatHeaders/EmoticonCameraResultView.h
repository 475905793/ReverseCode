//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BaseEmoticonViewDelegate.h"
#import "EditImageAnimatedDelegate.h"
#import "EditImageAnimatedOperationDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonEditTextInputDelegate.h"
#import "EmoticonTextAntiSpamCgiDelegate.h"
#import "FSVideoInputDelegate.h"

@class EditImageAnimatedTextTool, EditImageDeleteBarView, EmoticonBoardView, EmoticonCameraReportObject, EmoticonCameraResultSetting, EmoticonEditTextInputView, EmoticonEmptyEditView, EmoticonTabBarButton, FSVideoInput, FilterManager, MMTimer, NSString, SightPreviewViewF3, UIButton, UIImageView;

@interface EmoticonCameraResultView : UIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EditImageAnimatedOperationDelegate, EditImageAnimatedDelegate, EmoticonEditTextInputDelegate, EmoticonTextAntiSpamCgiDelegate, FSVideoInputDelegate>
{
    UIView *m_previewBGView;
    UIImageView *m_imageView;
    UIView *m_editToolsView;
    UIButton *m_removeBgButton;
    UIButton *m_fastPlayButton;
    UIButton *m_emoticonButton;
    EmoticonBoardView *m_emoticonBoardView;
    EmoticonEmptyEditView *m_editImageView;
    EditImageDeleteBarView *m_editDeleteBar;
    EditImageAnimatedTextTool *m_editImageTextView;
    EmoticonEditTextInputView *m_tempTextInputView;
    _Bool m_supportRemoveBackgroud;
    _Bool _waitForCaption;
    _Bool _isGPUFrozen;
    _Bool _isInterruptByGPUFrozen;
    id <EmoticonCameraResultViewDelegate> _delegate;
    NSString *_caption;
    NSString *_followMd5;
    EmoticonCameraReportObject *_reportObject;
    UIView *_bottomView;
    EmoticonTabBarButton *_cancelButton;
    EmoticonTabBarButton *_confirmButton;
    EmoticonCameraResultSetting *_resultSetting;
    FilterManager *_filterManager;
    FSVideoInput *_videoInput;
    SightPreviewViewF3 *_previewView;
    MMTimer *_timer;
    CDStruct_1b6d18a9 _currentFrameTime;
}

@property(nonatomic) CDStruct_1b6d18a9 currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SightPreviewViewF3 *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) FSVideoInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) FilterManager *filterManager; // @synthesize filterManager=_filterManager;
@property(retain, nonatomic) EmoticonCameraResultSetting *resultSetting; // @synthesize resultSetting=_resultSetting;
@property(retain, nonatomic) EmoticonTabBarButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) EmoticonTabBarButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isInterruptByGPUFrozen; // @synthesize isInterruptByGPUFrozen=_isInterruptByGPUFrozen;
@property _Bool isGPUFrozen; // @synthesize isGPUFrozen=_isGPUFrozen;
@property(retain, nonatomic) EmoticonCameraReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
@property(nonatomic) _Bool waitForCaption; // @synthesize waitForCaption=_waitForCaption;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic) __weak id <EmoticonCameraResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoInput:(id)arg1 didOutputSampleBuffer:(id)arg2;
- (void)videoInputDidFail:(id)arg1;
- (void)videoInputDidFinishReading:(id)arg1;
- (void)onEmoticonTextAntiSpamCgiFailed:(id)arg1;
- (void)onEmoticonTextAntiSpamCgiFinished:(id)arg1;
- (void)onEmoticonEditTextInputDidChange:(id)arg1 isFirstTyping:(_Bool)arg2;
- (void)onEmoticonEditTextInputCancel:(id)arg1;
- (void)onEmoticonEditTextInputFinished:(id)arg1;
- (_Bool)startEditingTextWithAnimatedWidgetTool:(id)arg1;
- (struct CGRect)deleteArea;
- (void)adjustEditImageAnimatedWidgetTool:(id)arg1;
- (void)editImageViewDidDeleteWidgetTool:(id)arg1;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)onSendButtonClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didClickEmoticonButton:(id)arg1;
- (void)didClickFastPlayButton:(id)arg1;
- (void)changeRemoveBgState;
- (void)didClickRemoveBgButton:(id)arg1;
- (void)didClickCancel;
- (void)compressWithImages:(id)arg1 setting:(id)arg2 overlayLayer:(id)arg3 useWxam:(_Bool)arg4 outputSize:(struct CGSize)arg5 withBlock:(CDUnknownBlockType)arg6;
- (void)convertVideoPath:(id)arg1 setting:(id)arg2 overlayLayer:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)didRealClickDone;
- (void)didClickDone;
- (void)updateVideoFrames;
- (void)checkText:(id)arg1;
- (id)trimText:(id)arg1;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1;
- (void)setupEditImageTextView;
- (void)setupEditImageView;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)playButtonAnimation;
- (void)setupBottomView;
- (id)editToolsButtonWithTitle:(id)arg1 titileHL:(id)arg2 image:(id)arg3 imageSelected:(id)arg4 imageHL:(id)arg5;
- (void)setupEditTools;
- (void)setupPreviewBGView;
- (void)setupBgView;
- (void)configFilterManager;
- (void)continueConfigPlayerView;
- (void)checkWaitForCaptionTimeOut;
- (void)resumeCompose;
- (void)showResultWithVideoPath:(id)arg1;
- (void)showResultWithImage:(id)arg1;
- (void)setRemoveBg:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSString *videoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
