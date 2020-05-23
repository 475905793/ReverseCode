//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XNetRenderTargetDelegate-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString, XNetRenderTarget, XNetVideoRecorder;
@protocol XNetEffectManagerDelegate;

@interface XNetEffectManager : NSObject <XNetRenderTargetDelegate>
{
    struct unique_ptr<X3DRender::X3DEffect, std::__1::default_delete<X3DRender::X3DEffect>> _p3DEffect;
    _Bool _alwaysCopyPixelBuffer;
    _Bool _isFrontCamera;
    _Bool _hasSetupModels;
    _Bool _useSegment;
    _Bool _isBackground;
    _Bool _isRecording;
    _Bool _isRecordingRaw;
    id <XNetEffectManagerDelegate> _delegate;
    long long _outputFormat;
    long long _inputFormat;
    long long _orientation;
    NSMutableArray *_face2DStickers;
    NSMutableArray *_face3DStickers;
    NSMutableArray *_eyeBrows;
    NSMutableArray *_eyeShadows;
    NSMutableArray *_lipSticker;
    NSMutableArray *_faceContours;
    NSMutableArray *_segments;
    NSMutableArray *_frontStickers;
    NSMutableArray *_filters;
    NSMutableArray *_operations;
    double _edgeWidth;
    long long _trackConfig;
    long long _actionConfig;
    XNetVideoRecorder *_videoWriter;
    XNetRenderTarget *_renderTarget;
    double _animateInterval;
    long long _animateUpdateCountdown;
    NSRecursiveLock *_lock;
    CDStruct_1b6d18a9 _currentFrameTime;
    struct CGRect _captureFrame;
    struct CGRect _preferredRect;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long animateUpdateCountdown; // @synthesize animateUpdateCountdown=_animateUpdateCountdown;
@property double animateInterval; // @synthesize animateInterval=_animateInterval;
@property(nonatomic) struct CGRect preferredRect; // @synthesize preferredRect=_preferredRect;
@property(retain, nonatomic) XNetRenderTarget *renderTarget; // @synthesize renderTarget=_renderTarget;
@property(nonatomic) CDStruct_1b6d18a9 currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(nonatomic) struct CGRect captureFrame; // @synthesize captureFrame=_captureFrame;
@property(nonatomic) _Bool isRecordingRaw; // @synthesize isRecordingRaw=_isRecordingRaw;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) XNetVideoRecorder *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) long long actionConfig; // @synthesize actionConfig=_actionConfig;
@property(nonatomic) long long trackConfig; // @synthesize trackConfig=_trackConfig;
@property(nonatomic) double edgeWidth; // @synthesize edgeWidth=_edgeWidth;
@property(nonatomic) _Bool useSegment; // @synthesize useSegment=_useSegment;
@property(nonatomic) _Bool hasSetupModels; // @synthesize hasSetupModels=_hasSetupModels;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *frontStickers; // @synthesize frontStickers=_frontStickers;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSMutableArray *faceContours; // @synthesize faceContours=_faceContours;
@property(retain, nonatomic) NSMutableArray *lipSticker; // @synthesize lipSticker=_lipSticker;
@property(retain, nonatomic) NSMutableArray *eyeShadows; // @synthesize eyeShadows=_eyeShadows;
@property(retain, nonatomic) NSMutableArray *eyeBrows; // @synthesize eyeBrows=_eyeBrows;
@property(retain, nonatomic) NSMutableArray *face3DStickers; // @synthesize face3DStickers=_face3DStickers;
@property(retain, nonatomic) NSMutableArray *face2DStickers; // @synthesize face2DStickers=_face2DStickers;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool alwaysCopyPixelBuffer; // @synthesize alwaysCopyPixelBuffer=_alwaysCopyPixelBuffer;
@property(nonatomic) long long inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) __weak id <XNetEffectManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelRecordVideo;
- (void)finishRecordVideo:(CDUnknownBlockType)arg1;
- (void)prepareRecorderWithSize:(struct CGSize)arg1 filePath:(id)arg2;
- (void)startRecordWithVideoSize:(struct CGSize)arg1 captureFrame:(struct CGRect)arg2 filePath:(id)arg3 recordRawPixel:(_Bool)arg4;
- (unsigned long long)faceConfig;
- (_Bool)ensureX3DEffectInstance;
- (void)processRawBuffer:(struct __CVBuffer *)arg1 rawPixelTexture:(unsigned int)arg2;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1;
- (void)updateActionConfig:(id)arg1;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)resetAllAnimation;
- (void)clearFilters;
- (void)clearMakeUp;
- (void)clearStickers;
- (void)clearAll;
- (void)applyDefaultFilter;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyContours:(id)arg1;
- (void)enableBgSemgent:(_Bool)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)applyFaceThin:(double)arg1;
- (void)applySkinBright:(double)arg1;
- (void)applyEyeBigger:(double)arg1;
- (void)applyEyeBright:(double)arg1;
- (void)applySkinSmooth:(double)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)apply3DSticker:(id)arg1;
- (void)apply2DSticker:(id)arg1;
- (void)applyMultiSampling:(unsigned long long)arg1;
- (void)performCachedOperations;
- (void)renderFrameDidFinish:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)registerBackgroundNotification;
- (id)snapshotWithFrame:(struct CGRect)arg1 format:(long long)arg2;
- (id)processWithSampleImage:(id)arg1;
- (void)receiveVideoPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setVideoFrameRate:(long long)arg1 animationFrameRate:(long long)arg2;
- (void)setPreferredVideoOffset:(struct CGPoint)arg1;
- (void)setPreferredVideoSize:(struct CGSize)arg1;
- (id)previewLayer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
