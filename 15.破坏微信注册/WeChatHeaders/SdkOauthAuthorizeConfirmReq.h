//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface SdkOauthAuthorizeConfirmReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int avatarId; // @dynamic avatarId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleid; // @dynamic bundleid;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *state; // @dynamic state;

@end

