//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString;

@interface MidasIAPPayResp : NSObject
{
    int _resultCode;
    int _workingStep;
    NSString *_resultInnerCode;
    NSString *_resultMsg;
    NSString *_respString;
    NSString *_extendJson;
    NSArray *_successProductIds;
    NSDictionary *_failedProductIds;
    NSError *_iapError;
}

+ (id)respWithResultCode:(int)arg1 innerCode:(id)arg2 resultMsg:(id)arg3 respString:(id)arg4;
@property(retain, nonatomic) NSError *iapError; // @synthesize iapError=_iapError;
@property(nonatomic) int workingStep; // @synthesize workingStep=_workingStep;
@property(retain, nonatomic) NSDictionary *failedProductIds; // @synthesize failedProductIds=_failedProductIds;
@property(retain, nonatomic) NSArray *successProductIds; // @synthesize successProductIds=_successProductIds;
@property(copy, nonatomic) NSString *extendJson; // @synthesize extendJson=_extendJson;
@property(copy, nonatomic) NSString *respString; // @synthesize respString=_respString;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *resultInnerCode; // @synthesize resultInnerCode=_resultInnerCode;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (id)init;

@end
