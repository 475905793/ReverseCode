//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString, NetworkSectResp;

@interface VerifyFaceResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int detailRet; // @dynamic detailRet;
@property(retain, nonatomic) NetworkSectResp *netWork; // @dynamic netWork;
@property(retain, nonatomic) NSString *passTicket; // @dynamic passTicket;

@end
