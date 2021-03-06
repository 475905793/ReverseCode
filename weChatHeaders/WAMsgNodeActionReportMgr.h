//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface WAMsgNodeActionReportMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_appCoreId2ReportInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)genReportKeyWithAppId:(id)arg1 coreId:(unsigned int)arg2;
- (void)tryLogLandPageRequestErrorIfFromWidget:(id)arg1 sceneNote:(id)arg2;
- (void)tryLogPageErrorAlarmIfFromWidget:(id)arg1;
- (void)logAlarmReportForCore:(id)arg1 coreId:(unsigned int)arg2 key:(long long)arg3;
- (void)logJSApiCallForCore:(id)arg1 coreId:(unsigned int)arg2 withName:(id)arg3;
- (void)reportForCore:(id)arg1 coreId:(unsigned int)arg2;
- (void)tryStopLogForCore:(id)arg1 coreId:(unsigned int)arg2;
- (void)stopLogForCore:(id)arg1 coreId:(unsigned int)arg2;
- (void)logActionForCore:(id)arg1 coreId:(unsigned int)arg2 withActionInfo:(id)arg3;
- (void)logActionForCore:(id)arg1 coreId:(unsigned int)arg2 withType:(int)arg3;
- (void)startLogForCore:(id)arg1 coreId:(unsigned int)arg2 withStatId:(id)arg3 debugMode:(unsigned int)arg4 hasWidgetData:(_Bool)arg5 userInfo:(id)arg6;
- (void)dealloc;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

