//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString, StoryCommentDetail;

@interface StoryCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) StoryCommentDetail *commentDetail; // @dynamic commentDetail;
@property(nonatomic) unsigned int previewEnterScene; // @dynamic previewEnterScene;
@property(nonatomic) unsigned int profileSource; // @dynamic profileSource;
@property(retain, nonatomic) StoryCommentDetail *referCommentDetail; // @dynamic referCommentDetail;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end
