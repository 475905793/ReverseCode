//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CALayer, NSString, UIImage;

@interface VideoCompositionAttr : MMObject
{
    UIImage *overlayImage;
    CALayer *_overlayLayer;
    unsigned long long _entranceType;
    NSString *_videoBGMPath;
    CDStruct_e83c9415 cropTimeRange;
}

@property(copy, nonatomic) NSString *videoBGMPath; // @synthesize videoBGMPath=_videoBGMPath;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) CDStruct_e83c9415 cropTimeRange; // @synthesize cropTimeRange;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage;
- (void).cxx_destruct;

@end
