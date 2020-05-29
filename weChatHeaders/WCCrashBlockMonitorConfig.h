//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MatrixPluginConfig.h"

@class NSString, WCBlockMonitorConfiguration;

@interface WCCrashBlockMonitorConfig : MatrixPluginConfig
{
    _Bool _enableCrash;
    _Bool _enableBlockMonitor;
    NSString *_appVersion;
    NSString *_appShortVersion;
    id <WCCrashBlockMonitorDelegate> _blockMonitorDelegate;
    CDUnknownFunctionPointerType _onHandleSingalCallBack;
    CDUnknownFunctionPointerType _onCrash;
    WCBlockMonitorConfiguration *_blockMonitorConfiguration;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) WCBlockMonitorConfiguration *blockMonitorConfiguration; // @synthesize blockMonitorConfiguration=_blockMonitorConfiguration;
@property(nonatomic) CDUnknownFunctionPointerType onCrash; // @synthesize onCrash=_onCrash;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSingalCallBack; // @synthesize onHandleSingalCallBack=_onHandleSingalCallBack;
@property(nonatomic) __weak id <WCCrashBlockMonitorDelegate> blockMonitorDelegate; // @synthesize blockMonitorDelegate=_blockMonitorDelegate;
@property(nonatomic) _Bool enableBlockMonitor; // @synthesize enableBlockMonitor=_enableBlockMonitor;
@property(nonatomic) _Bool enableCrash; // @synthesize enableCrash=_enableCrash;
@property(copy, nonatomic) NSString *appShortVersion; // @synthesize appShortVersion=_appShortVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;
- (id)init;

@end
