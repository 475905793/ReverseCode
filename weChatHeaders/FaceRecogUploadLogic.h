//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FaceRecogBindVideoLogicDelegate.h"
#import "ICdnComMgrExt.h"

@class FaceRecogBindVideoLogic, FaceRecogReporter, NSString;

@interface FaceRecogUploadLogic : MMObject <ICdnComMgrExt, FaceRecogBindVideoLogicDelegate>
{
    _Bool _uploading;
    unsigned int _scene;
    unsigned int _currentResourceType;
    id <FaceRecogUploadLogicDelegate> _delegate;
    NSString *_appId;
    NSString *_bioId;
    FaceRecogReporter *_reporter;
    NSString *_currentFaceResultClientId;
    NSString *_currentFaceVideoClientId;
    FaceRecogBindVideoLogic *_bindVideoLogic;
}

+ (id)genResourceClientId:(id)arg1;
@property(retain, nonatomic) FaceRecogBindVideoLogic *bindVideoLogic; // @synthesize bindVideoLogic=_bindVideoLogic;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
@property(nonatomic) unsigned int currentResourceType; // @synthesize currentResourceType=_currentResourceType;
@property(retain, nonatomic) NSString *currentFaceVideoClientId; // @synthesize currentFaceVideoClientId=_currentFaceVideoClientId;
@property(retain, nonatomic) NSString *currentFaceResultClientId; // @synthesize currentFaceResultClientId=_currentFaceResultClientId;
@property(retain, nonatomic) FaceRecogReporter *reporter; // @synthesize reporter=_reporter;
@property(copy, nonatomic) NSString *bioId; // @synthesize bioId=_bioId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <FaceRecogUploadLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onUploadOperationFinish:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)bindVideoOperationDone:(int)arg1 logic:(id)arg2;
- (_Bool)isUploadedCorrectResource:(id)arg1;
- (_Bool)startUploadFaceVideo:(id)arg1;
- (_Bool)startUploadFaceResult:(id)arg1;
- (void)onUploadStartFailed:(unsigned int)arg1;
- (_Bool)isUploading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

