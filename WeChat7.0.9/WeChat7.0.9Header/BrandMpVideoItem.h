//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface BrandMpVideoItem : NSObject <NSCopying>
{
    _Bool _bUseExternalVideoPath;
    _Bool _bNoNeedRequestNewUrl;
    NSString *_mpUrl;
    NSString *_videoVid;
    NSString *_videoUrl;
    double _videoDuration;
    double _thumbWidth;
    double _thumbHeight;
    long long _subscene;
    NSString *_videoUrlNew;
}

@property(copy, nonatomic) NSString *videoUrlNew; // @synthesize videoUrlNew=_videoUrlNew;
@property(nonatomic) long long subscene; // @synthesize subscene=_subscene;
@property(nonatomic) _Bool bNoNeedRequestNewUrl; // @synthesize bNoNeedRequestNewUrl=_bNoNeedRequestNewUrl;
@property(nonatomic) _Bool bUseExternalVideoPath; // @synthesize bUseExternalVideoPath=_bUseExternalVideoPath;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoVid; // @synthesize videoVid=_videoVid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
- (void).cxx_destruct;
- (id)description;
- (_Bool)checkData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
